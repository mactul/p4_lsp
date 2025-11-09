#include "tos.h"
#include <stdio.h>
#include <string.h>

char _hover_string[4096] = "";

void set_hover(int tos_id)
{
    Symbol* s = tos_get_element(tos_id);
    if(s->p4_type.category == P4_TYPE_CATEGORY_SYMBOL_REF)
    {
        Symbol* t = tos_get_element(s->p4_type.type.symbol_id);
        snprintf(_hover_string, 4096, "```c\n%s %s;\n```\n## Members:\n", t->name, s->name);
        for(size_t i = 0; i < t->nb_members; i++)
        {
            strcat(_hover_string, "- ");
            strcat(_hover_string, tos_get_element(t->members_ids[i])->name);
            strcat(_hover_string, "\n");
        }
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
