#ifndef TOS_H
#define TOS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

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

enum P4_TYPE_CATEGORY {
    P4_TYPE_CATEGORY_SYMBOL_REF,
    P4_TYPE_CATEGORY_UNKNOWN
};

struct p4_type {
    union {
        int symbol_id;
    } type;
    enum P4_TYPE_CATEGORY category;
};

typedef struct {
    char* name;
    enum TOS_TYPES type;
    int scope_depth;
    ssize_t line;
    ssize_t col;
    struct p4_type p4_type;
    size_t nb_members;
    size_t nb_members_allocated;
    int* members_ids;
} Symbol;

bool tos_init();
int tos_register_identifier(enum TOS_TYPES type, const char* identifier, ssize_t line, ssize_t col);
void tos_print();
void tos_free();
int tos_get_size();
Symbol* tos_get_element(int n);

bool tos_add_member(int type_id, int member_id);

void tos_increase_scope_depth(void);
void tos_decrease_scope_depth(void);

void increase_line_counter(int n);
int get_current_line_count();

void set_error_message(const char* error_message);
const char* get_error_message();

#endif
