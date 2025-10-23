#ifndef TOS_H
#define TOS_H

#include <stdbool.h>

enum TOS_TYPES {
    TOS_EXPIRED,
    TOS_IDENTIFIER,
    TOS_TYPE_IDENTIFIER,
};

enum COMPARISON_OPERATORS {
    COMP_OP_EQUAL,
    COMP_OP_SUP_EQUAL,
    COMP_OP_INF_EQUAL,
    COMP_OP_INF,
    COMP_OP_SUP
};

typedef struct {
    char* name;
    enum TOS_TYPES type;
    int scope_depth;
} Symbol;

bool tos_init();
int tos_register_identifier(enum TOS_TYPES type, const char* identifier);
void tos_print();
void tos_free();
int tos_get_size();
Symbol* tos_get_element(int n);

void tos_increase_scope_depth(void);
void tos_decrease_scope_depth(void);

void increase_line_counter(int n);
int get_current_line_count();

void set_error_message(const char* error_message);
const char* get_error_message();

#endif
