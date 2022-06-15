/* A Bison parser, made by GNU Bison 3.8.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    IntConst = 258,                /* IntConst  */
    ID = 259,                      /* ID  */
    RELOP = 260,                   /* RELOP  */
    INT = 261,                     /* INT  */
    FLOAT = 262,                   /* FLOAT  */
    VOID = 263,                    /* VOID  */
    FloatConst = 264,              /* FloatConst  */
    CONST = 265,                   /* CONST  */
    RETURN = 266,                  /* RETURN  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    FOR = 269,                     /* FOR  */
    WHILE = 270,                   /* WHILE  */
    BREAK = 271,                   /* BREAK  */
    CONTINUE = 272,                /* CONTINUE  */
    LP = 273,                      /* LP  */
    RP = 274,                      /* RP  */
    LB = 275,                      /* LB  */
    RB = 276,                      /* RB  */
    LC = 277,                      /* LC  */
    RC = 278,                      /* RC  */
    COMMA = 279,                   /* COMMA  */
    SEMI = 280,                    /* SEMI  */
    ASSIGN = 281,                  /* ASSIGN  */
    ADD = 282,                     /* ADD  */
    MINUS = 283,                   /* MINUS  */
    MUL = 284,                     /* MUL  */
    DIV = 285,                     /* DIV  */
    MOD = 286,                     /* MOD  */
    AND = 287,                     /* AND  */
    OR = 288,                      /* OR  */
    NOT = 289,                     /* NOT  */
    SELF_ADD = 290,                /* SELF_ADD  */
    SELF_MINUS = 291,              /* SELF_MINUS  */
    UMINUS = 292,                  /* UMINUS  */
    LOWER_THEN_ELSE = 293          /* LOWER_THEN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "mysysy.y"

	int    type_int;
	float  type_float;
	char   type_id[32];
	struct node *ptr;

#line 109 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
