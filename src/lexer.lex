%{
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include "tos.h"
    #include "parser.tab.h"
    #include "token.h"
    #include "hover.h"

    extern ssize_t _line_requested;
    extern ssize_t _col_requested;

    #ifdef FLEX_PRINT_DEBUG
        #define PRINT_DEBUG(str) puts(str)
    #else
        #define PRINT_DEBUG(str)
    #endif

    #define INFOS_ASKED(line, col, len) (is_main_filepath() && (ssize_t)(line) == _line_requested && (ssize_t)(col) <= _col_requested && (ssize_t)((col) + (len)) >= _col_requested)

    static size_t line = 0;
    static size_t col = 0;
    void handle_long_comment(const char* str, size_t* line, size_t* col);
    void handle_preprocessor_info(char* str, size_t* line, size_t* col);

%}

%option noinput
%option nounput

IDENTIFIER [a-zA-Z_][a-zA-Z_0-9]*
STRING_LITERAL \"(?:\\.|[^\"\\])*\"
SYM_LONG_COMMENT \/\*([^\*]*[\*]*[^\*/])*[^*]*[\*]+\/
SYM_SHORT_COMMENT \/\/.*$
SYM_PREPROCESSOR_INFO #.*\n

%%

abstract {col += 8; return ABSTRACT;}
action {col += 6; return ACTION;}
actions {col += 7; return ACTIONS;}
&& {col += 2; return AND;}
apply {yylval.identifier.infos_asked = INFOS_ASKED(line, col, 5); yylval.identifier.tos_id = tos_register_identifier(TOS_IDENTIFIER, "apply", (ssize_t)line, (ssize_t)col); col += 5; return APPLY;}
bit {col += 3; return BIT;}
bool {col += 4; return BOOL;}
, {col += 1; return COMMA;}
const {col += 5; return CONST;}
control {col += 7; return CONTROL;}
default {col += 7; return DEFAULT;}
different {col += 2; return DIFFERENT;}
_ {col += 1; return DONTCARE;}
else {col += 4; return ELSE;}
entries {col += 7; return ENTRIES;}
enum {col += 4; return ENUM;}
== {col += 2; return EQUAL;}
error {col += 5; return ERROR;}
exit {col += 4; return EXIT;}
extern {col += 6; return EXTERN;}
false {col += 5; return FALSE;}
header {col += 6; return HEADER;}
header_union {col += 12; return HEADER_UNION;}
if {col += 2; return IF;}
in {col += 2; return IN;}
\+\+ {col += 2; return INCREMENT;}
inout {col += 5; return INOUT;}
int {col += 3; return INT;}
key {col += 3; return KEY;}
(<<) {col += 2; return LEFT_SHIFT;}
(<=) {col += 2; return LESS_EQUAL;}
&&& {col += 3; return MASK;}
match_kind {col += 10; return MATCH_KIND;}
(>=) {col += 2; return MORE_EQUAL;}
\|\| {col += 2; return OR;}
out {col += 3; return OUT;}
package {col += 7; return PACKAGE;}
parser {col += 6; return PARSER;}
\|-\| {col += 3; return PIPE_LESS_PIPE;}
\|\+\| {col += 3; return PIPE_PLUS_PIPE;}
pragma {col += 6; return PRAGMA;}
prefix {col += 6; return PREFIX;}
\.\. {col += 2; return RANGE;}
return {col += 6; return RETURN;}
(>>) {col += 2; return RIGHT_SHIFT;}
select {col += 6; return SELECT;}
state {col += 5; return STATE;}
string {col += 6; return STRING;}
struct {col += 6; return STRUCT;}
switch {col += 6; return SWITCH;}
table {col += 5; return TABLE;}
this {col += 4; return THIS;}
transition {col += 5; return TRANSITION;}
true {col += 4; return TRUE;}
tuple {col += 5; return TUPLE;}
type {col += 4; return TYPE;}
typedef {col += 7; return TYPEDEF;}
valueset {col += 8; return VALUESET;}
varbit {col += 6; return VARBIT;}
void {col += 4; return VOID;}

(0x|0b)?[0-9]+ {col += strlen(yytext); return INTEGER;}
{STRING_LITERAL} {col += strlen(yytext); return STRING_LITERAL;}
{IDENTIFIER} {
    if(is_main_filepath())
    {
        yylval.identifier.tos_id = tos_register_identifier(TOS_IDENTIFIER, yytext, (ssize_t)line, (ssize_t)col);
    }
    else
    {
        yylval.identifier.tos_id = tos_register_identifier(TOS_IDENTIFIER, yytext, -1, -1);
    }
    yylval.identifier.infos_asked = INFOS_ASKED(line, col, strlen(yytext));
    if(yylval.identifier.infos_asked)
    {
        set_hover(yylval.identifier.tos_id);
    }
    Symbol* s = tos_get_element(yylval.identifier.tos_id);
    col += strlen(yytext);
    return s->type == TOS_TYPE_IDENTIFIER ? TYPE_IDENTIFIER : IDENTIFIER;
}
\n {line++; col = 0;};
(\ |\t|\r|\f|\b) {col += 1;};
{SYM_LONG_COMMENT} {handle_long_comment(yytext, &line, &col);};
{SYM_SHORT_COMMENT} {add_token(TOKEN_COMMENT, line, col, strlen(yytext), 0, true); col += strlen(yytext);};
{SYM_PREPROCESSOR_INFO} {handle_preprocessor_info(yytext, &line, &col);};

. {PRINT_DEBUG(yytext); col += 1; return yytext[0];};

%%

void handle_long_comment(const char* str, size_t* line, size_t* col)
{
    size_t starting_col = *col;
    while(*str != '\0')
    {
        (*col)++;
        if(*str == '\n')
        {
            add_token(TOKEN_COMMENT, *line, starting_col, *col - starting_col, 0, true);
            (*line)++;
            *col = 0;
            starting_col = 0;
        }
        str++;
    }
    add_token(TOKEN_COMMENT, *line, starting_col, *col - starting_col, 0, true);
}


void handle_preprocessor_info(char* str, size_t* line, size_t* col)
{
    while(*str != '\0' && !isdigit(*str))
    {
        str++;
    }
    char* end;
    long line_num = strtol(str, &end, 10);
    if(str == end)
    {
        fprintf(stderr, "FATAL ERROR\n");
        exit(1);
    }

    *line = (size_t)line_num;
    *col = 0;

 
    while(*end != '\0' && *end != '"')
    {
        end++;
    }
    end++;

    str = end;

    bool escaped = false;
    while(*end != '\0' && (*end != '"' || escaped))
    {
        if(!escaped && *end == '\\')
        {
            escaped = true;
        }
        else
        {
            escaped = false;
        }
        end++;
    }

    *end = '\0';

    enter_file(str);
}
