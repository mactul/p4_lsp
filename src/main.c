#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "tos.h"
#include "token.h"
#include "hover.h"

extern int yydebug;
extern int yylex(void);
extern int yyparse(void);
extern int yylex_destroy(void);
extern FILE* yyin;

extern ssize_t _line_requested;
extern ssize_t _col_requested;

ssize_t _line_requested = -1;
ssize_t _col_requested = -1;

int main(int argc, char** argv)
{
    int return_code = 1;

    yyin = NULL;

    if(argc == 4 && strcmp(argv[1], "hover") == 0)
    {
        _line_requested = atoi(argv[2]);
        _col_requested = atoi(argv[3]);
    }


    int out_fds[2];
    int in_fds[2];

    if(pipe(out_fds) < 0)
    {
        perror("pipe: ");
        goto FREE;
    }

    if(pipe(in_fds) < 0)
    {
        perror("pipe: ");
        goto FREE;
    }

    switch (fork())
    {
        case -1:
            perror("Fork error: ");
            goto FREE;
        case 0:
            //child
            close(in_fds[1]);
            close(out_fds[0]);
            dup2(in_fds[0], STDIN_FILENO);
            dup2(out_fds[1], STDOUT_FILENO);
            execlp("gcc", "gcc", "-C", "-E", "-x", "c", "-", "-I", "p4include", NULL);
            return 1;
        default:
            close(in_fds[0]);
            close(out_fds[1]);
    }

    char buf[4096];
    ssize_t n;
    while ((n = read(STDIN_FILENO, buf, sizeof(buf))) > 0) {
        if (write(in_fds[1], buf, (size_t)n) != n) {
            perror("write to gcc");
            break;
        }
    }
    close(in_fds[1]);

    yyin = fdopen(out_fds[0], "r");

    if(!tos_init())
    {
        fprintf(stderr, "\033[31;1mError\033[0m: Unable to init TOS\n\n");
        goto FREE;
    }

    if(yyparse() != 0)
    {
        fprintf(stderr, "\033[31;1mSyntax Error\033\n\n");
        goto PRINT_TOKENS;
    }

    int reason;
    if(wait(&reason) < 0 || !WIFEXITED(reason))
    {
        perror("wait: ");
        goto FREE;
    }

    if(WEXITSTATUS(reason) != 0)
    {
        fprintf(stderr, "Preprocessor error\n");
        goto FREE;
    }

    return_code = 0;

PRINT_TOKENS:
    if(argc == 4 && strcmp(argv[1], "hover") == 0)
    {
        printf("%s\n", get_hover_string());
    }
    else {
        print_tokens();
    }
FREE:
    tos_free();
    if(yyin != NULL)
    {
        fclose(yyin);
    }

    yylex_destroy();

    return return_code;
}

