/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "src/parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdarg.h>
    #include "lib/tos.h"

    void yyerror(const char*);
    int yylex(void);


#line 83 "src/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABSTRACT = 3,                   /* ABSTRACT  */
  YYSYMBOL_ACTION = 4,                     /* ACTION  */
  YYSYMBOL_ACTIONS = 5,                    /* ACTIONS  */
  YYSYMBOL_AND = 6,                        /* AND  */
  YYSYMBOL_APPLY = 7,                      /* APPLY  */
  YYSYMBOL_BIT = 8,                        /* BIT  */
  YYSYMBOL_BOOL = 9,                       /* BOOL  */
  YYSYMBOL_COMMA = 10,                     /* COMMA  */
  YYSYMBOL_CONST = 11,                     /* CONST  */
  YYSYMBOL_CONTROL = 12,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 13,                   /* DEFAULT  */
  YYSYMBOL_DIFFERENT = 14,                 /* DIFFERENT  */
  YYSYMBOL_DONTCARE = 15,                  /* DONTCARE  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_ENTRIES = 17,                   /* ENTRIES  */
  YYSYMBOL_ENUM = 18,                      /* ENUM  */
  YYSYMBOL_EQUAL = 19,                     /* EQUAL  */
  YYSYMBOL_ERROR = 20,                     /* ERROR  */
  YYSYMBOL_EXIT = 21,                      /* EXIT  */
  YYSYMBOL_EXTERN = 22,                    /* EXTERN  */
  YYSYMBOL_FALSE = 23,                     /* FALSE  */
  YYSYMBOL_HEADER = 24,                    /* HEADER  */
  YYSYMBOL_HEADER_UNION = 25,              /* HEADER_UNION  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_IN = 28,                        /* IN  */
  YYSYMBOL_INCREMENT = 29,                 /* INCREMENT  */
  YYSYMBOL_INOUT = 30,                     /* INOUT  */
  YYSYMBOL_INT = 31,                       /* INT  */
  YYSYMBOL_INTEGER = 32,                   /* INTEGER  */
  YYSYMBOL_KEY = 33,                       /* KEY  */
  YYSYMBOL_LEFT_SHIFT = 34,                /* LEFT_SHIFT  */
  YYSYMBOL_LESS_EQUAL = 35,                /* LESS_EQUAL  */
  YYSYMBOL_MASK = 36,                      /* MASK  */
  YYSYMBOL_MATCH_KIND = 37,                /* MATCH_KIND  */
  YYSYMBOL_MORE_EQUAL = 38,                /* MORE_EQUAL  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_OUT = 40,                       /* OUT  */
  YYSYMBOL_PACKAGE = 41,                   /* PACKAGE  */
  YYSYMBOL_PARSER = 42,                    /* PARSER  */
  YYSYMBOL_PIPE_LESS_PIPE = 43,            /* PIPE_LESS_PIPE  */
  YYSYMBOL_PIPE_PLUS_PIPE = 44,            /* PIPE_PLUS_PIPE  */
  YYSYMBOL_PRAGMA = 45,                    /* PRAGMA  */
  YYSYMBOL_PREFIX = 46,                    /* PREFIX  */
  YYSYMBOL_RANGE = 47,                     /* RANGE  */
  YYSYMBOL_RETURN = 48,                    /* RETURN  */
  YYSYMBOL_RIGHT_SHIFT = 49,               /* RIGHT_SHIFT  */
  YYSYMBOL_SELECT = 50,                    /* SELECT  */
  YYSYMBOL_STATE = 51,                     /* STATE  */
  YYSYMBOL_STRING = 52,                    /* STRING  */
  YYSYMBOL_STRING_LITERAL = 53,            /* STRING_LITERAL  */
  YYSYMBOL_STRUCT = 54,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 55,                    /* SWITCH  */
  YYSYMBOL_TABLE = 56,                     /* TABLE  */
  YYSYMBOL_THIS = 57,                      /* THIS  */
  YYSYMBOL_TRANSITION = 58,                /* TRANSITION  */
  YYSYMBOL_TRUE = 59,                      /* TRUE  */
  YYSYMBOL_TUPLE = 60,                     /* TUPLE  */
  YYSYMBOL_TYPE = 61,                      /* TYPE  */
  YYSYMBOL_TYPEDEF = 62,                   /* TYPEDEF  */
  YYSYMBOL_TYPE_IDENTIFIER = 63,           /* TYPE_IDENTIFIER  */
  YYSYMBOL_UNKNOWN_TOKEN = 64,             /* UNKNOWN_TOKEN  */
  YYSYMBOL_VALUESET = 65,                  /* VALUESET  */
  YYSYMBOL_VARBIT = 66,                    /* VARBIT  */
  YYSYMBOL_VOID = 67,                      /* VOID  */
  YYSYMBOL_68_ = 68,                       /* '?'  */
  YYSYMBOL_69_ = 69,                       /* ':'  */
  YYSYMBOL_70_ = 70,                       /* '<'  */
  YYSYMBOL_71_ = 71,                       /* '>'  */
  YYSYMBOL_72_ = 72,                       /* '|'  */
  YYSYMBOL_73_ = 73,                       /* '^'  */
  YYSYMBOL_74_ = 74,                       /* '&'  */
  YYSYMBOL_75_ = 75,                       /* '+'  */
  YYSYMBOL_76_ = 76,                       /* '-'  */
  YYSYMBOL_77_ = 77,                       /* '*'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_80_ = 80,                       /* ']'  */
  YYSYMBOL_81_ = 81,                       /* '('  */
  YYSYMBOL_82_ = 82,                       /* '['  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_85_ = 85,                       /* '@'  */
  YYSYMBOL_86_ = 86,                       /* ')'  */
  YYSYMBOL_87_ = 87,                       /* '='  */
  YYSYMBOL_88_ = 88,                       /* '{'  */
  YYSYMBOL_89_ = 89,                       /* '}'  */
  YYSYMBOL_90_ = 90,                       /* "("  */
  YYSYMBOL_91_ = 91,                       /* ","  */
  YYSYMBOL_92_ = 92,                       /* ")"  */
  YYSYMBOL_93_ = 93,                       /* "&&&"  */
  YYSYMBOL_94_ = 94,                       /* ".."  */
  YYSYMBOL_95___ = 95,                     /* "_"  */
  YYSYMBOL_96_ = 96,                       /* '~'  */
  YYSYMBOL_97_ = 97,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 98,                  /* $accept  */
  YYSYMBOL_p4program = 99,                 /* p4program  */
  YYSYMBOL_declaration = 100,              /* declaration  */
  YYSYMBOL_nonTypeName = 101,              /* nonTypeName  */
  YYSYMBOL_name = 102,                     /* name  */
  YYSYMBOL_nonTableKwName = 103,           /* nonTableKwName  */
  YYSYMBOL_optAnnotations = 104,           /* optAnnotations  */
  YYSYMBOL_annotations = 105,              /* annotations  */
  YYSYMBOL_annotation = 106,               /* annotation  */
  YYSYMBOL_parameterList = 107,            /* parameterList  */
  YYSYMBOL_nonEmptyParameterList = 108,    /* nonEmptyParameterList  */
  YYSYMBOL_parameter = 109,                /* parameter  */
  YYSYMBOL_direction = 110,                /* direction  */
  YYSYMBOL_packageTypeDeclaration = 111,   /* packageTypeDeclaration  */
  YYSYMBOL_instantiation = 112,            /* instantiation  */
  YYSYMBOL_objInitializer = 113,           /* objInitializer  */
  YYSYMBOL_objDeclarations = 114,          /* objDeclarations  */
  YYSYMBOL_objDeclaration = 115,           /* objDeclaration  */
  YYSYMBOL_optConstructorParameters = 116, /* optConstructorParameters  */
  YYSYMBOL_dotPrefix = 117,                /* dotPrefix  */
  YYSYMBOL_parserDeclaration = 118,        /* parserDeclaration  */
  YYSYMBOL_parserLocalElements = 119,      /* parserLocalElements  */
  YYSYMBOL_parserLocalElement = 120,       /* parserLocalElement  */
  YYSYMBOL_parserTypeDeclaration = 121,    /* parserTypeDeclaration  */
  YYSYMBOL_parserStates = 122,             /* parserStates  */
  YYSYMBOL_parserState = 123,              /* parserState  */
  YYSYMBOL_parserStatements = 124,         /* parserStatements  */
  YYSYMBOL_parserStatement = 125,          /* parserStatement  */
  YYSYMBOL_parserBlockStatement = 126,     /* parserBlockStatement  */
  YYSYMBOL_transitionStatement = 127,      /* transitionStatement  */
  YYSYMBOL_stateExpression = 128,          /* stateExpression  */
  YYSYMBOL_selectExpression = 129,         /* selectExpression  */
  YYSYMBOL_selectCaseList = 130,           /* selectCaseList  */
  YYSYMBOL_selectCase = 131,               /* selectCase  */
  YYSYMBOL_keysetExpression = 132,         /* keysetExpression  */
  YYSYMBOL_tupleKeysetExpression = 133,    /* tupleKeysetExpression  */
  YYSYMBOL_simpleExpressionList = 134,     /* simpleExpressionList  */
  YYSYMBOL_reducedSimpleKeysetExpression = 135, /* reducedSimpleKeysetExpression  */
  YYSYMBOL_simpleKeysetExpression = 136,   /* simpleKeysetExpression  */
  YYSYMBOL_valueSetDeclaration = 137,      /* valueSetDeclaration  */
  YYSYMBOL_controlDeclaration = 138,       /* controlDeclaration  */
  YYSYMBOL_controlTypeDeclaration = 139,   /* controlTypeDeclaration  */
  YYSYMBOL_controlLocalDeclarations = 140, /* controlLocalDeclarations  */
  YYSYMBOL_controlLocalDeclaration = 141,  /* controlLocalDeclaration  */
  YYSYMBOL_controlBody = 142,              /* controlBody  */
  YYSYMBOL_externDeclaration = 143,        /* externDeclaration  */
  YYSYMBOL_144_1 = 144,                    /* $@1  */
  YYSYMBOL_methodPrototypes = 145,         /* methodPrototypes  */
  YYSYMBOL_functionPrototype = 146,        /* functionPrototype  */
  YYSYMBOL_methodPrototype = 147,          /* methodPrototype  */
  YYSYMBOL_typeRef = 148,                  /* typeRef  */
  YYSYMBOL_namedType = 149,                /* namedType  */
  YYSYMBOL_prefixedType = 150,             /* prefixedType  */
  YYSYMBOL_typeName = 151,                 /* typeName  */
  YYSYMBOL_tupleType = 152,                /* tupleType  */
  YYSYMBOL_headerStackType = 153,          /* headerStackType  */
  YYSYMBOL_specializedType = 154,          /* specializedType  */
  YYSYMBOL_baseType = 155,                 /* baseType  */
  YYSYMBOL_typeOrVoid = 156,               /* typeOrVoid  */
  YYSYMBOL_optTypeParameters = 157,        /* optTypeParameters  */
  YYSYMBOL_typeParameters = 158,           /* typeParameters  */
  YYSYMBOL_typeParameterList = 159,        /* typeParameterList  */
  YYSYMBOL_realTypeArg = 160,              /* realTypeArg  */
  YYSYMBOL_typeArg = 161,                  /* typeArg  */
  YYSYMBOL_realTypeArgumentList = 162,     /* realTypeArgumentList  */
  YYSYMBOL_typeArgumentList = 163,         /* typeArgumentList  */
  YYSYMBOL_typeDeclaration = 164,          /* typeDeclaration  */
  YYSYMBOL_derivedTypeDeclaration = 165,   /* derivedTypeDeclaration  */
  YYSYMBOL_headerTypeDeclaration = 166,    /* headerTypeDeclaration  */
  YYSYMBOL_headerUnionDeclaration = 167,   /* headerUnionDeclaration  */
  YYSYMBOL_structTypeDeclaration = 168,    /* structTypeDeclaration  */
  YYSYMBOL_structFieldList = 169,          /* structFieldList  */
  YYSYMBOL_structField = 170,              /* structField  */
  YYSYMBOL_enumDeclaration = 171,          /* enumDeclaration  */
  YYSYMBOL_errorDeclaration = 172,         /* errorDeclaration  */
  YYSYMBOL_matchKindDeclaration = 173,     /* matchKindDeclaration  */
  YYSYMBOL_identifierList = 174,           /* identifierList  */
  YYSYMBOL_specifiedIdentifierList = 175,  /* specifiedIdentifierList  */
  YYSYMBOL_specifiedIdentifier = 176,      /* specifiedIdentifier  */
  YYSYMBOL_typedefDeclaration = 177,       /* typedefDeclaration  */
  YYSYMBOL_assignmentOrMethodCallStatement = 178, /* assignmentOrMethodCallStatement  */
  YYSYMBOL_emptyStatement = 179,           /* emptyStatement  */
  YYSYMBOL_returnStatement = 180,          /* returnStatement  */
  YYSYMBOL_exitStatement = 181,            /* exitStatement  */
  YYSYMBOL_conditionalStatement = 182,     /* conditionalStatement  */
  YYSYMBOL_directApplication = 183,        /* directApplication  */
  YYSYMBOL_statement = 184,                /* statement  */
  YYSYMBOL_blockStatement = 185,           /* blockStatement  */
  YYSYMBOL_statOrDeclList = 186,           /* statOrDeclList  */
  YYSYMBOL_switchStatement = 187,          /* switchStatement  */
  YYSYMBOL_switchCases = 188,              /* switchCases  */
  YYSYMBOL_switchCase = 189,               /* switchCase  */
  YYSYMBOL_switchLabel = 190,              /* switchLabel  */
  YYSYMBOL_statementOrDeclaration = 191,   /* statementOrDeclaration  */
  YYSYMBOL_tableDeclaration = 192,         /* tableDeclaration  */
  YYSYMBOL_tablePropertyList = 193,        /* tablePropertyList  */
  YYSYMBOL_tableProperty = 194,            /* tableProperty  */
  YYSYMBOL_keyElementList = 195,           /* keyElementList  */
  YYSYMBOL_keyElement = 196,               /* keyElement  */
  YYSYMBOL_actionList = 197,               /* actionList  */
  YYSYMBOL_actionRef = 198,                /* actionRef  */
  YYSYMBOL_entriesList = 199,              /* entriesList  */
  YYSYMBOL_entry = 200,                    /* entry  */
  YYSYMBOL_actionDeclaration = 201,        /* actionDeclaration  */
  YYSYMBOL_variableDeclaration = 202,      /* variableDeclaration  */
  YYSYMBOL_constantDeclaration = 203,      /* constantDeclaration  */
  YYSYMBOL_optInitializer = 204,           /* optInitializer  */
  YYSYMBOL_initializer = 205,              /* initializer  */
  YYSYMBOL_functionDeclaration = 206,      /* functionDeclaration  */
  YYSYMBOL_argumentList = 207,             /* argumentList  */
  YYSYMBOL_nonEmptyArgList = 208,          /* nonEmptyArgList  */
  YYSYMBOL_argument = 209,                 /* argument  */
  YYSYMBOL_kvList = 210,                   /* kvList  */
  YYSYMBOL_kvPair = 211,                   /* kvPair  */
  YYSYMBOL_expressionList = 212,           /* expressionList  */
  YYSYMBOL_annotationBody = 213,           /* annotationBody  */
  YYSYMBOL_structuredAnnotationBody = 214, /* structuredAnnotationBody  */
  YYSYMBOL_annotationToken = 215,          /* annotationToken  */
  YYSYMBOL_member = 216,                   /* member  */
  YYSYMBOL_prefixedNonTypeName = 217,      /* prefixedNonTypeName  */
  YYSYMBOL_lvalue = 218,                   /* lvalue  */
  YYSYMBOL_expression = 219,               /* expression  */
  YYSYMBOL_nonBraceExpression = 220        /* nonBraceExpression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4021

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  454
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  868

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,     2,     2,     2,    79,    74,     2,
      81,    86,    77,    75,     2,    76,    83,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    84,
      70,    87,    71,    68,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    80,    73,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,    72,    89,    96,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    90,    91,    92,    93,    94,    95
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   120,   120,   121,   122,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   139,   140,   141,   142,   143,
     144,   145,   149,   150,   154,   155,   156,   157,   158,   162,
     163,   167,   168,   172,   173,   174,   178,   179,   183,   184,
     188,   189,   193,   194,   195,   196,   200,   205,   206,   207,
     208,   212,   216,   217,   221,   222,   226,   227,   231,   237,
     243,   244,   248,   249,   250,   251,   255,   259,   260,   264,
     268,   269,   273,   274,   275,   276,   277,   278,   279,   283,
     287,   288,   292,   293,   297,   301,   302,   306,   310,   311,
     315,   316,   320,   321,   325,   326,   327,   328,   332,   333,
     334,   335,   336,   340,   342,   344,   351,   357,   362,   363,
     367,   368,   369,   370,   371,   375,   381,   381,   382,   386,
     387,   391,   395,   396,   402,   403,   404,   405,   406,   410,
     411,   415,   416,   420,   424,   428,   429,   433,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     452,   453,   454,   458,   459,   463,   467,   468,   472,   473,
     474,   478,   479,   480,   481,   485,   486,   490,   491,   492,
     496,   497,   498,   499,   500,   504,   505,   506,   507,   511,
     515,   519,   523,   524,   528,   532,   533,   537,   541,   545,
     546,   550,   551,   555,   559,   560,   561,   562,   568,   569,
     570,   574,   578,   579,   583,   587,   588,   593,   594,   598,
     599,   600,   601,   602,   603,   604,   605,   609,   613,   614,
     618,   622,   623,   627,   628,   632,   633,   637,   638,   639,
     644,   648,   649,   653,   654,   655,   656,   657,   661,   662,
     666,   670,   671,   675,   676,   680,   681,   685,   691,   697,
     698,   702,   706,   707,   711,   717,   721,   722,   726,   727,
     731,   732,   733,   734,   738,   739,   743,   747,   748,   749,
     754,   755,   756,   760,   761,   765,   766,   767,   768,   769,
     770,   771,   772,   773,   774,   775,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   852,
     856,   857,   861,   862,   863,   864,   865,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ABSTRACT", "ACTION",
  "ACTIONS", "AND", "APPLY", "BIT", "BOOL", "COMMA", "CONST", "CONTROL",
  "DEFAULT", "DIFFERENT", "DONTCARE", "ELSE", "ENTRIES", "ENUM", "EQUAL",
  "ERROR", "EXIT", "EXTERN", "FALSE", "HEADER", "HEADER_UNION",
  "IDENTIFIER", "IF", "IN", "INCREMENT", "INOUT", "INT", "INTEGER", "KEY",
  "LEFT_SHIFT", "LESS_EQUAL", "MASK", "MATCH_KIND", "MORE_EQUAL", "OR",
  "OUT", "PACKAGE", "PARSER", "PIPE_LESS_PIPE", "PIPE_PLUS_PIPE", "PRAGMA",
  "PREFIX", "RANGE", "RETURN", "RIGHT_SHIFT", "SELECT", "STATE", "STRING",
  "STRING_LITERAL", "STRUCT", "SWITCH", "TABLE", "THIS", "TRANSITION",
  "TRUE", "TUPLE", "TYPE", "TYPEDEF", "TYPE_IDENTIFIER", "UNKNOWN_TOKEN",
  "VALUESET", "VARBIT", "VOID", "'?'", "':'", "'<'", "'>'", "'|'", "'^'",
  "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "']'", "'('", "'['", "'.'",
  "';'", "'@'", "')'", "'='", "'{'", "'}'", "\"(\"", "\",\"", "\")\"",
  "\"&&&\"", "\"..\"", "\"_\"", "'~'", "'!'", "$accept", "p4program",
  "declaration", "nonTypeName", "name", "nonTableKwName", "optAnnotations",
  "annotations", "annotation", "parameterList", "nonEmptyParameterList",
  "parameter", "direction", "packageTypeDeclaration", "instantiation",
  "objInitializer", "objDeclarations", "objDeclaration",
  "optConstructorParameters", "dotPrefix", "parserDeclaration",
  "parserLocalElements", "parserLocalElement", "parserTypeDeclaration",
  "parserStates", "parserState", "parserStatements", "parserStatement",
  "parserBlockStatement", "transitionStatement", "stateExpression",
  "selectExpression", "selectCaseList", "selectCase", "keysetExpression",
  "tupleKeysetExpression", "simpleExpressionList",
  "reducedSimpleKeysetExpression", "simpleKeysetExpression",
  "valueSetDeclaration", "controlDeclaration", "controlTypeDeclaration",
  "controlLocalDeclarations", "controlLocalDeclaration", "controlBody",
  "externDeclaration", "$@1", "methodPrototypes", "functionPrototype",
  "methodPrototype", "typeRef", "namedType", "prefixedType", "typeName",
  "tupleType", "headerStackType", "specializedType", "baseType",
  "typeOrVoid", "optTypeParameters", "typeParameters", "typeParameterList",
  "realTypeArg", "typeArg", "realTypeArgumentList", "typeArgumentList",
  "typeDeclaration", "derivedTypeDeclaration", "headerTypeDeclaration",
  "headerUnionDeclaration", "structTypeDeclaration", "structFieldList",
  "structField", "enumDeclaration", "errorDeclaration",
  "matchKindDeclaration", "identifierList", "specifiedIdentifierList",
  "specifiedIdentifier", "typedefDeclaration",
  "assignmentOrMethodCallStatement", "emptyStatement", "returnStatement",
  "exitStatement", "conditionalStatement", "directApplication",
  "statement", "blockStatement", "statOrDeclList", "switchStatement",
  "switchCases", "switchCase", "switchLabel", "statementOrDeclaration",
  "tableDeclaration", "tablePropertyList", "tableProperty",
  "keyElementList", "keyElement", "actionList", "actionRef", "entriesList",
  "entry", "actionDeclaration", "variableDeclaration",
  "constantDeclaration", "optInitializer", "initializer",
  "functionDeclaration", "argumentList", "nonEmptyArgList", "argument",
  "kvList", "kvPair", "expressionList", "annotationBody",
  "structuredAnnotationBody", "annotationToken", "member",
  "prefixedNonTypeName", "lvalue", "expression", "nonBraceExpression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-778)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-131)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -778,   348,  -778,   -31,  -778,   -47,  -778,    64,   -10,  -778,
      92,  -778,   106,  -778,  -778,  -778,   563,  -778,   846,   654,
    -778,    96,  -778,   138,  -778,    83,  -778,    88,  -778,   118,
     128,   161,   152,  -778,  -778,   158,  -778,   563,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
      13,   563,    55,   563,  3155,   105,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,   -29,   563,   693,   563,  3232,
    3193,   563,   563,   563,   563,   563,   654,   654,  -778,  -778,
    -778,   163,  -778,  -778,   -53,  -778,   154,  -778,   160,   167,
     118,  -778,  1970,  3155,  2205,  2205,   176,   187,  2205,  -778,
      21,   190,  2205,    24,  -778,  -778,  -778,  -778,  -778,    36,
     194,  2205,  -778,  2252,   196,   563,   176,    65,   180,   563,
     -22,  -778,   195,  -778,   176,   176,   176,   176,   176,   141,
     563,   563,   563,   563,  1970,    40,   197,   278,  -778,  -778,
    -778,  -778,  -778,   211,  -778,  -778,  -778,  -778,  -778,  2205,
    2205,  1192,  2252,  2205,  2205,   205,   214,   615,   215,   220,
    -778,   218,   295,  -778,  3830,    41,  -778,  3454,  3471,   563,
     225,  -778,  -778,  2546,   563,  -778,  -778,  2620,  -778,  3155,
    -778,  -778,  2637,  1696,   222,   297,  -778,   301,   233,  3830,
     -53,   227,   241,   563,   235,   176,  -778,   239,   246,   256,
     257,   251,   258,   261,   262,   265,   254,  -778,  -778,  -778,
     693,  -778,   118,   654,   324,  2396,   563,   147,   147,   211,
     264,   156,    61,  2711,    25,    26,   147,   147,  2017,  -778,
    1970,   563,   563,  1970,  2205,  2205,  2205,  2205,  2205,  2205,
    2205,  2205,  2205,  2205,  2205,  2205,  1058,  2205,  2205,  2205,
    2205,  2205,  2205,  2205,  2205,  2205,  1970,  2205,   563,  -778,
    -778,  -778,  -778,    67,   -53,   272,  -778,   280,  -778,   281,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  2205,   563,  2205,
    -778,   273,  2205,   -53,    27,   563,   270,  -778,  -778,   -53,
     -53,  -778,  -778,  -778,  -778,  -778,   563,   563,  -778,   185,
     654,  -778,  -778,   -35,  -778,  -778,   387,  -778,  -778,   118,
     150,  -778,  -778,  -778,  -778,  -778,  -778,   276,   286,  2064,
     288,  -778,  -778,  -778,  -778,     9,   654,   615,   563,   102,
     199,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,   189,  -778,  -778,  2205,  -778,  -778,
    -778,  -778,  3830,   284,  -778,    91,  -778,  3938,  1109,  1109,
     364,   916,  1602,  1602,  3921,   364,   364,   916,  3549,  -778,
    -778,  -778,  -778,    69,  1602,  1602,  1329,  2295,  3057,   364,
     364,   147,   147,   147,   285,  3267,  -778,   563,  -778,   287,
    -778,  -778,  -778,  1791,  3830,  -778,  3830,   118,   293,  3830,
     292,  -778,   275,    46,  -778,  -778,   -20,   -18,   294,   300,
       7,   113,   296,   563,   302,   473,  -778,   330,  -778,   306,
     309,  -778,   563,  -778,  2205,  -778,  3001,  2205,   563,  -778,
     388,   392,  3155,  1970,  2205,   563,  2205,  3830,  -778,  -778,
     313,  2205,  3155,   321,  -778,  2205,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  2205,   563,  -778,    71,  -778,   693,  -778,
    -778,  -778,  -778,  -778,  -778,   313,  2205,   315,   693,   306,
    2205,   322,  -778,   317,  2728,  -778,  2802,   331,   336,    73,
     332,  3285,  -778,  3075,  -778,   335,  1586,  -778,  1970,  3566,
    -778,  -778,  -778,   743,  -778,   563,   337,  3830,  -778,  -778,
     351,   353,   354,   344,  -778,  -778,    16,   236,   341,  1970,
    1970,   349,   352,  2205,  -778,  -778,   592,  -778,   363,  -778,
     356,   355,   367,  -778,  2456,   359,   373,   374,  -778,   370,
     372,   172,    14,  -778,   377,   382,   451,  -778,   384,   385,
    1970,  -778,  3644,  -778,   654,  -778,  -778,  -778,  -778,   -53,
    -778,  -778,   511,    18,  -778,  -778,   386,  -778,  -778,  -778,
    -778,  -778,  -778,  2205,  2205,  2205,   389,   391,  -778,   249,
    -778,  -778,  -778,  -778,   394,  -778,  -778,   236,  2111,   399,
     403,   402,  -778,   406,   412,   411,  -778,  -778,  -778,  -778,
    2819,  2893,  2910,  -778,  -778,   409,   413,  2205,  -778,  -778,
     415,  -778,  -778,  -778,  -778,  -778,  2205,  2205,  1192,  -778,
    2205,  2205,  -778,   615,   426,   425,  -778,   441,  3847,  -778,
    -778,   428,   429,  2205,  -778,  2516,   563,   563,   563,    85,
    2158,   427,  2205,   430,   563,   147,   147,   431,  2984,   147,
     147,  -778,  1970,   563,   114,  2205,  2205,  2205,  2205,  2205,
    2205,  2205,  2205,  2205,  2205,  2205,  2205,  1058,  2205,  2205,
    2205,  2205,  2205,  2205,  2205,  2205,  2205,  1970,  2205,   563,
    -778,  -778,    12,  -778,   436,   437,   438,  -778,   247,  -778,
    -778,  3661,  -778,   442,  -778,  -778,  2205,  -778,   444,  -778,
    -778,  3938,  1109,  1109,   364,   916,  1602,  1602,  3921,   364,
     364,   916,  3735,    74,  1602,  1602,  1329,  2295,  3057,   364,
     364,   147,   147,   147,   445,  3363,  -778,   439,  -778,  -778,
    -778,   610,   448,   452,   563,  1264,  -778,  3830,  -778,  2205,
     457,  -778,  2205,  -778,  -778,  -778,  1970,   118,  -778,  -778,
    -778,  1876,   470,  -778,  -778,  -778,  3380,  1586,  1970,  3752,
    1551,   456,   459,   454,  -778,   455,   458,  2317,   247,  2205,
    2205,   460,  -778,  -778,  -778,   479,  -778,  -778,  -778,  1923,
    2205,  2205,   118,  3830,  3830,  -778,   563,     8,  -778,  3830,
    3830,   466,   471,  1923,  -778,  -778,  -778,  -778
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    29,     1,   143,   138,   139,   152,   142,   140,   141,
       0,   131,     0,   151,    58,     4,     0,     3,     0,    30,
      31,     0,    11,     0,     8,    56,    10,    56,     6,    29,
     150,   133,   125,   128,   127,   126,   124,     0,     9,   170,
     175,   176,   177,   178,    12,    13,   171,     7,     5,    14,
       0,     0,     0,     0,   167,     0,    18,    16,    20,    15,
      17,    19,    21,    23,    22,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    29,   139,   140,
      32,     0,   174,   132,    29,   172,     0,   173,     0,     0,
      30,   255,   256,   167,     0,     0,   153,     0,     0,   189,
       0,     0,     0,     0,   161,   164,   163,   162,   168,     0,
       0,     0,   270,   267,     0,     0,   153,   131,     0,     0,
     152,   116,     0,   150,   153,   153,   153,   153,   153,     0,
       0,     0,     0,     0,   256,    45,     0,    37,    38,    60,
     108,   218,   262,     0,   369,   367,   371,   370,   368,     0,
       0,     0,   267,     0,     0,   372,     0,     0,     0,   129,
     130,     0,   257,   258,   260,     0,   372,     0,     0,     0,
       0,   154,   144,     0,     0,   187,   145,     0,   188,     0,
     134,   146,     0,     0,     0,   274,   264,   273,     0,   268,
      29,     0,     0,     0,     0,   153,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    44,    43,
       0,    57,    29,    29,    29,    29,     0,   382,   381,   139,
       0,   125,   126,     0,     0,     0,   380,   379,     0,   373,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,     0,   137,
     135,   136,   156,     0,    29,     0,   190,     0,   169,     0,
     275,   276,   277,   326,   278,   280,   279,   352,   281,   282,
     283,   329,   284,   285,   286,   287,   328,   288,   289,   290,
     291,   292,   293,   321,   294,   295,   332,   296,   297,   324,
     298,   325,   331,   299,   300,   330,   327,   302,   304,   303,
     336,   334,   305,   306,   307,   308,   309,   310,   323,   311,
     312,   313,   314,   315,   316,   301,   317,   322,   358,   319,
     318,   320,   353,   351,   348,   349,   340,   342,   341,   333,
     335,   337,   338,   339,   345,   270,   344,   354,   356,   357,
      34,   355,   346,   347,   343,   350,   272,     0,     0,     0,
      35,     0,     0,    29,     0,     0,     0,   182,   182,    29,
      29,   182,   196,   197,   194,   195,     0,     0,    39,     0,
      30,    64,    61,    29,    67,    65,     0,    63,    62,    29,
       0,   113,   109,   112,   111,   114,   110,     0,     0,     0,
       0,   363,   201,   217,   360,     0,    30,     0,     0,   125,
     126,   209,   212,   215,   214,   211,   210,   229,   213,   216,
     219,   227,   228,   362,     0,   359,   384,     0,   378,   377,
     376,   263,   261,     0,   383,     0,   259,   405,   399,   400,
     404,   393,   395,   396,   406,   392,   391,   394,     0,   158,
     160,   159,   165,     0,   397,   398,   403,   402,   401,   389,
     390,   386,   387,   388,     0,     0,   385,     0,   155,     0,
     147,   148,   149,     0,   266,   265,   269,    29,     0,   254,
       0,   185,     0,     0,   191,   119,    29,    29,     0,     0,
      29,     0,    40,     0,     0,     0,    59,     0,    68,   252,
       0,   115,     0,   204,     0,   202,     0,     0,     0,   361,
       0,     0,   167,   256,     0,     0,     0,   411,   410,    47,
       0,     0,     0,     0,   409,     0,   374,   157,   121,   271,
     248,   251,   107,     0,     0,   186,    29,   179,     0,   183,
     180,    46,    66,   181,    48,     0,     0,     0,     0,   252,
       0,     0,   106,     0,     0,   203,     0,     0,     0,     0,
       0,     0,   364,     0,    52,     0,   407,   166,   256,     0,
     193,   192,   117,     0,   120,     0,     0,    41,    70,   133,
       0,     0,     0,     0,   253,   250,    29,    29,     0,   256,
     256,     0,     0,     0,   365,   200,     0,    50,     0,   375,
     131,     0,     0,    49,    29,     0,     0,     0,   249,     0,
       0,     0,    29,   231,     0,     0,   205,   221,     0,     0,
     256,   198,     0,    51,     0,    55,    53,    54,   408,    29,
     122,   184,     0,     0,    71,    74,     0,    72,    77,    78,
      73,    76,    75,     0,     0,     0,     0,     0,    26,     0,
      24,    27,    28,    25,     0,   230,   232,    29,     0,     0,
       0,     0,   366,     0,     0,     0,    81,    83,    70,    69,
       0,     0,     0,   241,   238,     0,     0,     0,   206,   225,
       0,   415,   412,   413,   416,   414,     0,     0,     0,   220,
       0,     0,   417,     0,     0,   129,   222,     0,   226,   207,
     208,     0,     0,   267,    82,    29,     0,     0,     0,    29,
       0,     0,     0,     0,     0,   425,   424,     0,     0,   423,
     422,   418,   256,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,     0,
     199,   123,     0,    79,     0,     0,     0,   234,     0,   233,
     239,     0,   245,     0,   237,   427,     0,   421,     0,   426,
     223,   448,   442,   443,   447,   436,   438,   439,   449,   435,
     434,   437,     0,     0,   440,   441,   446,   445,   444,   432,
     433,   429,   430,   431,     0,     0,   428,     0,   105,   104,
     103,     0,     0,   243,     0,     0,   236,   454,   453,     0,
       0,   452,     0,   419,    85,   242,   256,    29,    99,   100,
     235,     0,     0,    88,    89,   246,    98,   450,   256,     0,
       0,     0,     0,    96,    97,     0,     0,    98,     0,     0,
       0,     0,   420,    84,    86,     0,   244,   240,    91,     0,
       0,     0,    29,   101,   102,   451,     0,     0,    92,    94,
      95,     0,     0,     0,    90,   247,    87,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -778,  -778,  -778,   -11,    58,   -93,    -1,     2,   -17,  -176,
    -778,   346,  -778,  -778,  -205,    20,  -778,  -778,   532,   248,
    -778,  -778,  -778,  -778,  -778,   184,  -105,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -261,  -778,  -778,  -778,  -777,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,   -64,  -778,
     259,   -83,    29,   949,    33,  -778,   961,    34,  -778,    23,
    -778,  -778,  -778,  -169,  -154,   -86,  -778,   209,  -778,  -778,
    -778,  -160,  -778,  -778,  -778,  -778,   -38,  -778,    50,  -778,
    -588,  -587,  -778,  -778,  -580,  -577,  -564,   -25,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,   -24,  -778,  -778,  -778,
    -251,  -778,  -778,   376,  -124,    11,    42,  -520,    -2,   -49,
    -778,   362,   447,   244,  -151,   252,  -778,  -778,  -220,  -733,
    -778,   689,  -778
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    17,   166,   156,   654,   135,    90,    20,   136,
     137,   138,   210,    21,    22,   565,   596,   626,    86,   157,
      24,   213,   382,    25,   383,   384,   604,   634,   635,   636,
     666,   667,   830,   844,   822,   823,   857,   835,   824,   385,
      26,    27,   214,   392,   500,    28,   195,   536,    29,   574,
     107,   158,    31,   159,    33,    34,   160,    36,    37,   170,
     171,   263,   452,   108,   453,   109,    38,    39,    40,    41,
      42,   486,   539,    43,    44,    45,   100,   483,   484,    46,
     411,   412,   413,   414,   415,   416,   417,   418,   215,   419,
     658,   696,   697,   420,   393,   612,   613,   710,   760,   709,
     802,   805,   825,    47,   641,   642,   551,   478,    49,   161,
     162,   163,   185,   186,   187,   183,   188,   356,   426,   423,
     424,   164,   698
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   225,    80,    19,    91,    64,   122,   165,   381,   391,
     268,   434,    48,   570,   361,   103,   637,   638,   863,   609,
      67,   609,   359,   616,   639,   803,    64,   640,    89,    67,
     584,   174,    16,   -36,   174,   358,   359,   174,   466,    50,
      64,    51,    64,   106,   836,    97,   179,   610,   -15,   610,
      16,   179,   112,   113,   496,    64,   534,    64,    64,   121,
      64,    64,    64,    64,    64,    16,   -15,    16,   207,   537,
     208,   540,   858,    80,    65,   129,   129,   467,    53,   522,
     209,   155,   106,   179,   522,   206,   867,   101,   469,   387,
     395,   421,    16,   678,    98,    96,   543,   141,   797,    16,
     864,    16,   155,   655,    64,   803,   668,   180,    64,    99,
     175,    99,   259,   178,   429,   430,   481,   637,   638,    64,
      64,    64,    64,   155,   114,   639,   116,   118,   640,   124,
     125,   126,   127,   128,    52,   535,   102,   110,   468,   192,
     523,   155,  -130,    95,   591,   810,   229,   197,   198,   199,
     200,   201,   -23,   -23,    66,   364,    16,   713,    64,    69,
     572,    67,    54,    64,    84,    71,    72,    85,   106,    84,
      16,   184,    87,   191,   757,   519,    55,   194,   520,   648,
      82,   433,    64,   649,    94,   510,   111,   480,   202,   203,
     204,   205,   763,   488,   489,    75,    67,   544,   650,    16,
     545,    83,   -29,    16,   404,    64,   502,   464,   487,    92,
     184,   490,   379,   390,   405,   380,   380,   406,   366,   155,
      64,    64,   155,   651,   388,   396,   422,   262,   256,   257,
     258,    93,   266,   652,    94,   653,   493,  -129,    94,   231,
      95,    56,   139,    57,   134,   155,   169,    64,   140,    23,
     494,    99,    56,    58,    57,   141,   648,   397,   172,   512,
      30,   176,    59,   398,    58,   181,   675,    23,   193,    60,
     513,   514,   515,    59,   425,   650,   516,   190,    81,   196,
      60,    95,   511,   211,   399,   131,   133,    61,   212,   425,
     435,   400,   -22,   401,   216,   562,   230,    62,    61,    11,
     651,   228,    23,   231,   232,   233,   264,   358,    62,   357,
     652,   359,   653,   360,   362,    23,   425,    23,    23,    14,
     402,    16,   363,   365,    23,    23,   115,   367,   119,   123,
      14,   389,     3,     4,   368,   130,   132,   369,   370,   371,
     376,    23,   372,   470,    78,   373,   374,    64,     2,   375,
     427,   471,   472,   567,    64,     7,     3,     4,   485,   477,
     503,    79,   533,    80,   501,    64,    64,   504,     5,   507,
     518,   524,   548,   528,     6,    64,     9,   531,   532,     7,
     541,   493,   497,   546,    10,     8,   542,    11,    89,    80,
      12,   625,    56,   550,    57,   557,   509,    64,   552,   558,
       9,   564,   568,   578,    58,   586,   585,    14,    10,    16,
     220,    11,   589,    59,    12,    13,   184,   590,   592,   597,
      60,   603,   605,   482,   606,   607,   559,    23,   608,   617,
     620,    14,    15,    16,   491,   492,   621,   629,    61,   630,
     643,   253,   254,   255,   499,   256,   257,   258,    62,   628,
      63,   631,   530,   663,   644,   645,    64,   646,    23,   647,
     510,    23,    23,   407,   560,   511,   499,   657,    92,   377,
     659,   660,   386,   386,   408,   669,    89,   673,    56,   674,
      57,   677,    64,   699,    64,   538,   538,   700,   701,   538,
      58,    64,   702,   703,   765,   704,   711,    64,   714,    59,
     712,   106,   155,   769,    64,   451,    60,   722,   723,   601,
     724,   106,   750,   751,   764,   762,    56,   766,    57,   598,
     798,   799,   800,    64,    61,   527,   806,   814,    58,   796,
     808,   811,   815,   816,    62,   573,    63,    59,   828,   838,
     618,   619,   846,   847,    60,   -99,   855,   848,   856,   849,
     865,   547,   752,   549,   134,   866,   676,   155,   378,    88,
     553,   664,    61,   705,    64,   576,   549,   498,    56,   845,
      57,   661,    62,   425,    63,   694,   404,   579,   155,   155,
      58,   581,   582,   783,   571,   611,    89,   852,   656,    59,
     394,   583,   482,   404,   627,   436,    60,   473,   624,   224,
       3,     4,   475,   633,     0,     0,   406,    80,     0,   155,
       0,   611,    78,     0,    61,    56,     0,    57,     6,     0,
      56,    64,    57,     7,    62,     0,    63,    58,    23,    79,
       0,     0,    58,   602,     0,     0,    59,     0,     0,   495,
       0,    59,     0,    60,     9,     0,   404,   692,    60,     0,
       0,     0,    10,     0,    23,    11,    89,     0,    12,    13,
       0,    61,     3,     4,     0,   508,    61,     0,     0,     0,
       0,    62,     0,   768,    78,    14,    62,    16,    83,     0,
       0,   623,   721,     0,     0,     7,     0,     0,     0,     0,
     665,    79,     0,     0,   404,    64,    64,    64,   794,   770,
       0,     3,     4,    64,   633,     0,     9,   406,   758,     0,
       0,   155,    64,    78,    10,     0,     0,    11,     0,     0,
      12,     0,     0,    89,     7,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,   155,    14,    64,    16,
       0,     0,     0,     0,     0,     9,     0,   404,     0,     0,
       0,     3,     4,    10,     0,     0,    11,     0,     0,    12,
      23,     0,     0,    78,   754,   755,   756,   831,     0,     6,
      23,     0,   425,     0,     7,     0,    14,     0,     0,   841,
      79,   425,     0,   167,   168,     0,    23,   173,     0,     0,
     509,   177,     0,    64,     0,     9,    23,   575,     0,     0,
     182,     0,   189,    10,     0,   155,   600,   425,     0,    12,
      13,     0,     0,     0,     0,     0,   832,   155,     0,     0,
       0,    23,     0,     0,     0,     0,    14,   404,     0,     0,
       0,     0,   123,     0,     0,   407,     0,     0,   217,   218,
     223,   189,   226,   227,    23,    64,     0,     0,     0,     0,
      66,   861,   407,     0,     0,    30,     0,    67,    68,     0,
       0,     0,   817,   408,    69,     0,     0,     0,    70,     0,
      71,    72,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,     0,     0,   407,   693,    76,    77,     0,
       0,     0,     0,     0,   862,     0,     0,   432,     0,     0,
       0,     0,     0,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   237,   465,   717,     0,     0,
      32,     0,     0,   407,     0,     0,     0,     0,     0,   242,
     243,     0,    35,     0,   408,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   251,   252,   253,   254,   255,   451,   256,   257,   258,
       0,     0,     0,    32,     0,     0,   801,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    32,     0,    32,    32,
       0,     0,     0,     0,     0,    32,    32,     0,    35,     0,
      35,    35,     0,     0,     0,     0,     0,    35,    35,     0,
       0,     0,    32,     0,     0,     0,   474,     0,   476,     0,
       0,   479,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    57,     3,     4,     0,     0,
       0,     0,     0,   449,     0,    58,     0,     0,   219,     0,
       0,   144,     0,     0,    59,     0,   801,     0,   506,     7,
     145,    60,     0,     0,     0,    79,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       9,   146,   222,     0,     0,   147,   517,   148,    10,    62,
       0,    11,     0,     0,    12,   450,     0,     0,    32,     0,
       0,     0,     0,   149,   150,     0,     0,     0,   237,   151,
      35,    14,     0,   238,   239,     0,   152,   240,     0,     0,
       0,     0,   242,   243,   153,   154,     0,     0,   244,    32,
       0,     0,    32,    32,   409,     0,     0,     0,     0,     0,
       0,    35,     0,     0,    35,    35,   410,     0,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   257,   258,   554,     0,   221,   556,    56,     0,    57,
       3,     4,     0,   561,     0,   563,     0,   222,     0,    58,
     566,     0,   219,     0,   569,   144,     0,     0,    59,     0,
       0,     0,   479,     7,   145,    60,     0,     0,     0,    79,
       0,     0,     0,     0,     0,   577,     0,     0,     0,   479,
       0,     0,     0,    61,     9,   146,     0,     0,     0,   147,
       0,   148,    10,    62,     0,    11,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,   149,   150,    56,
       0,    57,     0,   151,     0,    14,     0,   818,     0,   819,
     152,    58,   622,     0,   143,     0,     0,   144,   153,   154,
      59,     0,     0,     0,     0,     0,   145,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,   146,     0,     0,
       0,   147,     0,   148,     0,    62,     0,    11,     0,    32,
       0,     0,   670,   671,   672,     0,     0,     0,     0,   149,
     150,    35,     0,     0,     0,   151,     0,    14,     0,     0,
       0,     0,   152,   820,   821,    32,     0,     0,   237,     0,
     153,   154,     0,   238,     0,     0,   479,    35,     0,     0,
       0,     0,   242,   243,     0,   715,   716,   718,   244,   719,
     720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,     0,     0,     0,   761,
       0,   479,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   257,   258,     0,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,     0,   795,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   807,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,   826,     0,     0,   580,   827,    35,
       0,   829,     0,     0,     0,     0,     0,     0,     0,     0,
     837,     0,     0,     0,     0,     0,     0,     0,     0,   826,
       0,     0,    32,     0,     0,     0,     0,     0,   853,   854,
       0,     0,     0,     0,    35,     0,   614,     0,   826,   859,
     860,     0,     0,     0,     0,    32,     0,     0,   615,     0,
       0,     0,   826,   409,     0,     0,    56,    35,    57,     0,
       0,     0,     0,     0,   818,   410,   819,     0,    58,     0,
       0,   143,     0,    32,   144,     0,     0,    59,     0,     0,
       0,     0,     0,   145,    60,    35,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,     0,     0,     0,     0,
     235,     0,    61,     0,   146,   236,   614,   695,   147,     0,
     148,     0,    62,     0,    11,   237,     0,     0,   615,     0,
     238,   239,     0,     0,   240,   241,   149,   150,     0,   242,
     243,   237,   151,     0,    14,   244,   238,   221,     0,   152,
     843,   821,     0,     0,     0,   242,   243,   153,   154,   222,
       0,   244,     0,     0,   409,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   410,   256,   257,   258,
       0,     0,     0,     0,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   257,   258,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     0,   313,   314,     0,   315,   316,   317,   318,
     319,   320,   321,     0,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   354,   355,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     0,   313,   314,
       0,   315,   316,   317,   318,   319,   320,   321,     0,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   529,   351,   352,
     353,    56,     0,    57,     0,     0,     0,   354,   355,   833,
       0,   819,     0,    58,     0,     0,   143,     0,     0,   144,
       0,     0,    59,     0,     0,     0,     0,     0,   145,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    56,   146,
      57,     0,     0,   147,     0,   148,   818,    62,   819,    11,
      58,     0,     0,   143,     0,     0,   144,     0,     0,    59,
       0,   149,   150,     0,     0,   145,    60,   151,     0,    14,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,   834,   153,   154,    61,    56,   146,    57,     0,     0,
     147,     0,   148,     0,    62,   142,    11,    58,     0,     0,
     143,     0,     0,   144,     0,     0,    59,     0,   149,   150,
       0,     0,   145,    60,   151,     0,    14,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,   153,
     154,    61,    56,   146,    57,     0,     0,   147,     0,   148,
       0,    62,   431,   117,    58,     0,     0,   143,     0,     0,
     144,     0,     0,    59,     0,   149,   150,     0,     0,   145,
      60,   151,     0,    14,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,   153,   154,    61,    56,
     146,    57,     0,     0,   147,     0,   148,     0,    62,     0,
      11,    58,     0,     0,   143,     0,     0,   144,     0,     0,
      59,     0,   149,   150,     0,     0,   145,    60,   151,     0,
      14,     0,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,   153,   154,    61,    56,   146,    57,     0,
       0,   147,     0,   148,   679,    62,     0,    11,    58,     0,
       0,   680,     0,     0,   681,     0,     0,    59,     0,   149,
     150,     0,     0,   682,    60,   151,     0,    14,   505,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
     153,   154,    61,    56,   683,    57,     0,     0,   684,     0,
     685,     0,    62,     0,    11,    58,     0,     0,   143,     0,
       0,   144,     0,     0,    59,     0,   686,   687,     0,     0,
     145,    60,   688,     0,    14,     0,     0,     0,     0,     0,
     689,     0,     0,     0,     0,     0,     0,   690,   691,    61,
      56,   146,    57,     0,     0,   147,     0,   148,     0,    62,
       0,    11,    58,     0,     0,   143,     0,     0,   144,     0,
       0,    59,     0,   149,   150,     0,     0,   145,    60,   151,
       0,    14,     0,     0,     0,     0,   152,   759,     0,     0,
       0,     0,     0,     0,   153,   154,    61,    56,   146,    57,
       0,     0,   147,     0,   148,     0,    62,     0,    11,    58,
       0,     0,   143,     0,     0,   144,     0,     0,    59,     0,
     149,   150,     0,     0,   145,    60,   151,     0,    14,     0,
       0,     0,     0,   152,     0,     0,     0,     0,     0,     0,
       0,   153,   154,    61,     0,   146,     0,     0,     0,   147,
       0,   148,     0,    62,     0,   117,     0,     0,     0,     0,
       0,     0,     0,   234,   237,     0,     0,   149,   150,   238,
       0,   235,     0,   151,     0,    14,   236,     0,   242,   243,
     152,     0,     0,     0,   244,     0,   237,     0,   153,   154,
       0,   238,   239,   839,     0,   240,   241,     0,     0,     0,
     242,   243,     0,     0,   840,     0,   244,     0,     0,   250,
     251,   252,   253,   254,   255,     0,   256,   257,   258,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,   257,
     258,    56,     0,    57,     3,     4,     0,     0,     0,     0,
     850,   851,     0,    58,     0,     0,    78,   397,     0,     0,
       0,     0,    59,   398,     0,     0,     0,     7,     0,    60,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,     0,     0,    61,     9,     0,
       0,   400,     0,   401,     0,     0,    10,    62,     0,    11,
       0,    56,    12,    57,     3,     4,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,    78,     0,     0,    14,
     402,    16,    59,   398,     0,   403,     0,     7,     0,    60,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     9,     0,
       0,     0,     0,   401,   632,     0,    10,    62,     0,    11,
       0,    56,    12,    57,     3,     4,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,    78,     0,     0,    14,
     402,    16,    59,   398,     0,   -80,     0,     7,     0,    60,
       0,     0,   234,    79,     0,     0,     0,     0,     0,     0,
     235,     0,     0,     0,     0,   236,     0,    61,     9,     0,
       0,     0,     0,   401,     0,   237,    10,    62,     0,    11,
     238,   239,    12,     0,   240,   241,     0,     0,     0,   242,
     243,     0,     0,     0,     0,   244,     0,     0,     0,    14,
     402,    16,     0,     0,     0,   753,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   234,   256,   257,   258,
       0,     0,   265,     0,   235,     0,     0,     0,     0,   236,
       0,     0,     0,   234,     0,     0,     0,     0,     0,   237,
       0,   235,     0,     0,   238,   239,   236,     0,   240,   241,
       0,     0,     0,   242,   243,     0,   237,     0,     0,   244,
       0,   238,   239,     0,     0,   240,   241,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,   257,   258,     0,   245,   267,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   234,   256,   257,
     258,     0,     0,   269,     0,   235,     0,     0,     0,     0,
     236,     0,     0,     0,   234,     0,     0,     0,     0,     0,
     237,     0,   235,     0,     0,   238,   239,   236,     0,   240,
     241,     0,     0,     0,   242,   243,     0,   237,     0,     0,
     244,     0,   238,   239,     0,     0,   240,   241,     0,     0,
       0,   242,   243,     0,     0,     0,     0,   244,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,   257,   258,     0,   245,   428,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   234,   256,
     257,   258,     0,     0,   587,     0,   235,     0,     0,     0,
       0,   236,     0,     0,     0,   234,     0,     0,     0,     0,
       0,   237,     0,   235,     0,     0,   238,   239,   236,     0,
     240,   241,     0,     0,     0,   242,   243,     0,   237,     0,
       0,   244,     0,   238,   239,     0,     0,   240,   241,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   257,   258,     0,   245,   588,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   234,
     256,   257,   258,     0,     0,   706,     0,   235,     0,     0,
       0,     0,   236,     0,     0,     0,   234,     0,     0,     0,
       0,     0,   237,     0,   235,     0,     0,   238,   239,   236,
       0,   240,   241,     0,     0,     0,   242,   243,     0,   237,
       0,     0,   244,     0,   238,   239,     0,     0,   240,   241,
       0,     0,     0,   242,   243,     0,     0,     0,     0,   244,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,   257,   258,     0,   245,   707,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     234,   256,   257,   258,     0,     0,   708,     0,   235,     0,
       0,     0,     0,   236,     0,     0,     0,   234,     0,     0,
       0,     0,     0,   237,     0,   235,     0,     0,   238,   239,
     236,     0,   240,   241,     0,     0,     0,   242,   243,     0,
     237,     0,     0,   244,     0,   238,   239,     0,     0,   240,
     241,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,   257,   258,     0,   245,
     767,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   234,   256,   257,   258,   555,   237,     0,     0,   235,
       0,   238,     0,     0,   236,     0,     0,     0,     0,     0,
     242,   243,     0,     0,   237,     0,   244,     0,     0,   238,
     239,     0,     0,   240,   241,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,     0,     0,     0,     0,
       0,     0,   251,   252,   253,   254,   255,     0,   256,   257,
     258,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,   257,   258,   595,
      56,     0,    57,     3,     4,     0,     0,     0,     0,     0,
     104,     0,    58,     0,     0,    78,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     7,     0,    60,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    56,     0,
      57,     3,     4,     0,     0,     0,    61,     9,     0,     0,
      58,     0,     0,    78,     0,    10,    62,     0,    11,   120,
       0,    12,   105,     0,     7,     0,    60,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,    56,    14,    57,
       3,     4,     0,     0,    61,     9,     0,     0,     0,    58,
       0,     0,    78,    10,    62,     0,    11,     0,    59,    12,
      13,     0,     0,     7,     0,    60,     0,     0,     0,    79,
       0,     0,     0,   234,     0,     0,    14,     0,     0,     0,
       0,   235,     0,    61,     9,     0,   236,     0,     0,     0,
       0,   234,    10,    62,     0,   117,   237,     0,    12,   235,
       0,   238,   239,     0,   236,   240,   241,     0,     0,     0,
     242,   243,     0,     0,   237,    14,   244,     0,     0,   238,
     239,     0,     0,   240,   241,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,   245,   525,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   526,   256,   257,
     258,     0,     0,   245,   593,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   594,   256,   257,   258,   234,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
       0,     0,   236,     0,     0,     0,   234,     0,     0,     0,
       0,     0,   237,     0,   235,     0,     0,   238,   239,   236,
       0,   240,   241,     0,     0,     0,   242,   243,     0,   237,
       0,     0,   244,     0,   238,   239,   839,     0,   240,   241,
       0,     0,     0,   242,   243,     0,     0,   840,     0,   244,
       0,   245,   812,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   813,   256,   257,   258,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     234,   256,   257,   258,     0,     0,     0,     0,   235,     0,
       0,     0,     0,   236,     0,     0,     0,   234,     0,     0,
       0,     0,     0,   237,     0,   235,     0,     0,   238,   239,
     236,     0,   240,   241,     0,     0,     0,   242,   243,     0,
     237,     0,     0,   244,     0,   238,   239,     0,     0,   240,
     241,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   260,   256,   257,   258,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   261,   256,   257,   258,   234,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,   236,     0,
       0,     0,   234,     0,     0,     0,     0,     0,   237,     0,
     235,     0,     0,   238,   239,   236,     0,   240,   241,     0,
       0,     0,   242,   243,     0,   237,     0,     0,   244,     0,
     238,   239,     0,     0,   240,   241,     0,     0,     0,   242,
     243,     0,     0,     0,     0,   244,     0,   245,   521,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   257,   258,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   599,   256,   257,   258,
     234,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,   236,     0,     0,     0,   234,     0,     0,
       0,     0,     0,   237,     0,   235,     0,     0,   238,   239,
     236,     0,   240,   241,     0,     0,     0,   242,   243,     0,
     237,     0,     0,   244,     0,   238,   239,     0,     0,   240,
     241,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   662,   256,   257,   258,     0,   245,
     804,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   234,   256,   257,   258,     0,     0,     0,     0,   235,
       0,     0,     0,     0,   236,     0,     0,     0,   234,     0,
       0,     0,     0,     0,   237,     0,   235,     0,     0,   238,
     239,   236,     0,   240,   241,     0,     0,     0,   242,   243,
       0,   237,     0,     0,   244,     0,   238,   239,     0,     0,
     240,   241,     0,     0,     0,   242,   243,     0,     0,     0,
       0,   244,     0,   245,   809,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,   257,   258,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   842,   256,   257,   258,   234,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,     0,     0,   236,
       0,     0,     0,   725,     0,     0,     0,     0,     0,   237,
       0,   726,     0,     0,   238,   239,   727,     0,   240,   241,
       0,     0,     0,   242,   243,     0,   728,     0,     0,   244,
       0,   729,   730,     0,     0,   731,   732,     0,     0,     0,
     733,   734,     0,     0,     0,     0,   735,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,   257,   258,     0,   736,     0,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   234,   747,   748,
     749,     0,     0,     0,     0,   235,     0,     0,     0,     0,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   235,     0,     0,   238,   239,   236,     0,   240,
       0,     0,     0,     0,   242,   243,     0,   237,     0,     0,
     244,     0,   238,   239,     0,     0,   240,     0,     0,     0,
       0,   242,   243,     0,     0,     0,     0,   244,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,   257,   258,     0,     0,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
     257,   258
};

static const yytype_int16 yycheck[] =
{
       1,   152,    19,     1,    29,    16,    70,    93,   213,   214,
     179,   231,     1,   533,   190,    53,   604,   604,    10,     5,
      11,     5,    10,   587,   604,   758,    37,   604,    29,    11,
     550,    10,    85,    86,    10,    10,    10,    10,   258,    70,
      51,    88,    53,    54,   821,    32,    10,    33,    70,    33,
      85,    10,    81,    82,    89,    66,    10,    68,    69,    70,
      71,    72,    73,    74,    75,    85,    88,    85,    28,    89,
      30,    89,   849,    90,    16,    76,    77,    10,    88,    10,
      40,    92,    93,    10,    10,   134,   863,    32,   264,   213,
     214,   215,    85,   657,    81,    37,    89,    88,    86,    85,
      92,    85,   113,    89,   115,   838,    88,    71,   119,    51,
      89,    53,    71,    89,    89,    89,    89,   705,   705,   130,
     131,   132,   133,   134,    66,   705,    68,    69,   705,    71,
      72,    73,    74,    75,    70,    89,    81,    32,    71,   116,
      71,   152,    81,    82,    71,    71,   157,   124,   125,   126,
     127,   128,    87,    88,     4,   193,    85,   677,   169,    18,
      89,    11,    70,   174,    81,    24,    25,    84,   179,    81,
      85,   113,    84,   115,    89,    84,    70,   119,    87,     7,
      84,   230,   193,    11,    82,    83,    81,   363,   130,   131,
     132,   133,   712,   369,   370,    54,    11,    84,    26,    85,
      87,    63,    88,    85,   215,   216,    56,   256,   368,    81,
     152,   371,   213,   214,   215,   213,   214,   215,   195,   230,
     231,   232,   233,    51,   213,   214,   215,   169,    81,    82,
      83,    70,   174,    61,    82,    63,    51,    81,    82,    83,
      82,     5,    88,     7,    81,   256,    70,   258,    88,     1,
      65,   193,     5,    17,     7,    88,     7,    21,    71,    70,
       1,    71,    26,    27,    17,    71,    17,    19,    88,    33,
      81,    82,    83,    26,   216,    26,    87,    81,    19,    84,
      33,    82,    83,    86,    48,    76,    77,    51,    10,   231,
     232,    55,    87,    57,    83,   515,    81,    61,    51,    63,
      51,    87,    54,    83,    86,    10,    81,    10,    61,    87,
      61,    10,    63,    80,    87,    67,   258,    69,    70,    83,
      84,    85,    81,    88,    76,    77,    67,    88,    69,    70,
      83,     7,     8,     9,    88,    76,    77,    81,    81,    88,
      86,    93,    84,    71,    20,    84,    84,   358,     0,    84,
      86,    71,    71,   522,   365,    31,     8,     9,    88,    86,
      84,    37,    87,   380,   389,   376,   377,    81,    20,    81,
      86,    86,    70,    86,    26,   386,    52,    84,    86,    31,
      86,    51,   383,    87,    60,    37,    86,    63,   389,   406,
      66,   596,     5,    87,     7,     7,   407,   408,    89,     7,
      52,    88,    81,    88,    17,    88,    84,    83,    60,    85,
     151,    63,    81,    26,    66,    67,   358,    81,    86,    84,
      33,    84,    71,   365,    71,    71,   512,   179,    84,    88,
      81,    83,    84,    85,   376,   377,    84,    81,    51,    84,
      81,    77,    78,    79,   386,    81,    82,    83,    61,    86,
      63,    84,   477,   629,    81,    81,   467,    87,   210,    87,
      83,   213,   214,   215,   513,    83,   408,    16,    81,   210,
      86,    86,   213,   214,   215,    89,   477,    88,     5,    88,
       7,    87,   493,    84,   495,   486,   487,    84,    86,   490,
      17,   502,    86,    81,   714,    84,    87,   508,    83,    26,
      87,   512,   513,   723,   515,   246,    33,    81,    83,   573,
      69,   522,    84,    84,    84,    88,     5,    86,     7,   568,
      84,    84,    84,   534,    51,   467,    84,    88,    17,   749,
      86,    86,    84,    81,    61,   536,    63,    26,    81,    69,
     589,   590,    86,    84,    33,    91,    86,    92,    69,    91,
      84,   493,   703,   495,    81,    84,   649,   568,   212,    27,
     502,    50,    51,   668,   575,   545,   508,   383,     5,   830,
       7,   620,    61,   515,    63,   658,   587,   548,   589,   590,
      17,   548,   548,   737,   534,   586,   587,   838,   612,    26,
     214,   549,   534,   604,   596,   233,    33,   345,   596,   152,
       8,     9,   358,   604,    -1,    -1,   604,   624,    -1,   620,
      -1,   612,    20,    -1,    51,     5,    -1,     7,    26,    -1,
       5,   632,     7,    31,    61,    -1,    63,    17,   380,    37,
      -1,    -1,    17,   575,    -1,    -1,    26,    -1,    -1,   380,
      -1,    26,    -1,    33,    52,    -1,   657,   658,    33,    -1,
      -1,    -1,    60,    -1,   406,    63,   657,    -1,    66,    67,
      -1,    51,     8,     9,    -1,   406,    51,    -1,    -1,    -1,
      -1,    61,    -1,   722,    20,    83,    61,    85,    63,    -1,
      -1,    89,   693,    -1,    -1,    31,    -1,    -1,    -1,    -1,
     632,    37,    -1,    -1,   705,   706,   707,   708,   747,   724,
      -1,     8,     9,   714,   705,    -1,    52,   705,   709,    -1,
      -1,   722,   723,    20,    60,    -1,    -1,    63,    -1,    -1,
      66,    -1,    -1,   724,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,   747,    83,   749,    85,
      -1,    -1,    -1,    -1,    -1,    52,    -1,   758,    -1,    -1,
      -1,     8,     9,    60,    -1,    -1,    63,    -1,    -1,    66,
     512,    -1,    -1,    20,   706,   707,   708,   816,    -1,    26,
     522,    -1,   714,    -1,    31,    -1,    83,    -1,    -1,   828,
      37,   723,    -1,    94,    95,    -1,   538,    98,    -1,    -1,
     801,   102,    -1,   804,    -1,    52,   548,   538,    -1,    -1,
     111,    -1,   113,    60,    -1,   816,    63,   749,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,   817,   828,    -1,    -1,
      -1,   573,    -1,    -1,    -1,    -1,    83,   838,    -1,    -1,
      -1,    -1,   573,    -1,    -1,   587,    -1,    -1,   149,   150,
     151,   152,   153,   154,   596,   856,    -1,    -1,    -1,    -1,
       4,   852,   604,    -1,    -1,   596,    -1,    11,    12,    -1,
      -1,    -1,   804,   604,    18,    -1,    -1,    -1,    22,    -1,
      24,    25,   624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   624,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,   657,   658,    61,    62,    -1,
      -1,    -1,    -1,    -1,   856,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    29,   257,   688,    -1,    -1,
       1,    -1,    -1,   705,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,     1,    -1,   705,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,   737,    81,    82,    83,
      -1,    -1,    -1,    54,    -1,    -1,   758,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    93,    -1,    -1,    -1,   357,    -1,   359,    -1,
      -1,   362,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    17,    -1,    -1,    20,    -1,
      -1,    23,    -1,    -1,    26,    -1,   838,    -1,   399,    31,
      32,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,   151,    -1,    -1,    57,   427,    59,    60,    61,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,   179,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    29,    81,
     179,    83,    -1,    34,    35,    -1,    88,    38,    -1,    -1,
      -1,    -1,    43,    44,    96,    97,    -1,    -1,    49,   210,
      -1,    -1,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    -1,   213,   214,   215,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,   504,    -1,   246,   507,     5,    -1,     7,
       8,     9,    -1,   514,    -1,   516,    -1,   246,    -1,    17,
     521,    -1,    20,    -1,   525,    23,    -1,    -1,    26,    -1,
      -1,    -1,   533,    31,    32,    33,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,   546,    -1,    -1,    -1,   550,
      -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      -1,    59,    60,    61,    -1,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,     5,
      -1,     7,    -1,    81,    -1,    83,    -1,    13,    -1,    15,
      88,    17,   593,    -1,    20,    -1,    -1,    23,    96,    97,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,   380,
      -1,    -1,   643,   644,   645,    -1,    -1,    -1,    -1,    75,
      76,   380,    -1,    -1,    -1,    81,    -1,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,   406,    -1,    -1,    29,    -1,
      96,    97,    -1,    34,    -1,    -1,   677,   406,    -1,    -1,
      -1,    -1,    43,    44,    -1,   686,   687,   688,    49,   690,
     691,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   703,    -1,    -1,    -1,    -1,    -1,    -1,   710,
      -1,   712,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,    -1,   748,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   766,    -1,    -1,    -1,    -1,
      -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   522,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   522,    -1,    -1,    -1,   538,    -1,    -1,
      -1,    -1,    -1,    -1,   805,    -1,    -1,   548,   809,   538,
      -1,   812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     821,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,
      -1,    -1,   573,    -1,    -1,    -1,    -1,    -1,   839,   840,
      -1,    -1,    -1,    -1,   573,    -1,   587,    -1,   849,   850,
     851,    -1,    -1,    -1,    -1,   596,    -1,    -1,   587,    -1,
      -1,    -1,   863,   604,    -1,    -1,     5,   596,     7,    -1,
      -1,    -1,    -1,    -1,    13,   604,    15,    -1,    17,    -1,
      -1,    20,    -1,   624,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    32,    33,   624,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    51,    -1,    53,    19,   657,   658,    57,    -1,
      59,    -1,    61,    -1,    63,    29,    -1,    -1,   657,    -1,
      34,    35,    -1,    -1,    38,    39,    75,    76,    -1,    43,
      44,    29,    81,    -1,    83,    49,    34,   688,    -1,    88,
      89,    90,    -1,    -1,    -1,    43,    44,    96,    97,   688,
      -1,    49,    -1,    -1,   705,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   705,    81,    82,    83,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,   737,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   737,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     5,    -1,     7,    -1,    -1,    -1,    96,    97,    13,
      -1,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,     5,    53,
       7,    -1,    -1,    57,    -1,    59,    13,    61,    15,    63,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,
      -1,    75,    76,    -1,    -1,    32,    33,    81,    -1,    83,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    51,     5,    53,     7,    -1,    -1,
      57,    -1,    59,    -1,    61,    15,    63,    17,    -1,    -1,
      20,    -1,    -1,    23,    -1,    -1,    26,    -1,    75,    76,
      -1,    -1,    32,    33,    81,    -1,    83,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    51,     5,    53,     7,    -1,    -1,    57,    -1,    59,
      -1,    61,    15,    63,    17,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    26,    -1,    75,    76,    -1,    -1,    32,
      33,    81,    -1,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    51,     5,
      53,     7,    -1,    -1,    57,    -1,    59,    -1,    61,    -1,
      63,    17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,
      26,    -1,    75,    76,    -1,    -1,    32,    33,    81,    -1,
      83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    51,     5,    53,     7,    -1,
      -1,    57,    -1,    59,    13,    61,    -1,    63,    17,    -1,
      -1,    20,    -1,    -1,    23,    -1,    -1,    26,    -1,    75,
      76,    -1,    -1,    32,    33,    81,    -1,    83,    84,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    51,     5,    53,     7,    -1,    -1,    57,    -1,
      59,    -1,    61,    -1,    63,    17,    -1,    -1,    20,    -1,
      -1,    23,    -1,    -1,    26,    -1,    75,    76,    -1,    -1,
      32,    33,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    51,
       5,    53,     7,    -1,    -1,    57,    -1,    59,    -1,    61,
      -1,    63,    17,    -1,    -1,    20,    -1,    -1,    23,    -1,
      -1,    26,    -1,    75,    76,    -1,    -1,    32,    33,    81,
      -1,    83,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    51,     5,    53,     7,
      -1,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    17,
      -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,    -1,
      75,    76,    -1,    -1,    32,    33,    81,    -1,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    29,    -1,    -1,    75,    76,    34,
      -1,    14,    -1,    81,    -1,    83,    19,    -1,    43,    44,
      88,    -1,    -1,    -1,    49,    -1,    29,    -1,    96,    97,
      -1,    34,    35,    36,    -1,    38,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    49,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,     5,    -1,     7,     8,     9,    -1,    -1,    -1,    -1,
      93,    94,    -1,    17,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    33,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    60,    61,    -1,    63,
      -1,     5,    66,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    83,
      84,    85,    26,    27,    -1,    89,    -1,    31,    -1,    33,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,
      -1,     5,    66,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    83,
      84,    85,    26,    27,    -1,    89,    -1,    31,    -1,    33,
      -1,    -1,     6,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    -1,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    29,    60,    61,    -1,    63,
      34,    35,    66,    -1,    38,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     6,    81,    82,    83,
      -1,    -1,    86,    -1,    14,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    14,    -1,    -1,    34,    35,    19,    -1,    38,    39,
      -1,    -1,    -1,    43,    44,    -1,    29,    -1,    -1,    49,
      -1,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    68,    86,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     6,    81,    82,
      83,    -1,    -1,    86,    -1,    14,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    14,    -1,    -1,    34,    35,    19,    -1,    38,
      39,    -1,    -1,    -1,    43,    44,    -1,    29,    -1,    -1,
      49,    -1,    34,    35,    -1,    -1,    38,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    68,    86,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     6,    81,
      82,    83,    -1,    -1,    86,    -1,    14,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    14,    -1,    -1,    34,    35,    19,    -1,
      38,    39,    -1,    -1,    -1,    43,    44,    -1,    29,    -1,
      -1,    49,    -1,    34,    35,    -1,    -1,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    -1,    68,    86,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     6,
      81,    82,    83,    -1,    -1,    86,    -1,    14,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    14,    -1,    -1,    34,    35,    19,
      -1,    38,    39,    -1,    -1,    -1,    43,    44,    -1,    29,
      -1,    -1,    49,    -1,    34,    35,    -1,    -1,    38,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    68,    86,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       6,    81,    82,    83,    -1,    -1,    86,    -1,    14,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    14,    -1,    -1,    34,    35,
      19,    -1,    38,    39,    -1,    -1,    -1,    43,    44,    -1,
      29,    -1,    -1,    49,    -1,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    83,    -1,    68,
      86,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     6,    81,    82,    83,    84,    29,    -1,    -1,    14,
      -1,    34,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    29,    -1,    49,    -1,    -1,    34,
      35,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    84,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    51,    52,    -1,    -1,
      17,    -1,    -1,    20,    -1,    60,    61,    -1,    63,    26,
      -1,    66,    67,    -1,    31,    -1,    33,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,     5,    83,     7,
       8,     9,    -1,    -1,    51,    52,    -1,    -1,    -1,    17,
      -1,    -1,    20,    60,    61,    -1,    63,    -1,    26,    66,
      67,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    37,
      -1,    -1,    -1,     6,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    14,    -1,    51,    52,    -1,    19,    -1,    -1,    -1,
      -1,     6,    60,    61,    -1,    63,    29,    -1,    66,    14,
      -1,    34,    35,    -1,    19,    38,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    29,    83,    49,    -1,    -1,    34,
      35,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    14,    -1,    -1,    34,    35,    19,
      -1,    38,    39,    -1,    -1,    -1,    43,    44,    -1,    29,
      -1,    -1,    49,    -1,    34,    35,    36,    -1,    38,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    49,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       6,    81,    82,    83,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    14,    -1,    -1,    34,    35,
      19,    -1,    38,    39,    -1,    -1,    -1,    43,    44,    -1,
      29,    -1,    -1,    49,    -1,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      14,    -1,    -1,    34,    35,    19,    -1,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    29,    -1,    -1,    49,    -1,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    14,    -1,    -1,    34,    35,
      19,    -1,    38,    39,    -1,    -1,    -1,    43,    44,    -1,
      29,    -1,    -1,    49,    -1,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     6,    81,    82,    83,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    14,    -1,    -1,    34,
      35,    19,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
      -1,    29,    -1,    -1,    49,    -1,    34,    35,    -1,    -1,
      38,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    14,    -1,    -1,    34,    35,    19,    -1,    38,    39,
      -1,    -1,    -1,    43,    44,    -1,    29,    -1,    -1,    49,
      -1,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     6,    81,    82,
      83,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    14,    -1,    -1,    34,    35,    19,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    -1,    29,    -1,    -1,
      49,    -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    83
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    99,     0,     8,     9,    20,    26,    31,    37,    52,
      60,    63,    66,    67,    83,    84,    85,   100,   104,   105,
     106,   111,   112,   117,   118,   121,   138,   139,   143,   146,
     148,   150,   151,   152,   153,   154,   155,   156,   164,   165,
     166,   167,   168,   171,   172,   173,   177,   201,   203,   206,
      70,    88,    70,    88,    70,    70,     5,     7,    17,    26,
      33,    51,    61,    63,   101,   102,     4,    11,    12,    18,
      22,    24,    25,    41,    42,    54,    61,    62,    20,    37,
     106,   148,    84,    63,    81,    84,   116,    84,   116,   104,
     105,   185,    81,    70,    82,    82,   102,    32,    81,   102,
     174,    32,    81,   174,    15,    67,   101,   148,   161,   163,
      32,    81,    81,    82,   102,   148,   102,    63,   102,   148,
      26,   101,   146,   148,   102,   102,   102,   102,   102,   104,
     148,   165,   148,   165,    81,   104,   107,   108,   109,    88,
      88,    88,    15,    20,    23,    32,    53,    57,    59,    75,
      76,    81,    88,    96,    97,   101,   102,   117,   149,   151,
     154,   207,   208,   209,   219,   163,   101,   219,   219,    70,
     157,   158,    71,   219,    10,    89,    71,   219,    89,    10,
      71,    71,   219,   213,   102,   210,   211,   212,   214,   219,
      81,   102,   157,    88,   102,   144,    84,   157,   157,   157,
     157,   157,   102,   102,   102,   102,   207,    28,    30,    40,
     110,    86,    10,   119,   140,   186,    83,   219,   219,    20,
     148,   151,   154,   219,   210,   212,   219,   219,    87,   101,
      81,    83,    86,    10,     6,    14,    19,    29,    34,    35,
      38,    39,    43,    44,    49,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    81,    82,    83,    71,
      80,    80,   102,   159,    81,    86,   102,    86,   161,    86,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    47,    48,    50,    51,    52,    53,    54,
      55,    56,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    96,    97,   215,    87,    10,    10,
      80,   107,    87,    81,   174,    88,   157,    88,    88,    81,
      81,    88,    84,    84,    84,    84,    86,   148,   109,   104,
     105,   112,   120,   122,   123,   137,   148,   202,   203,     7,
     104,   112,   141,   192,   201,   202,   203,    21,    27,    48,
      55,    57,    84,    89,   101,   104,   105,   117,   148,   151,
     154,   178,   179,   180,   181,   182,   183,   184,   185,   187,
     191,   202,   203,   217,   218,   102,   216,    86,    86,    89,
      89,    15,   219,   207,   216,   102,   209,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,    15,
      67,   148,   160,   162,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   207,   219,   216,    10,    71,   107,
      71,    71,    71,   213,   219,   211,   219,    86,   205,   219,
     107,    89,   102,   175,   176,    88,   169,   169,   107,   107,
     169,   102,   102,    51,    65,   148,    89,   104,   123,   102,
     142,   185,    56,    84,    81,    84,   219,    81,   148,   101,
      83,    83,    70,    81,    82,    83,    87,   219,    86,    84,
      87,    69,    10,    71,    86,    69,    80,   102,    86,    86,
     185,    84,    86,    87,    10,    89,   145,    89,   104,   170,
      89,    86,    86,    89,    84,    87,    87,   102,    70,   102,
      87,   204,    89,   102,   219,    84,   219,     7,     7,   163,
     207,   219,   216,   219,    88,   113,   219,   161,    81,   219,
     205,   176,    89,   104,   147,   148,   113,   219,    88,   150,
     151,   152,   155,   204,   205,    84,    88,    86,    86,    81,
      81,    71,    86,    69,    80,    84,   114,    84,   207,    80,
      63,   146,   102,    84,   124,    71,    71,    71,    84,     5,
      33,   104,   193,   194,   151,   154,   184,    88,   207,   207,
      81,    84,   219,    89,   105,   112,   115,   206,    86,    81,
      84,    84,    58,   104,   125,   126,   127,   178,   179,   182,
     183,   202,   203,    81,    81,    81,    87,    87,     7,    11,
      26,    51,    61,    63,   103,    89,   194,    16,   188,    86,
      86,   207,    80,   107,    50,   102,   128,   129,    88,    89,
     219,   219,   219,    88,    88,    17,   103,    87,   184,    13,
      20,    23,    32,    53,    57,    59,    75,    76,    81,    89,
      96,    97,   101,   117,   149,   151,   189,   190,   220,    84,
      84,    86,    86,    81,    84,   124,    86,    86,    86,   197,
     195,    87,    87,   205,    83,   219,   219,   148,   219,   219,
     219,   101,    81,    83,    69,     6,    14,    19,    29,    34,
      35,    38,    39,    43,    44,    49,    68,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    81,    82,    83,
      84,    84,   212,    89,   102,   102,   102,    89,   104,    89,
     196,   219,    88,   205,    84,   216,    86,    86,   207,   216,
     185,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   162,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   207,   219,   216,    86,    84,    84,
      84,   117,   198,   217,    69,   199,    84,   219,    86,    69,
      71,    86,    69,    80,    88,    84,    81,   102,    13,    15,
      89,    90,   132,   133,   136,   200,   219,   219,    81,   219,
     130,   207,   104,    13,    95,   135,   136,   219,    69,    36,
      47,   207,    80,    89,   131,   132,    86,    84,    92,    91,
      93,    94,   198,   219,   219,    86,    69,   134,   136,   219,
     219,   104,   102,    10,    92,    84,    84,   136
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   111,   112,   112,   112,
     112,   113,   114,   114,   115,   115,   116,   116,   117,   118,
     119,   119,   120,   120,   120,   120,   121,   122,   122,   123,
     124,   124,   125,   125,   125,   125,   125,   125,   125,   126,
     127,   127,   128,   128,   129,   130,   130,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   135,   136,   136,
     136,   136,   136,   137,   137,   137,   138,   139,   140,   140,
     141,   141,   141,   141,   141,   142,   144,   143,   143,   145,
     145,   146,   147,   147,   148,   148,   148,   148,   148,   149,
     149,   150,   150,   151,   152,   153,   153,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   157,   157,   158,   159,   159,   160,   160,
     160,   161,   161,   161,   161,   162,   162,   163,   163,   163,
     164,   164,   164,   164,   164,   165,   165,   165,   165,   166,
     167,   168,   169,   169,   170,   171,   171,   172,   173,   174,
     174,   175,   175,   176,   177,   177,   177,   177,   178,   178,
     178,   179,   180,   180,   181,   182,   182,   183,   183,   184,
     184,   184,   184,   184,   184,   184,   184,   185,   186,   186,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   191,
     192,   193,   193,   194,   194,   194,   194,   194,   195,   195,
     196,   197,   197,   198,   198,   199,   199,   200,   201,   202,
     202,   203,   204,   204,   205,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   210,   210,   211,   212,   212,   212,
     213,   213,   213,   214,   214,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   216,
     217,   217,   218,   218,   218,   218,   218,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     2,     5,     5,     0,     1,     1,     3,
       4,     6,     1,     1,     1,     0,     7,     6,     7,     9,
       8,     3,     0,     2,     1,     1,     0,     3,     1,     6,
       0,     2,     1,     1,     1,     1,     7,     1,     2,     7,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     2,     2,     1,     7,     0,     2,     4,     1,     1,
       5,     3,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     3,    10,    10,    10,     7,     7,     0,     2,
       1,     1,     1,     1,     1,     1,     0,     8,     4,     0,
       2,     6,     3,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     6,     6,     6,
       1,     1,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     3,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     7,
       7,     7,     0,     2,     4,     6,     7,     4,     4,     1,
       3,     1,     3,     3,     5,     5,     5,     5,     5,     8,
       4,     1,     2,     3,     2,     5,     7,     7,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     0,     2,
       7,     0,     2,     3,     2,     1,     1,     1,     1,     1,
       6,     1,     2,     5,     5,     7,     6,     5,     0,     2,
       5,     0,     4,     1,     4,     0,     2,     5,     7,     5,
       4,     7,     0,     2,     1,     2,     0,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     0,     1,     3,
       0,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     4,     6,     1,     1,     1,
       1,     1,     1,     2,     4,     6,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     7,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     2,     4,
       6,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     7,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 9: /* declaration: typeDeclaration  */
#line 130 "src/parser.y"
                      {Symbol* s = tos_get_element((yyvsp[0].integer)); s->type = TOS_TYPE_IDENTIFIER;}
#line 2821 "src/parser.tab.c"
    break;

  case 15: /* nonTypeName: IDENTIFIER  */
#line 139 "src/parser.y"
                 {(yyval.integer) = (yyvsp[0].integer);}
#line 2827 "src/parser.tab.c"
    break;

  case 16: /* nonTypeName: APPLY  */
#line 140 "src/parser.y"
            {(yyval.integer) = -1;}
#line 2833 "src/parser.tab.c"
    break;

  case 17: /* nonTypeName: KEY  */
#line 141 "src/parser.y"
          {(yyval.integer) = -1;}
#line 2839 "src/parser.tab.c"
    break;

  case 18: /* nonTypeName: ACTIONS  */
#line 142 "src/parser.y"
              {(yyval.integer) = -1;}
#line 2845 "src/parser.tab.c"
    break;

  case 19: /* nonTypeName: STATE  */
#line 143 "src/parser.y"
            {(yyval.integer) = -1;}
#line 2851 "src/parser.tab.c"
    break;

  case 20: /* nonTypeName: ENTRIES  */
#line 144 "src/parser.y"
              {(yyval.integer) = -1;}
#line 2857 "src/parser.tab.c"
    break;

  case 21: /* nonTypeName: TYPE  */
#line 145 "src/parser.y"
           {(yyval.integer) = -1;}
#line 2863 "src/parser.tab.c"
    break;

  case 22: /* name: nonTypeName  */
#line 149 "src/parser.y"
                  {(yyval.integer) = (yyvsp[0].integer);}
#line 2869 "src/parser.tab.c"
    break;

  case 23: /* name: TYPE_IDENTIFIER  */
#line 150 "src/parser.y"
                      {(yyval.integer) = (yyvsp[0].integer);}
#line 2875 "src/parser.tab.c"
    break;

  case 46: /* packageTypeDeclaration: optAnnotations PACKAGE name optTypeParameters '(' parameterList ')'  */
#line 201 "src/parser.y"
                            {(yyval.integer) = (yyvsp[-4].integer);}
#line 2881 "src/parser.tab.c"
    break;

  case 66: /* parserTypeDeclaration: optAnnotations PARSER name optTypeParameters '(' parameterList ')'  */
#line 255 "src/parser.y"
                                                                         {(yyval.integer) = (yyvsp[-4].integer);}
#line 2887 "src/parser.tab.c"
    break;

  case 107: /* controlTypeDeclaration: optAnnotations CONTROL name optTypeParameters '(' parameterList ')'  */
#line 358 "src/parser.y"
                            {(yyval.integer) = (yyvsp[-4].integer);}
#line 2893 "src/parser.tab.c"
    break;

  case 116: /* $@1: %empty  */
#line 381 "src/parser.y"
                                        {Symbol* s = tos_get_element((yyvsp[0].integer)); s->type = TOS_TYPE_IDENTIFIER;}
#line 2899 "src/parser.tab.c"
    break;

  case 156: /* typeParameterList: name  */
#line 467 "src/parser.y"
           {Symbol* s = tos_get_element((yyvsp[0].integer)); s->type = TOS_TYPE_IDENTIFIER;}
#line 2905 "src/parser.tab.c"
    break;

  case 157: /* typeParameterList: typeParameterList COMMA name  */
#line 468 "src/parser.y"
                                   {Symbol* s = tos_get_element((yyvsp[0].integer)); s->type = TOS_TYPE_IDENTIFIER;}
#line 2911 "src/parser.tab.c"
    break;

  case 170: /* typeDeclaration: derivedTypeDeclaration  */
#line 496 "src/parser.y"
                             {(yyval.integer) = (yyvsp[0].integer);}
#line 2917 "src/parser.tab.c"
    break;

  case 171: /* typeDeclaration: typedefDeclaration  */
#line 497 "src/parser.y"
                         {(yyval.integer) = (yyvsp[0].integer);}
#line 2923 "src/parser.tab.c"
    break;

  case 172: /* typeDeclaration: parserTypeDeclaration ';'  */
#line 498 "src/parser.y"
                                {(yyval.integer) = (yyvsp[-1].integer);}
#line 2929 "src/parser.tab.c"
    break;

  case 173: /* typeDeclaration: controlTypeDeclaration ';'  */
#line 499 "src/parser.y"
                                 {(yyval.integer) = (yyvsp[-1].integer);}
#line 2935 "src/parser.tab.c"
    break;

  case 174: /* typeDeclaration: packageTypeDeclaration ';'  */
#line 500 "src/parser.y"
                                 {(yyval.integer) = (yyvsp[-1].integer);}
#line 2941 "src/parser.tab.c"
    break;

  case 175: /* derivedTypeDeclaration: headerTypeDeclaration  */
#line 504 "src/parser.y"
                            {(yyval.integer) = (yyvsp[0].integer);}
#line 2947 "src/parser.tab.c"
    break;

  case 176: /* derivedTypeDeclaration: headerUnionDeclaration  */
#line 505 "src/parser.y"
                             {(yyval.integer) = (yyvsp[0].integer);}
#line 2953 "src/parser.tab.c"
    break;

  case 177: /* derivedTypeDeclaration: structTypeDeclaration  */
#line 506 "src/parser.y"
                            {(yyval.integer) = (yyvsp[0].integer);}
#line 2959 "src/parser.tab.c"
    break;

  case 178: /* derivedTypeDeclaration: enumDeclaration  */
#line 507 "src/parser.y"
                      {(yyval.integer) = (yyvsp[0].integer);}
#line 2965 "src/parser.tab.c"
    break;

  case 179: /* headerTypeDeclaration: optAnnotations HEADER name optTypeParameters '{' structFieldList '}'  */
#line 511 "src/parser.y"
                                                                           {(yyval.integer) = (yyvsp[-4].integer);}
#line 2971 "src/parser.tab.c"
    break;

  case 180: /* headerUnionDeclaration: optAnnotations HEADER_UNION name optTypeParameters '{' structFieldList '}'  */
#line 515 "src/parser.y"
                                                                                 {(yyval.integer) = (yyvsp[-4].integer);}
#line 2977 "src/parser.tab.c"
    break;

  case 181: /* structTypeDeclaration: optAnnotations STRUCT name optTypeParameters '{' structFieldList '}'  */
#line 519 "src/parser.y"
                                                                           {(yyval.integer) = (yyvsp[-4].integer);}
#line 2983 "src/parser.tab.c"
    break;

  case 185: /* enumDeclaration: optAnnotations ENUM name '{' identifierList '}'  */
#line 532 "src/parser.y"
                                                      {(yyval.integer) = (yyvsp[-3].integer);}
#line 2989 "src/parser.tab.c"
    break;

  case 186: /* enumDeclaration: optAnnotations ENUM typeRef name '{' specifiedIdentifierList '}'  */
#line 533 "src/parser.y"
                                                                       {(yyval.integer) = (yyvsp[-3].integer);}
#line 2995 "src/parser.tab.c"
    break;

  case 194: /* typedefDeclaration: optAnnotations TYPEDEF typeRef name ';'  */
#line 559 "src/parser.y"
                                              {(yyval.integer) = (yyvsp[-1].integer);}
#line 3001 "src/parser.tab.c"
    break;

  case 195: /* typedefDeclaration: optAnnotations TYPEDEF derivedTypeDeclaration name ';'  */
#line 560 "src/parser.y"
                                                             {(yyval.integer) = (yyvsp[-1].integer);}
#line 3007 "src/parser.tab.c"
    break;

  case 196: /* typedefDeclaration: optAnnotations TYPE typeRef name ';'  */
#line 561 "src/parser.y"
                                           {(yyval.integer) = (yyvsp[-1].integer);}
#line 3013 "src/parser.tab.c"
    break;

  case 197: /* typedefDeclaration: optAnnotations TYPE derivedTypeDeclaration name ';'  */
#line 562 "src/parser.y"
                                                          {(yyval.integer) = (yyvsp[-1].integer);}
#line 3019 "src/parser.tab.c"
    break;


#line 3023 "src/parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 966 "src/parser.y"


void yyerror(const char* error)
{
    fprintf(stderr, "%s", error);
}
