#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "tos.h"
#include "token.h"

extern int yydebug;
extern int yylex(void);
extern int yyparse(void);
extern int yylex_destroy(void);
extern FILE* yyin;



int main(int argc, char** argv)
{
    int return_code = 1;

    yyin = NULL;


    if(argc < 2)
    {
        fputs("\033[31;1mError\033[0m: No input file\n\n", stderr);
        goto FREE;
    }


    int fds[2];

    if(pipe(fds) < 0)
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
            close(fds[0]);
            dup2(fds[1], STDOUT_FILENO);
            execlp("gcc", "gcc", "-C", "-E", "-x", "c", argv[1], "-I", "p4include", NULL);
            return 1;
        default:
            close(fds[1]);
    }

    yyin = fdopen(fds[0], "r");

    if(!tos_init())
    {
        fprintf(stderr, "\033[31;1mError\033[0m: Unable to init TOS\n\n");
        goto FREE;
    }

    if(yyparse() != 0)
    {
        fprintf(stderr, "\033[31;1mSyntax Error\033[0;1m: %s:%d\033[0m: %s\n\n", argv[1], get_current_line_count(), get_error_message());
        goto FREE;
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

    // tos_print();
    print_tokens();

    return_code = 0;
FREE:
    tos_free();
    if(yyin != NULL)
    {
        fclose(yyin);
    }

    yylex_destroy();

    return return_code;
}

