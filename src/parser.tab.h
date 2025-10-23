/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_PARSER_TAB_H_INCLUDED
# define YY_YY_SRC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABSTRACT = 258,                /* ABSTRACT  */
    ACTION = 259,                  /* ACTION  */
    ACTIONS = 260,                 /* ACTIONS  */
    AND = 261,                     /* AND  */
    APPLY = 262,                   /* APPLY  */
    BIT = 263,                     /* BIT  */
    BOOL = 264,                    /* BOOL  */
    COMMA = 265,                   /* COMMA  */
    CONST = 266,                   /* CONST  */
    CONTROL = 267,                 /* CONTROL  */
    DEFAULT = 268,                 /* DEFAULT  */
    DIFFERENT = 269,               /* DIFFERENT  */
    DONTCARE = 270,                /* DONTCARE  */
    ELSE = 271,                    /* ELSE  */
    ENTRIES = 272,                 /* ENTRIES  */
    ENUM = 273,                    /* ENUM  */
    EQUAL = 274,                   /* EQUAL  */
    ERROR = 275,                   /* ERROR  */
    EXIT = 276,                    /* EXIT  */
    EXTERN = 277,                  /* EXTERN  */
    FALSE = 278,                   /* FALSE  */
    HEADER = 279,                  /* HEADER  */
    HEADER_UNION = 280,            /* HEADER_UNION  */
    IDENTIFIER = 281,              /* IDENTIFIER  */
    IF = 282,                      /* IF  */
    IN = 283,                      /* IN  */
    INCREMENT = 284,               /* INCREMENT  */
    INOUT = 285,                   /* INOUT  */
    INT = 286,                     /* INT  */
    INTEGER = 287,                 /* INTEGER  */
    KEY = 288,                     /* KEY  */
    LEFT_SHIFT = 289,              /* LEFT_SHIFT  */
    LESS_EQUAL = 290,              /* LESS_EQUAL  */
    MASK = 291,                    /* MASK  */
    MATCH_KIND = 292,              /* MATCH_KIND  */
    MORE_EQUAL = 293,              /* MORE_EQUAL  */
    OR = 294,                      /* OR  */
    OUT = 295,                     /* OUT  */
    PACKAGE = 296,                 /* PACKAGE  */
    PARSER = 297,                  /* PARSER  */
    PIPE_LESS_PIPE = 298,          /* PIPE_LESS_PIPE  */
    PIPE_PLUS_PIPE = 299,          /* PIPE_PLUS_PIPE  */
    PRAGMA = 300,                  /* PRAGMA  */
    PREFIX = 301,                  /* PREFIX  */
    RANGE = 302,                   /* RANGE  */
    RETURN = 303,                  /* RETURN  */
    RIGHT_SHIFT = 304,             /* RIGHT_SHIFT  */
    SELECT = 305,                  /* SELECT  */
    STATE = 306,                   /* STATE  */
    STRING = 307,                  /* STRING  */
    STRING_LITERAL = 308,          /* STRING_LITERAL  */
    STRUCT = 309,                  /* STRUCT  */
    SWITCH = 310,                  /* SWITCH  */
    TABLE = 311,                   /* TABLE  */
    THIS = 312,                    /* THIS  */
    TRANSITION = 313,              /* TRANSITION  */
    TRUE = 314,                    /* TRUE  */
    TUPLE = 315,                   /* TUPLE  */
    TYPE = 316,                    /* TYPE  */
    TYPEDEF = 317,                 /* TYPEDEF  */
    TYPE_IDENTIFIER = 318,         /* TYPE_IDENTIFIER  */
    UNKNOWN_TOKEN = 319,           /* UNKNOWN_TOKEN  */
    VALUESET = 320,                /* VALUESET  */
    VARBIT = 321,                  /* VARBIT  */
    VOID = 322                     /* VOID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "src/parser.y"

    int integer;

#line 135 "src/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PARSER_TAB_H_INCLUDED  */
