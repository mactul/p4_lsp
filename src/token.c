
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "token.h"


struct token {
    size_t line;
    size_t col_start;
    size_t len;
    enum TOKEN_TYPE type;
    uint64_t modifiers;
};

static struct {
    struct token* elements;
    unsigned int size;
    unsigned int allocated;
} token_list = {.elements = NULL, .size = 0, .allocated = 0};

static char* _main_filepath = NULL;
static bool _is_main_filepath = true;

void enter_file(const char* filepath)
{
    if(_main_filepath == NULL)
    {
        _main_filepath = malloc(strlen(filepath)+1);
        strcpy(_main_filepath, filepath);
    }
    _is_main_filepath = (strcmp(filepath, _main_filepath) == 0);
}

bool is_main_filepath()
{
    return _is_main_filepath;
}

bool add_token(enum TOKEN_TYPE type, size_t line, size_t col_start, size_t len, uint64_t modifiers, bool check_filepath)
{
    if(check_filepath && !_is_main_filepath)
    {
        return true;
    }

    if(token_list.size >= token_list.allocated)
    {
        if(token_list.allocated == 0)
        {
            token_list.allocated = 256;
        }
        else
        {
            token_list.allocated *= 2;
        }
        void* temp = realloc(token_list.elements, token_list.allocated * sizeof(struct token));
        if(temp == NULL)
        {
            return false;
        }
        token_list.elements = temp;
    }

    token_list.elements[token_list.size].type = type;
    token_list.elements[token_list.size].line = line;
    token_list.elements[token_list.size].col_start = col_start;
    token_list.elements[token_list.size].len = len;
    token_list.elements[token_list.size].modifiers = modifiers;

    token_list.size++;
    return true;
}

int cmp_lines(const void* e1, const void* e2)
{
    return (int)(((struct token*)e1)->line - ((struct token*)e2)->line);
}

void print_tokens()
{
    size_t last_line = 0;
    size_t last_col = 0;

    qsort(token_list.elements, token_list.size, sizeof(struct token), cmp_lines);
    for(unsigned int i = 0; i < token_list.size; i++)
    {
        size_t delta_line = token_list.elements[i].line - last_line - 1;
        size_t delta_col = token_list.elements[i].col_start;
        if(delta_line == 0)
        {
            delta_col -= last_col;
        }

        printf("%lu %lu %lu %d %lu ", delta_line, delta_col, token_list.elements[i].len, token_list.elements[i].type, token_list.elements[i].modifiers);

        last_line = token_list.elements[i].line - 1;
        last_col = token_list.elements[i].col_start;
    }
    fflush(stdout);
}


void free_tokens()
{
    free(token_list.elements);
    token_list.elements = NULL;
    token_list.size = 0;
    token_list.allocated = 0;
}
