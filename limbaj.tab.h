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

#ifndef YY_YY_LIMBAJ_TAB_H_INCLUDED
# define YY_YY_LIMBAJ_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "limbaj.y"

  #include <string>
  #include <vector>
  using namespace std;
  #include "symbol_table.hpp"

#line 56 "limbaj.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BPROGRAM = 258,                /* BPROGRAM  */
    EPROGRAM = 259,                /* EPROGRAM  */
    BMAIN = 260,                   /* BMAIN  */
    EMAIN = 261,                   /* EMAIN  */
    ASSIGN = 262,                  /* ASSIGN  */
    BIF = 263,                     /* BIF  */
    THEN = 264,                    /* THEN  */
    ELSE = 265,                    /* ELSE  */
    EIF = 266,                     /* EIF  */
    BWHILE = 267,                  /* BWHILE  */
    DO = 268,                      /* DO  */
    EWHILE = 269,                  /* EWHILE  */
    BFOR = 270,                    /* BFOR  */
    FROM = 271,                    /* FROM  */
    TO = 272,                      /* TO  */
    EFOR = 273,                    /* EFOR  */
    INITIALIZE = 274,              /* INITIALIZE  */
    TRUE = 275,                    /* TRUE  */
    FALSE = 276,                   /* FALSE  */
    AND = 277,                     /* AND  */
    OR = 278,                      /* OR  */
    NOT = 279,                     /* NOT  */
    EQ = 280,                      /* EQ  */
    NEQ = 281,                     /* NEQ  */
    LE = 282,                      /* LE  */
    GE = 283,                      /* GE  */
    LT = 284,                      /* LT  */
    GT = 285,                      /* GT  */
    PLUS = 286,                    /* PLUS  */
    MINUS = 287,                   /* MINUS  */
    MUL = 288,                     /* MUL  */
    DIV = 289,                     /* DIV  */
    BCLASS = 290,                  /* BCLASS  */
    ECLASS = 291,                  /* ECLASS  */
    PRIVATE = 292,                 /* PRIVATE  */
    PUBLIC = 293,                  /* PUBLIC  */
    PROTECTED = 294,               /* PROTECTED  */
    NEW = 295,                     /* NEW  */
    RETURN = 296,                  /* RETURN  */
    DOT = 297,                     /* DOT  */
    COMMA = 298,                   /* COMMA  */
    LEFTP = 299,                   /* LEFTP  */
    RIGHTP = 300,                  /* RIGHTP  */
    LEFTB = 301,                   /* LEFTB  */
    RIGHTB = 302,                  /* RIGHTB  */
    PRINT = 303,                   /* PRINT  */
    ID = 304,                      /* ID  */
    TYPE = 305,                    /* TYPE  */
    STRING_S = 306,                /* STRING_S  */
    INT_NR = 307,                  /* INT_NR  */
    FLOAT_NR = 308,                /* FLOAT_NR  */
    UMINUS = 309                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "limbaj.y"

     string* Str;
     int Int;
     float Float;
     vector<Parameter>* Params;

#line 134 "limbaj.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LIMBAJ_TAB_H_INCLUDED  */
