%{
    #include <stdlib.h>
    #include "lib/tos.h"
    #include "parser.tab.h"

    #ifdef FLEX_PRINT_DEBUG
        #define PRINT_DEBUG(str) puts(str)
    #else
        #define PRINT_DEBUG(str)
    #endif

    int count_occ(const char* str, char occ);

%}

%option noinput
%option nounput

ABSTRACT abstract
ACTION action
ACTIONS actions
AND &&
APPLY apply
BIT bit
BOOL bool
COMMA ,
CONST const
CONTROL control
DEFAULT default
DIFFERENT \!=
DONTCARE _
ELSE else
ENTRIES entries
ENUM enum
EQUAL ==
ERROR error
EXIT exit
EXTERN extern
FALSE false
HEADER header
HEADER_UNION header_union
IDENTIFIER [a-zA-Z_][a-zA-Z_0-9]*
IF if
IN in
INCREMENT \+\+
INOUT inout
INT int
INTEGER [0-9]+
KEY key
LEFT_SHIFT <<
LESS_EQUAL <=
MASK &&&
MATCH_KIND match_kind
MORE_EQUAL >=
OR \|\|
OUT out
PACKAGE package
PARSER parser
PIPE_LESS_PIPE \|-\|
PIPE_PLUS_PIPE \|\+\|
PRAGMA pragma
PREFIX prefix
RANGE \.\.
RETURN return
RIGHT_SHIFT >>
SELECT select
STATE state
STRING string
STRING_LITERAL \"(?:\\.|[^\"\\])*\"
STRUCT struct
SWITCH switch
TABLE table
THIS this
TRANSITION transition
TRUE true
TUPLE tuple
TYPE type
TYPEDEF typedef
VALUESET valueset
VARBIT varbit
VOID void


SYM_LONG_COMMENT \/\*([^\*]*[\*]*[^\*/])*[^*]*[\*]+\/
SYM_SHORT_COMMENT \/\/.*$
SYM_PREPROCESSOR_INFO #.*$

%%

{ABSTRACT} {return ABSTRACT;} 
{ACTION} {return ACTION;} 
{ACTIONS} {return ACTIONS;} 
{AND} {return AND;} 
{APPLY} {return APPLY;} 
{BIT} {return BIT;} 
{BOOL} {return BOOL;} 
{COMMA} {return COMMA;} 
{CONST} {return CONST;} 
{CONTROL} {return CONTROL;} 
{DEFAULT} {return DEFAULT;} 
{DIFFERENT} {return DIFFERENT;} 
{DONTCARE} {return DONTCARE;} 
{ELSE} {return ELSE;} 
{ENTRIES} {return ENTRIES;} 
{ENUM} {return ENUM;} 
{EQUAL} {return EQUAL;} 
{ERROR} {return ERROR;} 
{EXIT} {return EXIT;} 
{EXTERN} {return EXTERN;} 
{FALSE} {return FALSE;} 
{HEADER} {return HEADER;} 
{HEADER_UNION} {return HEADER_UNION;} 
{IF} {return IF;} 
{IN} {return IN;} 
{INCREMENT} {return INCREMENT;} 
{INOUT} {return INOUT;} 
{INT} {return INT;} 
{INTEGER} {return INTEGER;} 
{KEY} {return KEY;} 
{LEFT_SHIFT} {return LEFT_SHIFT;} 
{LESS_EQUAL} {return LESS_EQUAL;} 
{MASK} {return MASK;} 
{MATCH_KIND} {return MATCH_KIND;} 
{MORE_EQUAL} {return MORE_EQUAL;} 
{OR} {return OR;} 
{OUT} {return OUT;} 
{PACKAGE} {return PACKAGE;} 
{PARSER} {return PARSER;} 
{PIPE_LESS_PIPE} {return PIPE_LESS_PIPE;} 
{PIPE_PLUS_PIPE} {return PIPE_PLUS_PIPE;} 
{PRAGMA} {return PRAGMA;} 
{PREFIX} {return PREFIX;} 
{RANGE} {return RANGE;} 
{RETURN} {return RETURN;} 
{RIGHT_SHIFT} {return RIGHT_SHIFT;} 
{SELECT} {return SELECT;} 
{STATE} {return STATE;} 
{STRING} {return STRING;} 
{STRING_LITERAL} {return STRING_LITERAL;} 
{STRUCT} {return STRUCT;} 
{SWITCH} {return SWITCH;} 
{TABLE} {return TABLE;} 
{THIS} {return THIS;} 
{TRANSITION} {return TRANSITION;} 
{TRUE} {return TRUE;} 
{TUPLE} {return TUPLE;} 
{TYPE} {return TYPE;} 
{TYPEDEF} {return TYPEDEF;} 
{VALUESET} {return VALUESET;} 
{VARBIT} {return VARBIT;} 
{VOID} {return VOID;} 

{IDENTIFIER} {yylval.integer = tos_register_identifier(TOS_IDENTIFIER, yytext); Symbol* s = tos_get_element(yylval.integer); return s->type == TOS_IDENTIFIER ? IDENTIFIER : TYPE_IDENTIFIER;} 
\n {increase_line_counter(1);};
(\ |\t|\r|\f|\b) ;
{SYM_LONG_COMMENT} {increase_line_counter(count_occ(yytext, '\n'));};
{SYM_SHORT_COMMENT} ;
{SYM_PREPROCESSOR_INFO} ;

. {PRINT_DEBUG(yytext); return yytext[0];};

%%

int count_occ(const char* str, char occ)
{
    int occurences = 0;
    while(*str != '\0')
    {
        if(*str == occ)
        {
            occurences++;
        }
        str++;
    }
    return occurences;
}
