#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/hashmap.h"
#include "tos.h"

static int _line_counter = 1;
static const char* _error_message = "";

static HashMap* _tos = NULL;


struct {
    Symbol* elements;
    unsigned int size;
    unsigned int allocated;
} symbols_list = {.elements = NULL, .size = 0, .allocated = 0};


bool tos_init()
{
    _tos = hashmap_create();
    if(_tos == NULL)
    {
        return false;
    }
    return true;
}

int tos_register_identifier(enum TOS_TYPES type, const char* name)
{

    if(name != NULL)
    {
        int v = hashmap_get_value(_tos, name);
        if(v >= 0)
        {
            return v;
        }
    }

    if(symbols_list.size >= symbols_list.allocated)
    {
        if(symbols_list.allocated == 0)
        {
            symbols_list.allocated = 32;
        }
        else
        {
            symbols_list.allocated *= 2;
        }
        void* temp = realloc(symbols_list.elements, symbols_list.allocated * sizeof(Symbol));
        if(temp == NULL)
        {
            return -1;
        }
        symbols_list.elements = temp;
    }

    char* name_allocated = NULL;

    if(name != NULL)
    {
        name_allocated = malloc((strlen(name) + 1) * sizeof(char));
        if(name_allocated == NULL)
        {
            return -1;
        }
        strcpy(name_allocated, name);

        hashmap_set_value(_tos, name_allocated, (int)symbols_list.size);
    }

    symbols_list.elements[symbols_list.size].name = name_allocated;
    symbols_list.elements[symbols_list.size].type = type;
    symbols_list.elements[symbols_list.size].nb_dim = -1;
    symbols_list.elements[symbols_list.size].size_ids = NULL;

    return (int)symbols_list.size++;
}

static const char* display_type(enum TOS_TYPES type)
{
    switch(type)
    {
        case TOS_IDENTIFIER:
            return "IDENTIFIER";
        case TOS_TYPE_IDENTIFIER:
            return "TYPE_IDENTIFIER";
    }
    return "";
}

void tos_print()
{
    printf("================================================================================\n");
    printf("=============================== Table of Symbols ===============================\n");
    printf("================================================================================\n");
    for(unsigned int i = 0; i < symbols_list.size; i++)
    {
        if(symbols_list.elements[i].name != NULL)
        {
            printf("ID: %d\tType: %s\t\tName: %s\n", i, display_type(symbols_list.elements[i].type), symbols_list.elements[i].name);
        }
    }
    printf("================================================================================\n");
}

void tos_free()
{
    hashmap_free(&_tos);
    for(unsigned int i = 0; i < symbols_list.size; i++)
    {
        free(symbols_list.elements[i].name);
        free(symbols_list.elements[i].size_ids);
    }
    free(symbols_list.elements);
    symbols_list.elements = NULL;
    symbols_list.size = 0;
    symbols_list.allocated = 0;
}

int tos_get_size()
{
    return (int) symbols_list.size;
}

Symbol* tos_get_element(int n)
{
    return symbols_list.elements + n;
}


void increase_line_counter(int n)
{
    _line_counter += n;
}

int get_current_line_count()
{
    return _line_counter;
}

void set_error_message(const char* error_message)
{
    _error_message = error_message;
}

const char* get_error_message()
{
    return _error_message;
}
