%debug

%define parse.error verbose

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdarg.h>
    #include "tos.h"

    void yyerror(const char*);
    int yylex(void);

%}

%union {
    int integer;
}

%token ABSTRACT
%token ACTION
%token ACTIONS
%token AND
%token APPLY
%token BIT
%token BOOL
%token COMMA
%token CONST
%token CONTROL
%token DEFAULT
%token DIFFERENT
%token DONTCARE
%token ELSE
%token ENTRIES
%token ENUM
%token EQUAL
%token ERROR
%token EXIT
%token EXTERN
%token FALSE
%token HEADER
%token HEADER_UNION
%token <integer> IDENTIFIER
%token IF
%token IN
%token INCREMENT
%token INOUT
%token INT
%token INTEGER
%token KEY
%token LEFT_SHIFT
%token LESS_EQUAL
%token MASK
%token MATCH_KIND
%token MORE_EQUAL
%token OR
%token OUT
%token PACKAGE
%token PARSER
%token PIPE_LESS_PIPE
%token PIPE_PLUS_PIPE
%token PRAGMA
%token PREFIX
%token RANGE
%token RETURN
%token RIGHT_SHIFT
%token SELECT
%token STATE
%token STRING
%token STRING_LITERAL
%token STRUCT
%token SWITCH
%token TABLE
%token THIS
%token TRANSITION
%token TRUE
%token TUPLE
%token TYPE
%token TYPEDEF
%token <integer> TYPE_IDENTIFIER
%token UNKNOWN_TOKEN
%token VALUESET
%token VARBIT
%token VOID

%type <integer> typeDeclaration
%type <integer> name
%type <integer> nonTypeName
%type <integer> packageTypeDeclaration
%type <integer> parserTypeDeclaration
%type <integer> controlTypeDeclaration
%type <integer> derivedTypeDeclaration
%type <integer> typedefDeclaration
%type <integer> headerTypeDeclaration
%type <integer> headerUnionDeclaration
%type <integer> structTypeDeclaration
%type <integer> enumDeclaration

%left COMMA
%nonassoc '?'
%nonassoc ':'
%left OR
%left AND
%left EQUAL DIFFERENT
%left '<' '>' LESS_EQUAL MORE_EQUAL
%left '|'
%left '^'
%left '&'
%left LEFT_SHIFT RIGHT_SHIFT
%left INCREMENT '+' '-' PIPE_PLUS_PIPE PIPE_LESS_PIPE
%left '*' '/' '%'
%right PREFIX
%nonassoc ']' '(' '['
%left '.'


%%
p4program
    : /* empty */
    | p4program declaration
    | p4program ';'  /* empty declaration */
    ;

declaration
    : constantDeclaration
    | externDeclaration
    | actionDeclaration
    | parserDeclaration
    | typeDeclaration {Symbol* s = tos_get_element($1); s->type = TOS_TYPE_IDENTIFIER;}
    | controlDeclaration
    | instantiation
    | errorDeclaration
    | matchKindDeclaration
    | functionDeclaration
    ;

nonTypeName
    : IDENTIFIER {$$ = $1;}
    | APPLY {$$ = -1;}
    | KEY {$$ = -1;}
    | ACTIONS {$$ = -1;}
    | STATE {$$ = -1;}
    | ENTRIES {$$ = -1;}
    | TYPE {$$ = -1;}
    ;

name
    : nonTypeName {$$ = $1;}
    | TYPE_IDENTIFIER {$$ = $1;}
    ;

nonTableKwName
   : IDENTIFIER
   | TYPE_IDENTIFIER
   | APPLY
   | STATE
   | TYPE
   ;

optAnnotations
    : /* empty */
    | annotations
    ;

annotations
    : annotation
    | annotations annotation
    ;

annotation
    : '@' name
    | '@' name '(' annotationBody ')'
    | '@' name '[' structuredAnnotationBody ']'
    ;

parameterList
    : /* empty */
    | nonEmptyParameterList
    ;

nonEmptyParameterList
    : parameter
    | nonEmptyParameterList COMMA parameter
    ;

parameter
    : optAnnotations direction typeRef name
    | optAnnotations direction typeRef name '=' expression
    ;

direction
    : IN
    | OUT
    | INOUT
    | /* empty */
    ;

packageTypeDeclaration
    : optAnnotations PACKAGE name optTypeParameters
      '(' parameterList ')' {$$ = $3;}
    ;

instantiation
    : typeRef '(' argumentList ')' name ';'
    | annotations typeRef '(' argumentList ')' name ';'
    | annotations typeRef '(' argumentList ')' name '=' objInitializer ';'
    | typeRef '(' argumentList ')' name '=' objInitializer ';'
    ;

objInitializer
    : '{' objDeclarations '}'
    ;

objDeclarations
    : /* empty */
    | objDeclarations objDeclaration
    ;

objDeclaration
    : functionDeclaration
    | instantiation
    ;

optConstructorParameters
    : /* empty */
    | '(' parameterList ')'
    ;

dotPrefix
    : '.'
    ;

/**************************** PARSER ******************************/

parserDeclaration
    : parserTypeDeclaration optConstructorParameters
      /* no type parameters allowed in the parserTypeDeclaration */
      '{' parserLocalElements parserStates '}' {tos_decrease_scope_depth();}
    ;

parserLocalElements
    : /* empty */
    | parserLocalElements parserLocalElement
    ;

parserLocalElement
    : constantDeclaration
    | variableDeclaration
    | instantiation
    | valueSetDeclaration
    ;

parserTypeDeclaration
    : optAnnotations PARSER name {tos_increase_scope_depth();} optTypeParameters '(' parameterList ')' {$$ = $3;}
    ;

parserStates
    : parserState
    | parserStates parserState
    ;

parserState
    : optAnnotations STATE name '{' parserStatements transitionStatement '}'
    ;

parserStatements
    : /* empty */
    | parserStatements parserStatement
    ;

parserStatement
    : assignmentOrMethodCallStatement
    | directApplication
    | parserBlockStatement
    | constantDeclaration
    | variableDeclaration
    | emptyStatement
    | conditionalStatement
    ;

parserBlockStatement
    : optAnnotations '{' parserStatements '}'
    ;

transitionStatement
    : /* empty */
    | TRANSITION stateExpression
    ;

stateExpression
    : name ';'
    | selectExpression
    ;

selectExpression
    : SELECT '(' expressionList ')' '{' selectCaseList '}'
    ;

selectCaseList
    : /* empty */
    | selectCaseList selectCase
    ;

selectCase
    : keysetExpression ':' name ';'
    ;

keysetExpression
    : tupleKeysetExpression
    | simpleKeysetExpression
    ;

tupleKeysetExpression
    : "(" simpleKeysetExpression "," simpleExpressionList ")"
    | "(" reducedSimpleKeysetExpression ")"
    ;

simpleExpressionList
    : simpleKeysetExpression
    | simpleExpressionList COMMA simpleKeysetExpression
    ;

reducedSimpleKeysetExpression
    : expression "&&&" expression
    | expression ".." expression
    | DEFAULT
    | "_"
    ;

simpleKeysetExpression
    : expression
    | DEFAULT
    | DONTCARE
    | expression MASK expression
    | expression RANGE expression
    ;

valueSetDeclaration
  : optAnnotations
      VALUESET '<' baseType '>' '(' expression ')' name ';'
  | optAnnotations
      VALUESET '<' tupleType '>' '(' expression ')' name ';'
  | optAnnotations
      VALUESET '<' typeName '>' '(' expression ')' name ';'
  ;

/*************************** CONTROL ************************/

controlDeclaration
    : controlTypeDeclaration optConstructorParameters
      /* no type parameters allowed in controlTypeDeclaration */
      '{' controlLocalDeclarations APPLY controlBody '}' {tos_decrease_scope_depth();}
    ;

controlTypeDeclaration
    : optAnnotations CONTROL name {tos_increase_scope_depth();} optTypeParameters
      '(' parameterList ')' {$$ = $3;}
    ;

controlLocalDeclarations
    : /* empty */
    | controlLocalDeclarations controlLocalDeclaration
    ;

controlLocalDeclaration
    : constantDeclaration
    | actionDeclaration
    | tableDeclaration
    | instantiation
    | variableDeclaration
    ;

controlBody
    : blockStatement
    ;

/*************************** EXTERN *************************/

externDeclaration
    : optAnnotations EXTERN nonTypeName {Symbol* s = tos_get_element($3); s->type = TOS_TYPE_IDENTIFIER;} optTypeParameters '{' methodPrototypes '}'
    | optAnnotations EXTERN functionPrototype ';' {tos_decrease_scope_depth();}
    ;

methodPrototypes
    : /* empty */
    | methodPrototypes methodPrototype
    ;

functionPrototype
    : typeOrVoid name {tos_increase_scope_depth();} optTypeParameters '(' parameterList ')'
    ;

methodPrototype
    : optAnnotations functionPrototype ';' {tos_decrease_scope_depth();}
    | optAnnotations TYPE_IDENTIFIER '(' parameterList ')' ';'
    ;

/************************** TYPES ****************************/

typeRef
    : baseType
    | typeName
    | specializedType
    | headerStackType
    | tupleType
    ;

namedType
    : typeName
    | specializedType
    ;

prefixedType
    : TYPE_IDENTIFIER
    | dotPrefix TYPE_IDENTIFIER
    ;

typeName
    : prefixedType
    ;

tupleType
    : TUPLE '<' typeArgumentList '>'
    ;

headerStackType
    : typeName '[' expression ']'
    | specializedType '[' expression ']'
    ;

specializedType
    : prefixedType '<' typeArgumentList '>'
    ;

baseType
    : BOOL
    | ERROR
    | MATCH_KIND
    | STRING
    | INT
    | BIT
    | BIT '<' INTEGER '>'
    | INT '<' INTEGER '>'
    | VARBIT '<' INTEGER '>'
    | BIT '<' '(' expression ')' '>'
    | INT '<' '(' expression ')' '>'
    | VARBIT '<' '(' expression ')' '>'
    ;

typeOrVoid
    : typeRef
    | VOID
    | IDENTIFIER     // may be a type variable
    ;

optTypeParameters
    : /* empty */
    | typeParameters
    ;

typeParameters
    : '<' typeParameterList '>'
    ;

typeParameterList
    : name {Symbol* s = tos_get_element($1); s->type = TOS_TYPE_IDENTIFIER;}
    | typeParameterList COMMA name {Symbol* s = tos_get_element($3); s->type = TOS_TYPE_IDENTIFIER;}
    ;

realTypeArg
    : DONTCARE
    | typeRef
    | VOID
    ;

typeArg
    : DONTCARE
    | typeRef
    | nonTypeName
    | VOID
    ;

realTypeArgumentList
    : realTypeArg
    | realTypeArgumentList COMMA typeArg
    ;

typeArgumentList
    : /* empty */
    | typeArg
    | typeArgumentList COMMA typeArg
    ;

typeDeclaration
    : derivedTypeDeclaration {$$ = $1;}
    | typedefDeclaration {$$ = $1;}
    | parserTypeDeclaration ';' {tos_decrease_scope_depth(); $$ = $1;}
    | controlTypeDeclaration ';' {tos_decrease_scope_depth(); $$ = $1;}
    | packageTypeDeclaration ';' {$$ = $1;}
    ;

derivedTypeDeclaration
    : headerTypeDeclaration {$$ = $1;}
    | headerUnionDeclaration {$$ = $1;}
    | structTypeDeclaration {$$ = $1;}
    | enumDeclaration {$$ = $1;}
    ;

headerTypeDeclaration
    : optAnnotations HEADER name optTypeParameters '{' structFieldList '}' {$$ = $3;}
    ;

headerUnionDeclaration
    : optAnnotations HEADER_UNION name optTypeParameters '{' structFieldList '}' {$$ = $3;}
    ;

structTypeDeclaration
    : optAnnotations STRUCT name optTypeParameters '{' structFieldList '}' {$$ = $3;}
    ;

structFieldList
    : /* empty */
    | structFieldList structField
    ;

structField
    : optAnnotations typeRef name ';'
    ;

enumDeclaration
    : optAnnotations ENUM name '{' identifierList '}' {$$ = $3;}
    | optAnnotations ENUM typeRef name '{' specifiedIdentifierList '}' {$$ = $4;}
    ;

errorDeclaration
    : ERROR '{' identifierList '}'
    ;

matchKindDeclaration
    : MATCH_KIND '{' identifierList '}'
    ;

identifierList
    : name
    | identifierList COMMA name
    ;

specifiedIdentifierList
    : specifiedIdentifier
    | specifiedIdentifierList COMMA specifiedIdentifier
    ;

specifiedIdentifier
    : name '=' initializer
    ;

typedefDeclaration
    : optAnnotations TYPEDEF typeRef name ';' {$$ = $4;}
    | optAnnotations TYPEDEF derivedTypeDeclaration name ';' {$$ = $4;}
    | optAnnotations TYPE typeRef name ';' {$$ = $4;}
    | optAnnotations TYPE derivedTypeDeclaration name ';' {$$ = $4;}
    ;

/*************************** STATEMENTS *************************/

assignmentOrMethodCallStatement
    : lvalue '(' argumentList ')' ';'
    | lvalue '<' typeArgumentList '>' '(' argumentList ')' ';'
    | lvalue '='  expression ';'
    ;

emptyStatement
    : ';'
    ;

returnStatement
    : RETURN ';'
    | RETURN expression ';'
    ;

exitStatement
    : EXIT ';'
    ;

conditionalStatement
    : IF '(' expression ')' statement
    | IF '(' expression ')' statement ELSE statement
    ;

// To support direct invocation of a control or parser without instantiation
directApplication
    : typeName '.' APPLY '(' argumentList ')' ';'
    | specializedType '.' APPLY '(' argumentList ')' ';'
    ;

statement
    : assignmentOrMethodCallStatement
    | directApplication
    | conditionalStatement
    | emptyStatement
    | blockStatement
    | exitStatement
    | returnStatement
    | switchStatement
    ;

blockStatement
    : optAnnotations '{' statOrDeclList '}'
    ;

statOrDeclList
    : /* empty */
    | statOrDeclList statementOrDeclaration
    ;

switchStatement
    : SWITCH '(' expression ')' '{' switchCases '}'
    ;

switchCases
    : /* empty */
    | switchCases switchCase
    ;

switchCase
    : switchLabel ':' blockStatement
    | switchLabel ':'
    ;

switchLabel
    : DEFAULT
    | nonBraceExpression
    ;

statementOrDeclaration
    : variableDeclaration
    | constantDeclaration
    | statement
    ;

/************ TABLES *************/
tableDeclaration
    : optAnnotations TABLE name '{' tablePropertyList '}'
    ;

tablePropertyList
    : tableProperty
    | tablePropertyList tableProperty
    ;

tableProperty
    : KEY '=' '{' keyElementList '}'
    | ACTIONS '=' '{' actionList '}'
    | optAnnotations CONST ENTRIES '=' '{' entriesList '}' /* immutable entries */
    | optAnnotations CONST nonTableKwName '=' initializer ';'
    | optAnnotations nonTableKwName '=' initializer ';'
    ;

keyElementList
    : /* empty */
    | keyElementList keyElement
    ;

keyElement
    : expression ':' name optAnnotations ';'
    ;

actionList
    : /* empty */
    | actionList optAnnotations actionRef ';'
    ;

actionRef
    : prefixedNonTypeName
    | prefixedNonTypeName '(' argumentList ')'
    ;

entriesList
    : /* empty */
    | entriesList entry
    ;

entry
    : keysetExpression ':' actionRef optAnnotations ';'
    ;

/************************* ACTION ********************************/

actionDeclaration
    : optAnnotations ACTION name '(' parameterList ')' blockStatement
    ;

/************************* VARIABLES *****************************/

variableDeclaration
    : annotations typeRef name optInitializer ';'
    | typeRef name optInitializer ';'
    ;

constantDeclaration
    : optAnnotations CONST typeRef name '=' initializer ';'
    ;

optInitializer
    : /* empty */
    | '=' initializer
    ;

initializer
    : expression
    ;

/************************* Expressions ****************************/

functionDeclaration
    : functionPrototype blockStatement {tos_decrease_scope_depth();}
    ;

argumentList
    : /* empty */
    | nonEmptyArgList
    ;

nonEmptyArgList
    : argument
    | nonEmptyArgList COMMA argument
    ;

argument
    : expression
    | name '=' expression
    | DONTCARE
    | name '=' DONTCARE
    ;

kvList
    : kvPair
    | kvList COMMA kvPair
    ;

kvPair
    : name '=' expression
    ;

expressionList
    : /* empty */
    | expression
    | expressionList COMMA expression
    ;


annotationBody
    : /* empty */
    | annotationBody '(' annotationBody ')'
    | annotationBody annotationToken
    ;

structuredAnnotationBody
    : expressionList
    | kvList
    ;

annotationToken
    : ABSTRACT
    | ACTION
    | ACTIONS
    | APPLY
    | BOOL
    | BIT
    | CONST
    | CONTROL
    | DEFAULT
    | DONTCARE
    | ELSE
    | ENTRIES
    | ENUM
    | ERROR
    | EXIT
    | EXTERN
    | FALSE
    | HEADER
    | HEADER_UNION
    | IF
    | IN
    | INOUT
    | INT
    | KEY
    | MASK
    | MATCH_KIND
    | TYPE
    | OUT
    | PARSER
    | PACKAGE
    | PRAGMA
    | RANGE
    | RETURN
    | SELECT
    | STATE
    | STRING
    | STRUCT
    | SWITCH
    | TABLE
    | TRANSITION
    | TRUE
    | TUPLE
    | TYPEDEF
    | VARBIT
    | VALUESET
    | VOID
    | IDENTIFIER
    | TYPE_IDENTIFIER
    | STRING_LITERAL
    | INTEGER
    | LEFT_SHIFT
    | AND
    | OR
    | EQUAL
    | DIFFERENT
    | MORE_EQUAL
    | LESS_EQUAL
    | INCREMENT
    | '+'
    | PIPE_PLUS_PIPE
    | '-'
    | PIPE_LESS_PIPE
    | '*'
    | '/'
    | '%'
    | '|'
    | '&'
    | '^'
    | '~'
    | '['
    | ']'
    | '{'
    | '}'
    | '<'
    | '>'
    | '!'
    | ':'
    | COMMA
    | '?'
    | '.'
    | '='
    | ';'
    | '@'
    | UNKNOWN_TOKEN
    ;

member
    : name
    ;

prefixedNonTypeName
    : nonTypeName
    | dotPrefix nonTypeName
    ;

lvalue
    : prefixedNonTypeName
    | THIS
    | lvalue '.' member
    | lvalue '[' expression ']'
    | lvalue '[' expression ':' expression ']'
    ;



// Additional precedences need to be specified

expression
    : INTEGER
    | TRUE
    | FALSE
    | THIS
    | STRING_LITERAL
    | nonTypeName
    | dotPrefix nonTypeName
    | expression '[' expression ']'
    | expression '[' expression ':' expression ']'
    | '{' expressionList '}'
    | '{' kvList '}'
    | '(' expression ')'
    | '!' expression %prec PREFIX
    | '~' expression %prec PREFIX
    | '-' expression %prec PREFIX
    | '+' expression %prec PREFIX
    | typeName '.' member
    | ERROR '.' member
    | expression '.' member
    | expression '*' expression
    | expression '/' expression
    | expression '%' expression
    | expression '+' expression
    | expression '-' expression
    | expression PIPE_PLUS_PIPE expression
    | expression PIPE_LESS_PIPE expression
    | expression LEFT_SHIFT expression
    | expression RIGHT_SHIFT expression
    | expression LESS_EQUAL expression
    | expression MORE_EQUAL expression
    | expression '<' expression
    | expression '>' expression
    | expression DIFFERENT expression
    | expression EQUAL expression
    | expression '&' expression
    | expression '^' expression
    | expression '|' expression
    | expression INCREMENT expression
    | expression AND expression
    | expression OR expression
    | expression '?' expression ':' expression
    | expression '<' realTypeArgumentList '>' '(' argumentList ')'
    | expression '(' argumentList ')'
    | namedType '(' argumentList ')'
    | '(' typeRef ')' expression
    ;

nonBraceExpression
    : INTEGER
    | STRING_LITERAL
    | TRUE
    | FALSE
    | THIS
    | nonTypeName
    | dotPrefix nonTypeName
    | nonBraceExpression '[' expression ']'
    | nonBraceExpression '[' expression ':' expression ']'
    | '(' expression ')'
    | '!' expression %prec PREFIX
    | '~' expression %prec PREFIX
    | '-' expression %prec PREFIX
    | '+' expression %prec PREFIX
    | typeName '.' member
    | ERROR '.' member
    | nonBraceExpression '.' member
    | nonBraceExpression '*' expression
    | nonBraceExpression '/' expression
    | nonBraceExpression '%' expression
    | nonBraceExpression '+' expression
    | nonBraceExpression '-' expression
    | nonBraceExpression PIPE_PLUS_PIPE expression
    | nonBraceExpression PIPE_LESS_PIPE expression
    | nonBraceExpression LEFT_SHIFT expression
    | nonBraceExpression RIGHT_SHIFT expression
    | nonBraceExpression LESS_EQUAL expression
    | nonBraceExpression MORE_EQUAL expression
    | nonBraceExpression '<' expression
    | nonBraceExpression '>' expression
    | nonBraceExpression DIFFERENT expression
    | nonBraceExpression EQUAL expression
    | nonBraceExpression '&' expression
    | nonBraceExpression '^' expression
    | nonBraceExpression '|' expression
    | nonBraceExpression INCREMENT expression
    | nonBraceExpression AND expression
    | nonBraceExpression OR expression
    | nonBraceExpression '?' expression ':' expression
    | nonBraceExpression '<' realTypeArgumentList '>' '(' argumentList ')'
    | nonBraceExpression '(' argumentList ')'
    | namedType '(' argumentList ')'
    | '(' typeRef ')' expression
    ;

%%

void yyerror(const char* error)
{
    fprintf(stderr, "%s", error);
}
