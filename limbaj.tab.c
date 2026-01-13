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
<<<<<<< HEAD
#line 6 "limbaj.y"

#include <iostream>
#include <cstdlib>
=======
#line 8 "limbaj.y"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "symbol_table.hpp"
>>>>>>> 6b12b73 (Modificari carina)
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
int errorCount = 0;

<<<<<<< HEAD
#line 82 "limbaj.tab.c"
=======
SymbolTable* globalScope=nullptr;
SymbolTable* currentScope=nullptr;

#line 87 "limbaj.tab.c"
>>>>>>> 6b12b73 (Modificari carina)

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

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
<<<<<<< HEAD
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_CLASS = 9,                      /* CLASS  */
  YYSYMBOL_PRIVATE = 10,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 11,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 12,                 /* PROTECTED  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_DOT = 17,                       /* DOT  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_LEFTP = 19,                     /* LEFTP  */
  YYSYMBOL_RIGHTP = 20,                    /* RIGHTP  */
  YYSYMBOL_LEFTB = 21,                     /* LEFTB  */
  YYSYMBOL_RIGHTB = 22,                    /* RIGHTB  */
  YYSYMBOL_PRINT = 23,                     /* PRINT  */
  YYSYMBOL_TRUE = 24,                      /* TRUE  */
  YYSYMBOL_FALSE = 25,                     /* FALSE  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_NEQ = 30,                       /* NEQ  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_LT = 33,                        /* LT  */
  YYSYMBOL_GT = 34,                        /* GT  */
  YYSYMBOL_ID = 35,                        /* ID  */
  YYSYMBOL_TYPE = 36,                      /* TYPE  */
  YYSYMBOL_STRING_S = 37,                  /* STRING_S  */
  YYSYMBOL_INT_NR = 38,                    /* INT_NR  */
  YYSYMBOL_FLOAT_NR = 39,                  /* FLOAT_NR  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_global_declarations = 44,       /* global_declarations  */
  YYSYMBOL_decl = 45,                      /* decl  */
  YYSYMBOL_list_param = 46,                /* list_param  */
  YYSYMBOL_param = 47,                     /* param  */
  YYSYMBOL_class_body = 48,                /* class_body  */
  YYSYMBOL_class_member = 49,              /* class_member  */
  YYSYMBOL_acces_specifier = 50,           /* acces_specifier  */
  YYSYMBOL_main_block = 51,                /* main_block  */
  YYSYMBOL_list = 52,                      /* list  */
  YYSYMBOL_statement = 53,                 /* statement  */
  YYSYMBOL_assign = 54,                    /* assign  */
  YYSYMBOL_function_call = 55,             /* function_call  */
  YYSYMBOL_call_parametres = 56,           /* call_parametres  */
  YYSYMBOL_if_statement = 57,              /* if_statement  */
  YYSYMBOL_while_statement = 58,           /* while_statement  */
  YYSYMBOL_print_statement = 59,           /* print_statement  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_bool_expression = 61            /* bool_expression  */
=======
  YYSYMBOL_BPROGRAM = 3,                   /* BPROGRAM  */
  YYSYMBOL_EPROGRAM = 4,                   /* EPROGRAM  */
  YYSYMBOL_BMAIN = 5,                      /* BMAIN  */
  YYSYMBOL_EMAIN = 6,                      /* EMAIN  */
  YYSYMBOL_ASSIGN = 7,                     /* ASSIGN  */
  YYSYMBOL_BIF = 8,                        /* BIF  */
  YYSYMBOL_THEN = 9,                       /* THEN  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_EIF = 11,                       /* EIF  */
  YYSYMBOL_BWHILE = 12,                    /* BWHILE  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_EWHILE = 14,                    /* EWHILE  */
  YYSYMBOL_BFOR = 15,                      /* BFOR  */
  YYSYMBOL_FROM = 16,                      /* FROM  */
  YYSYMBOL_TO = 17,                        /* TO  */
  YYSYMBOL_EFOR = 18,                      /* EFOR  */
  YYSYMBOL_INITIALIZE = 19,                /* INITIALIZE  */
  YYSYMBOL_TRUE = 20,                      /* TRUE  */
  YYSYMBOL_FALSE = 21,                     /* FALSE  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_NOT = 24,                       /* NOT  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_NEQ = 26,                       /* NEQ  */
  YYSYMBOL_LE = 27,                        /* LE  */
  YYSYMBOL_GE = 28,                        /* GE  */
  YYSYMBOL_LT = 29,                        /* LT  */
  YYSYMBOL_GT = 30,                        /* GT  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_MUL = 33,                       /* MUL  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_BCLASS = 35,                    /* BCLASS  */
  YYSYMBOL_ECLASS = 36,                    /* ECLASS  */
  YYSYMBOL_PRIVATE = 37,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 38,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 39,                 /* PROTECTED  */
  YYSYMBOL_NEW = 40,                       /* NEW  */
  YYSYMBOL_RETURN = 41,                    /* RETURN  */
  YYSYMBOL_DOT = 42,                       /* DOT  */
  YYSYMBOL_COMMA = 43,                     /* COMMA  */
  YYSYMBOL_LEFTP = 44,                     /* LEFTP  */
  YYSYMBOL_RIGHTP = 45,                    /* RIGHTP  */
  YYSYMBOL_LEFTB = 46,                     /* LEFTB  */
  YYSYMBOL_RIGHTB = 47,                    /* RIGHTB  */
  YYSYMBOL_PRINT = 48,                     /* PRINT  */
  YYSYMBOL_ID = 49,                        /* ID  */
  YYSYMBOL_TYPE = 50,                      /* TYPE  */
  YYSYMBOL_STRING_S = 51,                  /* STRING_S  */
  YYSYMBOL_INT_NR = 52,                    /* INT_NR  */
  YYSYMBOL_FLOAT_NR = 53,                  /* FLOAT_NR  */
  YYSYMBOL_UMINUS = 54,                    /* UMINUS  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_global_declarations = 58,       /* global_declarations  */
  YYSYMBOL_decl = 59,                      /* decl  */
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_61_2 = 61,                      /* $@2  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_list_param = 63,                /* list_param  */
  YYSYMBOL_class_body = 64,                /* class_body  */
  YYSYMBOL_class_member = 65,              /* class_member  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_acces_specifier = 68,           /* acces_specifier  */
  YYSYMBOL_main_block = 69,                /* main_block  */
  YYSYMBOL_list = 70,                      /* list  */
  YYSYMBOL_statement = 71,                 /* statement  */
  YYSYMBOL_assign = 72,                    /* assign  */
  YYSYMBOL_declaration = 73,               /* declaration  */
  YYSYMBOL_function_call = 74,             /* function_call  */
  YYSYMBOL_if_statement = 75,              /* if_statement  */
  YYSYMBOL_for_statement = 76,             /* for_statement  */
  YYSYMBOL_print_statement = 77,           /* print_statement  */
  YYSYMBOL_return_statement = 78,          /* return_statement  */
  YYSYMBOL_call_parametres = 79,           /* call_parametres  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_while_statement = 81,           /* while_statement  */
  YYSYMBOL_bool_expression = 82            /* bool_expression  */
>>>>>>> 6b12b73 (Modificari carina)
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295
=======
#define YYLAST   494

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309
>>>>>>> 6b12b73 (Modificari carina)


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
=======
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
>>>>>>> 6b12b73 (Modificari carina)
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
<<<<<<< HEAD
      35,    36,    37,    38,    39,    40
=======
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
>>>>>>> 6b12b73 (Modificari carina)
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
<<<<<<< HEAD
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    52,    56,    61,    67,    68,
      71,    78,    78,    80,    85,    90,    95,   102,   103,   104,
     107,   111,   112,   115,   116,   117,   118,   119,   122,   128,
     132,   138,   139,   142,   143,   146,   149,   151,   152,   153,
     154,   155,   156,   157,   162,   163,   164,   165,   166,   167,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179
=======
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    71,    72,    75,    86,   100,   117,   116,
     136,   135,   164,   163,   181,   196,   204,   216,   216,   218,
     225,   244,   251,   258,   257,   271,   270,   290,   298,   299,
     300,   303,   307,   308,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   322,   337,   365,   373,   401,   439,   440,
     443,   449,   450,   453,   460,   469,   474,   481,   482,   483,
     484,   485,   486,   497,   522,   526,   527,   538,   549,   550,
     560,   570,   571,   581,   591,   594,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606
>>>>>>> 6b12b73 (Modificari carina)
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
<<<<<<< HEAD
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "IF", "ELSE", "WHILE", "CLASS", "PRIVATE", "PUBLIC",
  "PROTECTED", "PLUS", "MINUS", "MUL", "DIV", "DOT", "COMMA", "LEFTP",
  "RIGHTP", "LEFTB", "RIGHTB", "PRINT", "TRUE", "FALSE", "AND", "OR",
  "NOT", "EQ", "NEQ", "LE", "GE", "LT", "GT", "ID", "TYPE", "STRING_S",
  "INT_NR", "FLOAT_NR", "UMINUS", "';'", "$accept", "program",
  "global_declarations", "decl", "list_param", "param", "class_body",
  "class_member", "acces_specifier", "main_block", "list", "statement",
  "assign", "function_call", "call_parametres", "if_statement",
  "while_statement", "print_statement", "expression", "bool_expression", YY_NULLPTR
=======
  "\"end of file\"", "error", "\"invalid token\"", "BPROGRAM", "EPROGRAM",
  "BMAIN", "EMAIN", "ASSIGN", "BIF", "THEN", "ELSE", "EIF", "BWHILE", "DO",
  "EWHILE", "BFOR", "FROM", "TO", "EFOR", "INITIALIZE", "TRUE", "FALSE",
  "AND", "OR", "NOT", "EQ", "NEQ", "LE", "GE", "LT", "GT", "PLUS", "MINUS",
  "MUL", "DIV", "BCLASS", "ECLASS", "PRIVATE", "PUBLIC", "PROTECTED",
  "NEW", "RETURN", "DOT", "COMMA", "LEFTP", "RIGHTP", "LEFTB", "RIGHTB",
  "PRINT", "ID", "TYPE", "STRING_S", "INT_NR", "FLOAT_NR", "UMINUS", "';'",
  "$accept", "program", "global_declarations", "decl", "$@1", "$@2", "$@3",
  "list_param", "class_body", "class_member", "$@4", "$@5",
  "acces_specifier", "main_block", "list", "statement", "assign",
  "declaration", "function_call", "if_statement", "for_statement",
  "print_statement", "return_statement", "call_parametres", "expression",
  "while_statement", "bool_expression", YY_NULLPTR
>>>>>>> 6b12b73 (Modificari carina)
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

<<<<<<< HEAD
#define YYPACT_NINF (-66)
=======
#define YYPACT_NINF (-142)
>>>>>>> 6b12b73 (Modificari carina)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
      -1,   -22,   -14,    30,     2,   -66,     4,    -2,   -66,    57,
     -66,   -66,    21,    31,   -66,    15,    70,    71,    91,     6,
      37,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     5,
      59,   -66,    61,    74,     0,   -66,    63,    63,    80,    80,
      89,    80,   -66,    62,   -66,    25,    84,   -66,    99,   -66,
      31,    94,    80,    63,   -66,   -66,    63,   125,   -66,   -66,
     -66,   115,    48,   106,    80,   137,    98,   124,   146,    98,
     -66,    31,   -66,   -66,    45,   -66,   -66,   -66,   107,   136,
     -66,   119,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,   134,    63,    63,   151,   145,   -66,    80,    80,
     -66,   149,    31,   -66,   -66,   -66,   -66,    68,    68,   -66,
     -66,    98,    98,    98,    98,    98,    98,    57,   -66,   148,
      57,   150,    98,   135,   153,     1,    20,   -66,   -66,   138,
     168,   -66,   -66,   156,    57,    50,   -66
=======
      53,    30,    14,   -48,    32,    36,     1,  -142,  -142,  -142,
       5,   -39,   305,  -142,    59,    67,  -142,   -37,  -142,   338,
     338,    50,    56,   312,    72,    10,  -142,   155,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   127,    42,
      70,    39,  -142,  -142,   338,   348,    81,   338,    94,  -142,
    -142,  -142,  -142,   437,    35,    78,   119,    98,   348,   348,
    -142,    -2,   338,   348,   108,   348,  -142,  -142,  -142,  -142,
    -142,   123,    57,  -142,   118,  -142,  -142,  -142,   129,    63,
     460,  -142,  -142,  -142,   380,   -11,   124,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   305,
     338,   338,   305,   348,  -142,   168,   416,  -142,   401,    -4,
     100,     3,    96,   450,    -7,   149,  -142,   143,   305,   158,
    -142,  -142,  -142,  -142,   164,   168,   235,   168,   168,   168,
     168,   168,   168,   115,   115,  -142,  -142,   102,   200,  -142,
     190,   174,   420,   161,   163,  -142,   348,   348,   348,  -142,
     169,  -142,  -142,    11,   179,  -142,   305,   305,   166,  -142,
     348,  -142,  -142,   316,   111,   450,   117,   -17,  -142,  -142,
     198,   223,  -142,   362,  -142,  -142,   170,    65,   152,  -142,
     175,   305,  -142,  -142,  -142,    69,  -142,   241,   305,  -142,
    -142,   177,   262,   305,  -142,  -142,   280,  -142
>>>>>>> 6b12b73 (Modificari carina)
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
<<<<<<< HEAD
       0,     0,     0,     0,     0,     3,     0,     0,     1,     0,
       4,     2,     0,     0,     5,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    17,    18,    19,     0,
       0,    12,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,    20,     0,    21,     0,     0,    11,     0,    10,
       0,     0,     0,     0,    40,    41,     0,    42,    39,    37,
      38,     0,     0,     0,     0,     0,    28,     0,     0,    31,
      22,     0,    13,     7,     0,     9,     6,    46,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
      29,     0,     0,    15,    49,    59,    43,    44,    45,    47,
      48,    50,    51,    53,    55,    52,    54,     0,    56,    57,
       0,     0,    32,     0,     0,     0,     0,    30,    14,     0,
      33,    35,    16,     0,     0,     0,    34
=======
       0,     0,     0,     0,     0,     0,     0,     3,     1,    12,
       0,     0,     0,     4,     0,     0,    14,     0,     5,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    32,    34,
      35,    37,    38,    40,    41,    42,    39,     2,     0,     0,
       0,     0,    60,    61,     0,     0,     0,     0,    62,    59,
      57,    58,    65,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,     0,     0,    31,    33,    28,    29,
      30,     0,     0,    18,     0,     8,     6,    15,     0,     0,
      74,    84,    68,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    74,     0,    53,     0,     0,
       0,     0,     0,    55,     0,     0,    17,     0,     0,     0,
      10,     7,    71,    85,    63,    72,    73,    76,    77,    79,
      81,    78,    80,    66,    67,    69,    70,     0,    32,    82,
      83,     0,     0,     0,     0,    43,     0,     0,     0,    46,
       0,    19,    13,     0,     0,    16,     0,     0,     0,    75,
       0,    51,    52,     0,     0,    56,     0,     0,    21,     9,
       0,     0,    48,     0,    44,    47,     0,     0,     0,    11,
       0,     0,    20,    23,    27,     0,    49,     0,     0,    25,
      22,     0,     0,     0,    50,    24,     0,    26
>>>>>>> 6b12b73 (Modificari carina)
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
     -66,   -66,   -66,   174,   -65,   130,   -66,   152,   -66,   -66,
     -41,   -19,   -66,   -66,    83,   -66,   -66,   -66,   -37,   -34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    34,    35,    30,    31,    32,    11,
      19,    20,    21,    22,    68,    23,    24,    25,    61,    62
=======
    -142,  -142,  -142,    34,  -142,  -142,  -142,  -141,  -142,   165,
    -142,  -142,  -142,  -142,   -95,   -10,  -142,  -142,   -12,  -142,
    -142,  -142,  -142,    89,   -20,  -142,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,    26,   118,   156,    15,    41,    72,    73,
     188,   193,    74,    14,    27,    67,    29,    30,    52,    32,
      33,    34,    35,   112,    53,    36,    54
>>>>>>> 6b12b73 (Modificari carina)
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
<<<<<<< HEAD
      43,    65,    66,    63,    69,     9,   101,    15,     1,    16,
      42,     1,    15,     6,    16,    77,    78,    13,    50,    79,
      51,     7,    80,   130,    17,    12,    15,    96,    16,    17,
       8,    26,    27,    28,    36,     2,    18,   124,     2,    14,
      45,    18,   131,    17,    71,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    18,    15,    29,    16,   118,
     119,    69,   122,    15,   102,    16,    72,    33,    92,    26,
      27,    28,   136,    17,    93,    94,   125,    52,    44,   126,
      17,    46,    53,    84,    85,    18,   103,    54,    55,    37,
      38,    56,    18,   135,    52,    29,    39,    48,    57,    64,
      58,    59,    60,    70,    54,    55,    43,    43,    40,    49,
      41,    82,    83,    84,    85,    57,    43,    58,    59,    60,
      82,    83,    84,    85,    67,    73,    95,   104,    82,    83,
      84,    85,    93,    94,    74,    76,    86,    87,    88,    89,
      90,    91,    81,    98,    86,    87,    88,    89,    90,    91,
      82,    83,    84,    85,   106,   117,   105,    97,    82,    83,
      84,    85,    93,    94,    99,   104,   100,    50,    99,   123,
     127,    50,   120,   129,    93,   133,   128,   134,    10,   132,
      75,   121,    47
};

static const yytype_uint8 yycheck[] =
{
      19,    38,    39,    37,    41,     3,    71,     6,     9,     8,
       4,     9,     6,    35,     8,    52,    53,    19,    18,    53,
      20,    35,    56,    22,    23,    21,     6,    64,     8,    23,
       0,    10,    11,    12,    19,    36,    35,   102,    36,    41,
      35,    35,    22,    23,    19,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    35,     6,    36,     8,    93,
      94,    98,    99,     6,    19,     8,    41,    36,    20,    10,
      11,    12,    22,    23,    26,    27,   117,    14,    41,   120,
      23,    22,    19,    15,    16,    35,    41,    24,    25,    19,
      19,    28,    35,   134,    14,    36,     5,    36,    35,    19,
      37,    38,    39,    41,    24,    25,   125,   126,    17,    35,
      19,    13,    14,    15,    16,    35,   135,    37,    38,    39,
      13,    14,    15,    16,    35,    41,    20,    20,    13,    14,
      15,    16,    26,    27,    35,    41,    29,    30,    31,    32,
      33,    34,    17,    19,    29,    30,    31,    32,    33,    34,
      13,    14,    15,    16,    35,    21,    20,    20,    13,    14,
      15,    16,    26,    27,    18,    20,    20,    18,    18,    20,
      20,    18,    21,    20,    26,     7,    41,    21,     4,    41,
      50,    98,    30
=======
      31,     9,    28,    61,   137,    17,    12,   141,    39,   166,
     146,   100,   101,    40,     8,    31,    18,    63,   100,   101,
      87,    88,    55,   154,    80,    82,   178,    84,   177,    95,
      96,    97,    98,    40,   123,     7,     3,   150,   105,   106,
      13,   144,   108,   110,    99,   113,    81,   147,   151,    85,
       4,     5,    64,   107,    65,   167,     1,   100,   101,    10,
      16,   170,   171,    37,   109,     3,   168,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     4,
       5,    10,    78,   142,    79,    11,   187,    31,    75,   138,
      31,   102,    28,   192,    68,    69,    70,    76,   196,    56,
     100,   101,   139,   140,   115,    57,    31,    71,    28,   120,
      19,   183,   157,    38,    20,   189,    62,    21,   121,    77,
     184,    22,    87,    88,   190,    31,   163,   113,   165,    31,
      83,    95,    96,    97,    98,   103,    86,     3,    65,   148,
     173,   149,    31,    23,    31,    31,    28,    28,    97,    98,
      24,    25,     5,   104,   148,   145,   175,   111,    31,    31,
      78,    66,   176,    19,    68,    69,    70,    20,   117,    31,
      21,    28,   114,   124,    22,    31,    31,    71,    28,   119,
      31,    31,    19,    28,    31,   152,    20,    19,   159,    21,
       3,    20,   153,    22,    21,    78,    23,   185,    22,    95,
      96,    97,    98,    24,    25,     5,    19,   155,   147,     3,
      20,   158,   100,    21,     3,    23,   161,    22,   162,    40,
      23,   172,    24,    25,     5,   182,   169,    24,    25,     5,
     186,    19,   194,     3,   180,    20,   164,   116,    21,    23,
       0,     0,    22,     0,     0,   179,    24,    25,     5,    19,
       0,     0,     0,    20,     0,     0,    21,    87,     3,   191,
      22,     0,     0,     0,    23,     0,    95,    96,    97,    98,
      19,    24,    25,     5,    20,     0,     3,    21,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,    19,    24,
      25,     5,    20,     0,     0,    21,     0,     3,     0,    22,
       0,     0,     0,    23,     0,     0,     0,     0,     0,   195,
      24,    25,     5,    19,     0,     3,     0,    20,     0,     0,
      21,    23,     0,     0,    22,     0,     0,   197,    24,    25,
       5,     0,    42,    43,     0,     0,    58,     0,    87,    88,
       3,     0,     0,     0,    45,     0,    23,    95,    96,    97,
      98,     0,    46,    24,    25,     5,    59,     0,    42,    43,
       0,    48,    44,    49,    50,    51,     0,    60,    42,    43,
      45,   174,    58,     0,     0,   181,     0,     0,    46,     0,
      45,     0,    47,     0,    87,    88,     0,    48,    46,    49,
      50,    51,    59,    95,    96,    97,    98,    48,     0,    49,
      50,    51,    87,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,   122,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,   160,    87,    88,
       0,     0,    87,    88,     0,     0,   143,    95,    96,    97,
      98,    95,    96,    97,    98,     0,     0,     0,     0,    87,
      88,   122,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    87,    88,     0,     0,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
      12,    49,    12,    23,    99,    44,     5,   102,    45,   150,
       7,    22,    23,    50,     0,    27,    55,     7,    22,    23,
      22,    23,    20,   118,    44,    45,   167,    47,    45,    31,
      32,    33,    34,    50,    45,     1,    35,    44,    58,    59,
       6,    45,    62,    63,     9,    65,    44,    44,    55,    47,
      49,    50,    42,    55,    44,    44,     3,    22,    23,    49,
      55,   156,   157,     4,    62,    35,    55,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    49,
      50,    49,    43,   103,    45,    49,   181,    99,    46,    99,
     102,    13,   102,   188,    37,    38,    39,    55,   193,    49,
      22,    23,   100,   101,    47,    49,   118,    50,   118,    46,
       8,    46,    10,    46,    12,    46,    44,    15,    55,    49,
      55,    19,    22,    23,    55,   137,   146,   147,   148,   141,
      49,    31,    32,    33,    34,    16,    42,    35,    44,    43,
     160,    45,   154,    41,   156,   157,   156,   157,    33,    34,
      48,    49,    50,    55,    43,    55,    45,    49,   170,   171,
      43,     6,    45,     8,    37,    38,    39,    12,    50,   181,
      15,   181,    49,    49,    19,   187,   188,    50,   188,    50,
     192,   193,     8,   193,   196,    36,    12,     8,    14,    15,
      35,    12,    49,    19,    15,    43,    41,    45,    19,    31,
      32,    33,    34,    48,    49,    50,     8,    49,    44,    35,
      12,    11,    22,    15,    35,    41,    55,    19,    55,    50,
      41,    55,    48,    49,    50,    55,    47,    48,    49,    50,
      55,     8,    55,    35,    11,    12,   147,    72,    15,    41,
      -1,    -1,    19,    -1,    -1,    47,    48,    49,    50,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    22,    35,    18,
      19,    -1,    -1,    -1,    41,    -1,    31,    32,    33,    34,
       8,    48,    49,    50,    12,    -1,    35,    15,    -1,    -1,
      -1,    19,    41,    -1,    -1,    -1,    -1,    -1,     8,    48,
      49,    50,    12,    -1,    -1,    15,    -1,    35,    -1,    19,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,     8,    -1,    35,    -1,    12,    -1,    -1,
      15,    41,    -1,    -1,    19,    -1,    -1,    47,    48,    49,
      50,    -1,    20,    21,    -1,    -1,    24,    -1,    22,    23,
      35,    -1,    -1,    -1,    32,    -1,    41,    31,    32,    33,
      34,    -1,    40,    48,    49,    50,    44,    -1,    20,    21,
      -1,    49,    24,    51,    52,    53,    -1,    55,    20,    21,
      32,    55,    24,    -1,    -1,    13,    -1,    -1,    40,    -1,
      32,    -1,    44,    -1,    22,    23,    -1,    49,    40,    51,
      52,    53,    44,    31,    32,    33,    34,    49,    -1,    51,
      52,    53,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    45,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    17,    22,    23,
      -1,    -1,    22,    23,    -1,    -1,    45,    31,    32,    33,
      34,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    22,
      23,    45,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34
>>>>>>> 6b12b73 (Modificari carina)
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
<<<<<<< HEAD
       0,     9,    36,    43,    44,    45,    35,    35,     0,     3,
      45,    51,    21,    19,    41,     6,     8,    23,    35,    52,
      53,    54,    55,    57,    58,    59,    10,    11,    12,    36,
      48,    49,    50,    36,    46,    47,    19,    19,    19,     5,
      17,    19,     4,    53,    41,    35,    22,    49,    36,    35,
      18,    20,    14,    19,    24,    25,    28,    35,    37,    38,
      39,    60,    61,    61,    19,    60,    60,    35,    56,    60,
      41,    19,    41,    41,    35,    47,    41,    60,    60,    61,
      61,    17,    13,    14,    15,    16,    29,    30,    31,    32,
      33,    34,    20,    26,    27,    20,    60,    20,    19,    18,
      20,    46,    19,    41,    20,    20,    35,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    21,    61,    61,
      21,    56,    60,    20,    46,    52,    52,    20,    41,    20,
      22,    22,    41,     7,    21,    52,    22
=======
       0,     3,    57,    35,    49,    50,    58,    59,     0,    49,
      49,    49,     5,    59,    69,    62,    55,    44,    55,     8,
      12,    15,    19,    41,    48,    49,    59,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    81,     4,    46,    45,
      50,    63,    20,    21,    24,    32,    40,    44,    49,    51,
      52,    53,    74,    80,    82,    82,    49,    49,    24,    44,
      55,    80,    44,     7,    42,    44,     6,    71,    37,    38,
      39,    50,    64,    65,    68,    46,    55,    49,    43,    45,
      80,    82,    80,    49,    80,    82,    42,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     9,
      22,    23,    13,    16,    55,    80,    80,    55,    80,    82,
      80,    49,    79,    80,    49,    47,    65,    50,    60,    50,
      46,    55,    45,    45,    49,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    70,    71,    82,
      82,    70,    80,    45,    45,    55,     7,    44,    43,    45,
      44,    55,    36,    49,    70,    49,    61,    10,    11,    14,
      17,    55,    55,    80,    79,    80,    63,    44,    55,    47,
      70,    70,    55,    80,    55,    45,    45,    45,    63,    47,
      11,    13,    55,    46,    55,    45,    55,    70,    66,    46,
      55,    18,    70,    67,    55,    47,    70,    47
>>>>>>> 6b12b73 (Modificari carina)
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
<<<<<<< HEAD
       0,    42,    43,    44,    44,    45,    45,    45,    46,    46,
      47,    48,    48,    49,    49,    49,    49,    50,    50,    50,
      51,    52,    52,    53,    53,    53,    53,    53,    54,    55,
      55,    56,    56,    57,    57,    58,    59,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61
=======
       0,    56,    57,    58,    58,    59,    59,    59,    60,    59,
      61,    59,    62,    59,    59,    63,    63,    64,    64,    65,
      65,    65,    65,    66,    65,    67,    65,    65,    68,    68,
      68,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    74,    74,    75,    75,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82
>>>>>>> 6b12b73 (Modificari carina)
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
<<<<<<< HEAD
       0,     2,     2,     1,     2,     3,     6,     6,     1,     3,
       2,     2,     1,     3,     6,     4,     7,     1,     1,     1,
       3,     2,     3,     1,     1,     1,     1,     1,     3,     4,
       6,     1,     3,     7,    11,     7,     4,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3
=======
       0,     2,     4,     1,     2,     3,     5,     6,     0,     8,
       0,     9,     0,     7,     3,     2,     4,     2,     1,     3,
       6,     4,     7,     0,     9,     0,    10,     6,     1,     1,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     3,     4,     6,     6,     8,
      10,     5,     5,     3,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     3,     3,     2,     3,
       3,     3,     3,     3,     2,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3
>>>>>>> 6b12b73 (Modificari carina)
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
<<<<<<< HEAD
  case 2: /* program: global_declarations main_block  */
#line 45 "limbaj.y"
                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1220 "limbaj.tab.c"
    break;

  case 5: /* decl: TYPE ID ';'  */
#line 52 "limbaj.y"
                          { 
                              delete (yyvsp[-2].Str);
                              delete (yyvsp[-1].Str);
                          }
#line 1229 "limbaj.tab.c"
    break;

  case 6: /* decl: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 57 "limbaj.y"
               {
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
               }
#line 1238 "limbaj.tab.c"
    break;

  case 7: /* decl: CLASS ID LEFTB class_body RIGHTB ';'  */
#line 62 "limbaj.y"
               {
                    delete (yyvsp[-4].Str);
               }
#line 1246 "limbaj.tab.c"
    break;

  case 10: /* param: TYPE ID  */
#line 72 "limbaj.y"
          {
               delete (yyvsp[-1].Str);
               delete (yyvsp[0].Str);
          }
#line 1255 "limbaj.tab.c"
    break;

  case 13: /* class_member: TYPE ID ';'  */
#line 81 "limbaj.y"
               {
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1264 "limbaj.tab.c"
    break;

  case 14: /* class_member: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 86 "limbaj.y"
               {
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
               }
#line 1273 "limbaj.tab.c"
    break;

  case 15: /* class_member: acces_specifier TYPE ID ';'  */
#line 91 "limbaj.y"
               {
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1282 "limbaj.tab.c"
    break;

  case 16: /* class_member: acces_specifier TYPE ID LEFTP list_param RIGHTP ';'  */
#line 96 "limbaj.y"
                 {
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                 }
#line 1291 "limbaj.tab.c"
    break;

  case 28: /* assign: ID ASSIGN expression  */
#line 123 "limbaj.y"
          {
               delete (yyvsp[-2].Str);
          }
#line 1299 "limbaj.tab.c"
    break;

  case 29: /* function_call: ID LEFTP call_parametres RIGHTP  */
#line 129 "limbaj.y"
               {
                    delete (yyvsp[-3].Str);
               }
#line 1307 "limbaj.tab.c"
    break;

  case 30: /* function_call: ID DOT ID LEFTP call_parametres RIGHTP  */
#line 133 "limbaj.y"
               {
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-3].Str);
               }
#line 1316 "limbaj.tab.c"
    break;

  case 39: /* expression: STRING_S  */
#line 153 "limbaj.y"
                     {delete (yyvsp[0].Str);}
#line 1322 "limbaj.tab.c"
    break;

  case 42: /* expression: ID  */
#line 156 "limbaj.y"
               {delete (yyvsp[0].Str);}
#line 1328 "limbaj.tab.c"
    break;

  case 43: /* expression: ID DOT ID  */
#line 158 "limbaj.y"
               {
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[0].Str);
               }
#line 1337 "limbaj.tab.c"
    break;


#line 1341 "limbaj.tab.c"
=======
  case 2: /* program: BPROGRAM global_declarations main_block EPROGRAM  */
#line 68 "limbaj.y"
                                                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1341 "limbaj.tab.c"
    break;

  case 3: /* global_declarations: decl  */
#line 71 "limbaj.y"
                            { currentScope=globalScope; }
#line 1347 "limbaj.tab.c"
    break;

  case 5: /* decl: TYPE ID ';'  */
#line 75 "limbaj.y"
                          {   if(currentScope->lookupLocal(*(yyvsp[-1].Str)) != nullptr){
                                   cout<<"Eroare de semantica: variabila '"<<*(yyvsp[-1].Str)<<"' este deja declarata la linia "<<yylineno<<endl;
                                   errorCount++;
                              }
                              else
                              {
                                   currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                              }
                              delete (yyvsp[-2].Str);
                              delete (yyvsp[-1].Str);
                          }
#line 1363 "limbaj.tab.c"
    break;

  case 6: /* decl: TYPE ID LEFTP RIGHTP ';'  */
#line 87 "limbaj.y"
               {
                    if(currentScope->lookupLocal(*(yyvsp[-3].Str))){
                    cout<<"Eroare de semantica: functia '"<<*(yyvsp[-3].Str)<<"' este deja declarata la linia "<<yylineno<<endl;
                    errorCount++;
                    } 
                    else {
                         vector<Parameter> params; 
                         currentScope->addFunction(*(yyvsp[-3].Str), *(yyvsp[-4].Str), params);
                         
                         delete (yyvsp[-4].Str);
                         delete (yyvsp[-3].Str);
                         }
          }
#line 1381 "limbaj.tab.c"
    break;

  case 7: /* decl: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 101 "limbaj.y"
               {
                    if(currentScope->lookupLocal(*(yyvsp[-4].Str))){
                                   cout<<"Eroare de semantica: functia '"<<*(yyvsp[-4].Str)<<"' este deja declarata la linia "<<yylineno<<endl;
                                   errorCount++;
                              }
                    else
                    {
                         vector<Parameter> params = *(yyvsp[-2].Params);

                         currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), params);
                         delete (yyvsp[-2].Params);
                    }
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
               }
#line 1401 "limbaj.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 117 "limbaj.y"
               {
                     if(currentScope->lookupLocal(*(yyvsp[-3].Str))){
                         cout<<"Eroare de semantica: functia '"<<*(yyvsp[-3].Str)<<"' este deja declarata la linia "<<yylineno<<endl;
                         errorCount++;
                    } 
                    else {
                         vector<Parameter> params;
                         currentScope->addFunction(*(yyvsp[-3].Str), *(yyvsp[-4].Str), params);
                         currentScope=currentScope->createChild("function "+*(yyvsp[-3].Str));
                         delete (yyvsp[-4].Str);
                         delete (yyvsp[-3].Str);
                         }
               }
#line 1419 "limbaj.tab.c"
    break;

  case 9: /* decl: TYPE ID LEFTP RIGHTP LEFTB $@1 list RIGHTB  */
#line 131 "limbaj.y"
               {
                    if(currentScope)
                         currentScope=currentScope->getParent();
               }
#line 1428 "limbaj.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 136 "limbaj.y"
               {
                     if(currentScope->lookupLocal(*(yyvsp[-4].Str))){
                                   cout<<"Eroare de semantica: functia '"<<*(yyvsp[-4].Str)<<"' este deja declarata la linia "<<yylineno<<endl;
                                   errorCount++;
                              }
                    else
                    {
                         vector<Parameter> params = *(yyvsp[-2].Params);

                         currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), params);

                         currentScope = currentScope->createChild("function " + *(yyvsp[-4].Str));

                         for (const auto& p : params) {
                              currentScope->addVariable(p.name, p.type, "-");
                         }

                         delete (yyvsp[-5].Str);
                         delete (yyvsp[-4].Str);
                         delete (yyvsp[-2].Params);
                    }
               }
#line 1455 "limbaj.tab.c"
    break;

  case 11: /* decl: TYPE ID LEFTP list_param RIGHTP LEFTB $@2 list RIGHTB  */
#line 159 "limbaj.y"
               {
                   currentScope=currentScope->getParent();
               }
#line 1463 "limbaj.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 164 "limbaj.y"
               {
                    if(currentScope->lookupLocal(*(yyvsp[0].Str))){
                                   cout<<"Eroare de semantica: clasa '"<<*(yyvsp[0].Str)<<"' este deja declarata la linia "<<yylineno<<endl;
                                   errorCount++;
                              }
                    else
                    {
                         currentScope->addClass(*(yyvsp[0].Str));
                         currentScope=currentScope->createChild("class "+*(yyvsp[0].Str));
                    }
               }
#line 1479 "limbaj.tab.c"
    break;

  case 13: /* decl: BCLASS ID $@3 LEFTB class_body RIGHTB ECLASS  */
#line 176 "limbaj.y"
               {
                    currentScope=currentScope->getParent();
                    delete (yyvsp[-5].Str);
                    
               }
#line 1489 "limbaj.tab.c"
    break;

  case 14: /* decl: ID ID ';'  */
#line 182 "limbaj.y"
               {
                    if(currentScope->lookupLocal(*(yyvsp[-1].Str))){
                         cout<<"Eroare de semantica: obiectul '"<<*(yyvsp[-1].Str)<<"' este deja declarat la linia "<<yylineno<<endl;
                         errorCount++;
                    }
                    else
                    {
                         currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"object");
                         delete (yyvsp[-2].Str);
                         delete (yyvsp[-1].Str);
                    }
               }
#line 1506 "limbaj.tab.c"
    break;

  case 15: /* list_param: TYPE ID  */
#line 197 "limbaj.y"
               {
                    //cout << currentScope->getName() << endl;
                    (yyval.Params)=new vector<Parameter>();
                    (yyval.Params)->push_back({*(yyvsp[-1].Str),*(yyvsp[0].Str)});
                    delete (yyvsp[-1].Str);
                    delete (yyvsp[0].Str);
               }
#line 1518 "limbaj.tab.c"
    break;

  case 16: /* list_param: list_param COMMA TYPE ID  */
#line 205 "limbaj.y"
               {
                    //cout << currentScope->getName() << endl;
                    (yyval.Params)=(yyvsp[-3].Params);
                    (yyval.Params)->push_back({*(yyvsp[-1].Str),*(yyvsp[0].Str)});
                    delete (yyvsp[-1].Str);
                    delete (yyvsp[0].Str);
               }
#line 1530 "limbaj.tab.c"
    break;

  case 19: /* class_member: TYPE ID ';'  */
#line 219 "limbaj.y"
               {
                    currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1540 "limbaj.tab.c"
    break;

  case 20: /* class_member: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 226 "limbaj.y"
               {
                    vector<Parameter> params=*(yyvsp[-2].Params);

                    currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), params);

                    /*SymbolTable* saved=currentScope;
                    currentScope=currentScope->createChild("function "+*$2);

                    for(const auto& p : params) {
                         currentScope->addVariable(p.name, p.type, "-");
                    }
                    currentScope=saved;*/

                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-2].Params);
               }
#line 1562 "limbaj.tab.c"
    break;

  case 21: /* class_member: acces_specifier TYPE ID ';'  */
#line 245 "limbaj.y"
               {
                    currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1572 "limbaj.tab.c"
    break;

  case 22: /* class_member: acces_specifier TYPE ID LEFTP list_param RIGHTP ';'  */
#line 252 "limbaj.y"
                 {
                    currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), *(yyvsp[-2].Params));
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                 }
#line 1582 "limbaj.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 258 "limbaj.y"
              {
                    vector<Parameter> params;
                    currentScope->addFunction(*(yyvsp[-3].Str), *(yyvsp[-4].Str), params);
                    currentScope=currentScope->createChild("function "+*(yyvsp[-3].Str));
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-3].Str);
              }
#line 1594 "limbaj.tab.c"
    break;

  case 24: /* class_member: acces_specifier TYPE ID LEFTP RIGHTP LEFTB $@4 list RIGHTB  */
#line 266 "limbaj.y"
                 {
                    if(currentScope)
                         currentScope=currentScope->getParent();
                 }
#line 1603 "limbaj.tab.c"
    break;

  case 25: /* $@5: %empty  */
#line 271 "limbaj.y"
              {
                    vector<Parameter> params = *(yyvsp[-2].Params);

                         currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), params);

                         currentScope = currentScope->createChild("function " + *(yyvsp[-4].Str));

                         for (const auto& p : params) {
                              currentScope->addVariable(p.name, p.type, "-");
                         }
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-2].Params);
              }
#line 1622 "limbaj.tab.c"
    break;

  case 26: /* class_member: acces_specifier TYPE ID LEFTP list_param RIGHTP LEFTB $@5 list RIGHTB  */
#line 286 "limbaj.y"
                 {
                    if(currentScope)
                         currentScope=currentScope->getParent();
                 }
#line 1631 "limbaj.tab.c"
    break;

  case 27: /* class_member: acces_specifier TYPE ID LEFTP RIGHTP ';'  */
#line 291 "limbaj.y"
                 {
                    currentScope->addFunction(*(yyvsp[-3].Str), *(yyvsp[-4].Str), {});
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-3].Str);
                 }
#line 1641 "limbaj.tab.c"
    break;

  case 43: /* assign: ID ASSIGN expression ';'  */
#line 323 "limbaj.y"
          {
               auto* entry=currentScope->lookup(*(yyvsp[-3].Str));
               if(!entry){
                    cout<<"Eroare de semantica: variabila '"<<*(yyvsp[-3].Str)<<"' nedeclarat la linia "<<yylineno<<endl;
                    errorCount++;
               }
               else if(*(yyvsp[-1].Str) != entry->varType){
                    cout<<"Eroare de semantica: asignare de tip incompatibil pentru variabila '"<<*(yyvsp[-3].Str)<<"' la linia "<<yylineno<<endl;
                    cout << "Tip variabila: " << entry->varType << ", tip expresie: " << *(yyvsp[-1].Str) << endl;
                    errorCount++;
               }
               delete (yyvsp[-3].Str);
               delete (yyvsp[-1].Str);
          }
#line 1660 "limbaj.tab.c"
    break;

  case 44: /* assign: ID DOT ID ASSIGN expression ';'  */
#line 338 "limbaj.y"
          {
               SymbolEntry* obj=currentScope->lookup(*(yyvsp[-5].Str));
               if(!obj)
               {
                    cout<<"Eroare de semantica: obiectul "<<*(yyvsp[-5].Str)<<" nedeclarat la linia "<<yylineno<<endl;
                    errorCount++;
               }
               else
               {
                    SymbolEntry* member=globalScope->lookupMember(obj->varType, *(yyvsp[-3].Str));
                    if(!member)
                    {
                         cout<<"Eroare de semantica: clasa "<<obj->varType<<" nu are niciun membru "<<*(yyvsp[-3].Str)<<" la linia "<<yylineno<<endl;
                         errorCount++;
                    }
                    else if(*(yyvsp[-1].Str) != member->varType)
                    {
                         cout<<"Eroare de semantica: asignare de tip incompatibil pentru membrul "<<*(yyvsp[-3].Str)<<" al clasei "<<obj->varType<<" la linia "<<yylineno<<endl;
                         errorCount++;
                    }
               }
               delete (yyvsp[-5].Str);
               delete (yyvsp[-3].Str);
               delete (yyvsp[-1].Str);
          }
#line 1690 "limbaj.tab.c"
    break;

  case 45: /* declaration: INITIALIZE ID ';'  */
#line 366 "limbaj.y"
          {
              // currentScope->addVariable(*$2,"unknown","-");
               delete (yyvsp[-1].Str);
          }
#line 1699 "limbaj.tab.c"
    break;

  case 46: /* function_call: ID LEFTP call_parametres RIGHTP  */
#line 374 "limbaj.y"
      {
           SymbolEntry* entry = currentScope->lookup(*(yyvsp[-3].Str));
           if(!entry || entry->kind != SymbolKind::Function){
                cout<<"Eroare de semantica: functia '"<<*(yyvsp[-3].Str)<<"' nedeclarata la linia "<<yylineno<<endl;
                errorCount++;
                (yyval.Str) = new string("error");
           } else {
                if(entry->params.size() != (yyvsp[-1].Params)->size()){
                    cout<<"Eroare de semantica: numar incorect de parametrii pentru functia '"<<*(yyvsp[-3].Str)<<"' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
                } else {
                    bool ok = true;
                    for(size_t i=0; i<entry->params.size(); i++){
                         if(entry->params[i].type != (*(yyvsp[-1].Params))[i].type){
                              cout<<"Eroare de semantica: tip de parametru incorect pentru parametrul "<<i+1<<" al functiei '"<<*(yyvsp[-3].Str)<<"' la linia "<<yylineno<<endl;
                              errorCount++;
                              ok = false;
                         }
                    }
                    if(ok) (yyval.Str) = new string(entry->returnType);
                    else (yyval.Str) = new string("error");
                }
           }
           delete (yyvsp[-3].Str);
           delete (yyvsp[-1].Params);
      }
#line 1731 "limbaj.tab.c"
    break;

  case 47: /* function_call: ID DOT ID LEFTP call_parametres RIGHTP  */
#line 402 "limbaj.y"
      {
           SymbolEntry* obj = currentScope->lookup(*(yyvsp[-5].Str));
           if(!obj){
                cout<<"Eroare de semantica: obiectul "<<*(yyvsp[-5].Str)<<" nedeclarat la linia "<<yylineno<<endl;
                errorCount++;
                (yyval.Str) = new string("error");
           } else {
                SymbolEntry* member = globalScope->lookupMember(obj->varType, *(yyvsp[-3].Str));
                if(!member || member->kind != SymbolKind::Function){
                     cout<<"Eroare de semantica: metoda '"<<*(yyvsp[-3].Str)<<"' nedeclarata in clasa "<<obj->varType<<" la linia "<<yylineno<<endl;
                     errorCount++;
                     (yyval.Str) = new string("error");
                } else {
                     if(member->params.size() != (yyvsp[-1].Params)->size()){
                          cout<<"Eroare de semantica: numar incorect de parametrii pentru metoda '"<<*(yyvsp[-3].Str)<<"' la linia "<<yylineno<<endl;
                          errorCount++;
                          (yyval.Str) = new string("error");
                     } else {
                          bool ok = true;
                          for(size_t i=0;i<member->params.size();i++){
                               if(member->params[i].type != (*(yyvsp[-1].Params))[i].type){
                                    cout<<"Eroare de semantica: tip de parametru incorect pentru parametrul "<<i+1<<" al metodei '"<<*(yyvsp[-3].Str)<<"' la linia "<<yylineno<<endl;
                                    errorCount++;
                                    ok = false;
                               }
                          }
                          if(ok) (yyval.Str) = new string(member->returnType);
                          else (yyval.Str) = new string("error");
                     }
                }
           }
           delete (yyvsp[-5].Str);
           delete (yyvsp[-3].Str);
           delete (yyvsp[-1].Params);
      }
#line 1771 "limbaj.tab.c"
    break;

  case 50: /* for_statement: BFOR ID FROM expression TO expression DO list EFOR ';'  */
#line 444 "limbaj.y"
               {
                    delete (yyvsp[-8].Str);
               }
#line 1779 "limbaj.tab.c"
    break;

  case 53: /* return_statement: RETURN expression ';'  */
#line 453 "limbaj.y"
                                       {
                    SymbolEntry* f=currentScope->getParentFunction();
                    if(f && f->varType == "void"){
                         cout<<"Eroare de semantica: return intr-o functie void la linia "<<yylineno<<endl;
                         errorCount++;
                    }
                    }
#line 1791 "limbaj.tab.c"
    break;

  case 54: /* return_statement: RETURN ';'  */
#line 460 "limbaj.y"
                                 {
                    SymbolEntry* f=currentScope->getParentFunction();
                    if(f && f->varType != "void"){
                         cout<<"Eroare de semantica: return fara valoare intr-o functie non-void la linia "<<yylineno<<endl;
                         errorCount++;
                         }
                    }
#line 1803 "limbaj.tab.c"
    break;

  case 55: /* call_parametres: expression  */
#line 469 "limbaj.y"
                            {
                    (yyval.Params) = new vector<Parameter>();
                    (yyval.Params)->push_back({*(yyvsp[0].Str), ""});
                    delete (yyvsp[0].Str);
}
#line 1813 "limbaj.tab.c"
    break;

  case 56: /* call_parametres: call_parametres COMMA expression  */
#line 474 "limbaj.y"
                                             {
                    (yyval.Params) = (yyvsp[-2].Params);
                    (yyval.Params)->push_back({*(yyvsp[0].Str), ""});
                    delete (yyvsp[0].Str);
           }
#line 1823 "limbaj.tab.c"
    break;

  case 57: /* expression: INT_NR  */
#line 481 "limbaj.y"
                   { (yyval.Str) = new string("integer");}
#line 1829 "limbaj.tab.c"
    break;

  case 58: /* expression: FLOAT_NR  */
#line 482 "limbaj.y"
                     { (yyval.Str) = new string("float");}
#line 1835 "limbaj.tab.c"
    break;

  case 59: /* expression: STRING_S  */
#line 483 "limbaj.y"
                     { (yyval.Str) = new string("text"); delete (yyvsp[0].Str);}
#line 1841 "limbaj.tab.c"
    break;

  case 60: /* expression: TRUE  */
#line 484 "limbaj.y"
                 { (yyval.Str) = new string("bool");}
#line 1847 "limbaj.tab.c"
    break;

  case 61: /* expression: FALSE  */
#line 485 "limbaj.y"
                  { (yyval.Str) = new string("bool");}
#line 1853 "limbaj.tab.c"
    break;

  case 62: /* expression: ID  */
#line 486 "limbaj.y"
               {
               if(!currentScope->lookup(*(yyvsp[0].Str))){
                    cout<<"Eroare de semantica: '"<<*(yyvsp[0].Str)<<"' nedeclarat la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else{
                    SymbolEntry* entry=currentScope->lookup(*(yyvsp[0].Str));
                    (yyval.Str) = new string(entry->varType);
               }
               }
#line 1869 "limbaj.tab.c"
    break;

  case 63: /* expression: ID DOT ID  */
#line 498 "limbaj.y"
               {
                    SymbolEntry* obj=currentScope->lookup(*(yyvsp[-2].Str));
                    if(!obj)
                    {
                         cout<<"Eroare de semantica: obiectul "<<*(yyvsp[-2].Str)<<" nedeclarat la linia "<<yylineno<<endl;
                         errorCount++;
                         (yyval.Str) = new string("error");
                    }
                    else
                    {
                         SymbolEntry* member=globalScope->lookupMember(obj->varType, *(yyvsp[0].Str));
                         if(!member)
                         {
                              cout<<"Eroare de semantica: clasa "<<obj->varType<<" nu are niciun membru "<<*(yyvsp[0].Str)<<" la linia "<<yylineno<<endl;
                              errorCount++;
                              (yyval.Str) = new string("error");
                         }
                         else{
                              (yyval.Str) = new string(member->varType);
                         }
                    }
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[0].Str);
               }
#line 1898 "limbaj.tab.c"
    break;

  case 64: /* expression: NEW ID  */
#line 523 "limbaj.y"
               {
                    delete (yyvsp[0].Str);
               }
#line 1906 "limbaj.tab.c"
    break;

  case 65: /* expression: function_call  */
#line 526 "limbaj.y"
                          { (yyval.Str) = (yyvsp[0].Str); }
#line 1912 "limbaj.tab.c"
    break;

  case 66: /* expression: expression PLUS expression  */
#line 527 "limbaj.y"
                                       {
               if(*(yyvsp[-2].Str) != *(yyvsp[0].Str)) {
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '+' la linia "<<yylineno<<endl;
                    cout << "Tip stanga: " << *(yyvsp[-2].Str) << ", tip dreapta: " << *(yyvsp[0].Str) << endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else (yyval.Str) = new string(*(yyvsp[-2].Str));
               delete (yyvsp[-2].Str);
               delete (yyvsp[0].Str);
          }
#line 1928 "limbaj.tab.c"
    break;

  case 67: /* expression: expression MINUS expression  */
#line 538 "limbaj.y"
                                       {
               if(*(yyvsp[-2].Str) != *(yyvsp[0].Str)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '-' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else (yyval.Str) = new string(*(yyvsp[-2].Str));
               delete (yyvsp[-2].Str);
               delete (yyvsp[0].Str);
          }
#line 1943 "limbaj.tab.c"
    break;

  case 68: /* expression: MINUS expression  */
#line 549 "limbaj.y"
                                          { (yyval.Str) = new string(*(yyvsp[0].Str)); delete (yyvsp[0].Str); }
#line 1949 "limbaj.tab.c"
    break;

  case 69: /* expression: expression MUL expression  */
#line 550 "limbaj.y"
                                     {
               if(*(yyvsp[-2].Str) != *(yyvsp[0].Str)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '*' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else (yyval.Str) = new string(*(yyvsp[-2].Str));
               delete (yyvsp[-2].Str);
               delete (yyvsp[0].Str);
          }
#line 1964 "limbaj.tab.c"
    break;

  case 70: /* expression: expression DIV expression  */
#line 560 "limbaj.y"
                                     {
               if(*(yyvsp[-2].Str) != *(yyvsp[0].Str)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '/' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else (yyval.Str) = new string(*(yyvsp[-2].Str));
               delete (yyvsp[-2].Str);
               delete (yyvsp[0].Str);
          }
#line 1979 "limbaj.tab.c"
    break;

  case 71: /* expression: LEFTP expression RIGHTP  */
#line 570 "limbaj.y"
                                    { (yyval.Str) = new string(*(yyvsp[-1].Str)); delete (yyvsp[-1].Str); }
#line 1985 "limbaj.tab.c"
    break;

  case 72: /* expression: expression AND expression  */
#line 571 "limbaj.y"
                                     {
               if(*(yyvsp[-2].Str) != *(yyvsp[0].Str)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul 'and' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else (yyval.Str) = new string(*(yyvsp[-2].Str));
               delete (yyvsp[-2].Str);
               delete (yyvsp[0].Str);
          }
#line 2000 "limbaj.tab.c"
    break;

  case 73: /* expression: expression OR expression  */
#line 581 "limbaj.y"
                                    {
               if(*(yyvsp[-2].Str) != *(yyvsp[0].Str)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul 'or' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Str) = new string("error");
               }
               else (yyval.Str) = new string(*(yyvsp[-2].Str));
               delete (yyvsp[-2].Str);
               delete (yyvsp[0].Str);
          }
#line 2015 "limbaj.tab.c"
    break;

  case 74: /* expression: NOT expression  */
#line 591 "limbaj.y"
                           { (yyval.Str) = new string(*(yyvsp[0].Str)); delete (yyvsp[0].Str); }
#line 2021 "limbaj.tab.c"
    break;


#line 2025 "limbaj.tab.c"
>>>>>>> 6b12b73 (Modificari carina)

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

<<<<<<< HEAD
#line 182 "limbaj.y"
=======
#line 609 "limbaj.y"
>>>>>>> 6b12b73 (Modificari carina)

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
<<<<<<< HEAD
     yyparse();
=======

     globalScope=new SymbolTable("global", nullptr);
     currentScope=globalScope;
     yyparse();
     ofstream fout("tables.txt");
     if(fout.is_open()) {
          globalScope->printAll(fout);
          fout.close();
     }

     delete globalScope;
>>>>>>> 6b12b73 (Modificari carina)
     return (errorCount == 0) ? 0 : 1;
} 
