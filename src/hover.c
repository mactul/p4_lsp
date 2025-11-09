#include "tos.h"
#include <stdio.h>

char _hover_string[4096] = "";

void set_hover(int tos_id)
{
    Symbol* s = tos_get_element(tos_id);
    if(s->p4_type.category == P4_TYPE_CATEGORY_SYMBOL_REF)
    {
        snprintf(_hover_string, 4096, "```c\n%s %s;\n```", tos_get_element(s->p4_type.type.symbol_id)->name, s->name);
    }
    else
    {
        _hover_string[0] = '\0';
    }
}

const char* get_hover_string(void)
{
    return _hover_string;
}
