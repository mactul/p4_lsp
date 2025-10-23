
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

static const char* _main_filepath = NULL;
static bool _is_main_filepath = true;

void set_main_filepath(const char* filepath)
{
    _main_filepath = filepath;
}

void enter_file(const char* filepath)
{
    _is_main_filepath = (strcmp(filepath, _main_filepath) == 0);
}

bool add_token(enum TOKEN_TYPE type, size_t line, size_t col_start, size_t len, uint64_t modifiers)
{
    if(!_is_main_filepath)
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


void print_tokens()
{
    for(unsigned int i = 0; i < token_list.size; i++)
    {
        printf("TYPE: %d\tLINE: %d\tCOL: %d\tLEN: %d\tMODIFIERS: %d\n", token_list.elements[i].type, token_list.elements[i].line, token_list.elements[i].col_start, token_list.elements[i].len, token_list.elements[i].modifiers);
    }
}


void free_tokens()
{
    free(token_list.elements);
    token_list.elements = NULL;
    token_list.size = 0;
    token_list.allocated = 0;
}
