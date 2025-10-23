#ifndef TOKEN_H
#define TOKEN_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

enum TOKEN_TYPE {
    TOKEN_KEYWORD,
    TOKEN_TYPE,
};

void set_main_filepath(const char* filepath);

void enter_file(const char* filepath);

bool add_token(enum TOKEN_TYPE type, size_t line, size_t col_start, size_t len, uint64_t modifiers);

void print_tokens();

void free_tokens();

#endif
