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
#line 8 "limbaj.y"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "symbol_table.hpp"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
int errorCount = 0;

SymbolTable* globalScope=nullptr;
SymbolTable* currentScope=nullptr;

#line 87 "limbaj.tab.c"

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
  YYSYMBOL_list_param = 61,                /* list_param  */
  YYSYMBOL_class_body = 62,                /* class_body  */
  YYSYMBOL_class_member = 63,              /* class_member  */
  YYSYMBOL_acces_specifier = 64,           /* acces_specifier  */
  YYSYMBOL_main_block = 65,                /* main_block  */
  YYSYMBOL_list = 66,                      /* list  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_assign = 68,                    /* assign  */
  YYSYMBOL_declaration = 69,               /* declaration  */
  YYSYMBOL_function_call = 70,             /* function_call  */
  YYSYMBOL_if_statement = 71,              /* if_statement  */
  YYSYMBOL_for_statement = 72,             /* for_statement  */
  YYSYMBOL_print_statement = 73,           /* print_statement  */
  YYSYMBOL_return_statement = 74,          /* return_statement  */
  YYSYMBOL_call_parametres = 75,           /* call_parametres  */
  YYSYMBOL_expression = 76,                /* expression  */
  YYSYMBOL_while_statement = 77,           /* while_statement  */
  YYSYMBOL_bool_expression = 78            /* bool_expression  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    68,    69,    72,    77,    97,    96,   109,
     116,   127,   127,   129,   136,   154,   160,   167,   168,   169,
     172,   176,   177,   180,   181,   182,   183,   184,   185,   186,
     187,   190,   196,   203,   207,   214,   215,   218,   224,   226,
     228,   229,   232,   233,   234,   235,   236,   237,   238,   243,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     259,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271
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
  "\"end of file\"", "error", "\"invalid token\"", "BPROGRAM", "EPROGRAM",
  "BMAIN", "EMAIN", "ASSIGN", "BIF", "THEN", "ELSE", "EIF", "BWHILE", "DO",
  "EWHILE", "BFOR", "FROM", "TO", "EFOR", "INITIALIZE", "TRUE", "FALSE",
  "AND", "OR", "NOT", "EQ", "NEQ", "LE", "GE", "LT", "GT", "PLUS", "MINUS",
  "MUL", "DIV", "BCLASS", "ECLASS", "PRIVATE", "PUBLIC", "PROTECTED",
  "NEW", "RETURN", "DOT", "COMMA", "LEFTP", "RIGHTP", "LEFTB", "RIGHTB",
  "PRINT", "ID", "TYPE", "STRING_S", "INT_NR", "FLOAT_NR", "UMINUS", "';'",
  "$accept", "program", "global_declarations", "decl", "$@1", "list_param",
  "class_body", "class_member", "acces_specifier", "main_block", "list",
  "statement", "assign", "declaration", "function_call", "if_statement",
  "for_statement", "print_statement", "return_statement",
  "call_parametres", "expression", "while_statement", "bool_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,   -30,     3,     4,    13,    -3,   -89,   -89,   -89,   -34,
     154,   -89,    35,    38,    -1,   -89,   172,   172,    32,    50,
     186,    54,     0,    10,    48,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,    40,    57,    49,   -89,   -89,   172,
     186,    61,   172,    53,   -89,   -89,   -89,   -89,   255,     5,
     192,    97,   -89,   186,   186,    23,   186,   186,    78,   186,
     -89,    83,   -89,   -89,   -89,   -89,    87,   106,   -89,    89,
     -89,   108,   109,   265,   -89,   -89,   -89,   218,   -14,   114,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   154,   172,   172,   154,   186,   200,    92,   153,
      23,   121,    59,    23,   -89,   -25,   131,   -89,   122,   123,
     -89,   -89,   -89,   121,   200,   146,   200,   200,   200,   200,
     200,   200,     1,     1,   -89,   -89,    81,    -5,   -89,   148,
      93,   236,   -89,   186,   186,   -89,    -1,   -89,   -89,     8,
     -89,   154,   -89,   -89,   186,    66,    23,    76,    -1,   -89,
     140,   242,   -89,   119,    90,   -89,   154,   -89,   127,   142,
     -89,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     3,     1,     7,     0,
       0,     4,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    28,
      29,    30,    27,     2,     0,     0,     0,    45,    46,     0,
       0,     0,     0,    47,    44,    42,    43,    50,     0,     0,
       0,     0,    32,     0,     0,    39,     0,     0,     0,     0,
      20,     0,    21,    17,    18,    19,     0,     0,    12,     0,
       9,     0,     0,    59,    69,    53,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
      31,     0,     0,    40,    22,     0,     0,    11,     0,     0,
       6,    56,    70,    48,    57,    58,    61,    62,    64,    66,
      63,    65,    51,    52,    54,    55,     0,     0,    67,    68,
       0,     0,    38,     0,     0,    33,     0,    13,     8,     0,
      10,     0,    35,    60,     0,     0,    41,     0,     0,    15,
       0,     0,    34,     0,     0,    36,     0,    14,     0,     0,
      16,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   189,   -89,   -88,   -89,   130,   -89,   -89,
     -80,    -9,   -89,   -89,   -10,   -89,   -89,   -89,   -89,    67,
     -16,   -89,    -6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,     6,    13,    36,    67,    68,    69,    12,
      23,    61,    25,    26,    47,    28,    29,    30,    31,   102,
      48,    32,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    24,    10,     7,    55,     3,   142,    57,    93,    94,
      14,    50,   126,    27,    92,   130,    60,     1,    16,   136,
       4,    15,    17,    73,    75,    18,    77,    93,    94,    19,
     137,   112,     3,    74,    90,    91,    78,    97,    98,    33,
      99,   100,    58,   103,    59,    80,    81,     4,   147,    35,
      62,    20,   148,     8,    88,    89,    90,    91,    21,    22,
     154,   150,     9,   149,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   159,    63,    64,    65,
     131,    51,    27,   127,    34,    27,    24,   128,   129,    16,
      66,   141,    71,    17,    72,    79,    18,    59,    56,    52,
      19,    16,   134,    62,   135,    17,    70,   143,    18,   134,
      76,   152,    19,    96,    80,    81,    27,   103,   146,    71,
      27,   153,    20,    88,    89,    90,    91,   101,   151,    21,
      22,    27,    24,    71,    20,   158,   105,   111,   104,   108,
      27,    21,    22,    63,    64,    65,    27,    24,    16,    27,
      16,   155,    17,   106,    17,    18,    66,    18,   109,    19,
     161,    19,    16,   113,   110,   133,    17,   138,    80,    18,
      93,   139,   140,    19,   157,    80,    81,    88,    89,    90,
      91,    20,   160,    20,    88,    89,    90,    91,    21,    22,
      21,    22,    37,    38,    11,    20,    39,   107,   132,     0,
     145,     0,    21,    22,    40,    95,    37,    38,     0,     0,
      53,     0,    41,     0,    93,    94,    42,     0,    40,     0,
       0,    43,     0,    44,    45,    46,    41,     0,     0,     0,
      54,    88,    89,    90,    91,    43,     0,    44,    45,    46,
      80,    81,     0,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   144,     0,   156,     0,     0,    80,    81,
       0,     0,     0,   111,    80,    81,     0,    88,    89,    90,
      91,     0,     0,    88,    89,    90,    91,    80,    81,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
      10,    10,     5,     0,    20,    35,    11,     7,    22,    23,
      44,    17,    92,    23,     9,    95,     6,     3,     8,    44,
      50,    55,    12,    39,    40,    15,    42,    22,    23,    19,
      55,    45,    35,    39,    33,    34,    42,    53,    54,     4,
      56,    57,    42,    59,    44,    22,    23,    50,   136,    50,
      55,    41,    44,    49,    31,    32,    33,    34,    48,    49,
     148,   141,    49,    55,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,   156,    37,    38,    39,
      96,    49,    92,    92,    46,    95,    95,    93,    94,     8,
      50,    10,    43,    12,    45,    42,    15,    44,    44,    49,
      19,     8,    43,    55,    45,    12,    49,    14,    15,    43,
      49,    45,    19,    16,    22,    23,   126,   133,   134,    43,
     130,    45,    41,    31,    32,    33,    34,    49,   144,    48,
      49,   141,   141,    43,    41,    45,    49,    45,    55,    50,
     150,    48,    49,    37,    38,    39,   156,   156,     8,   159,
       8,    11,    12,    47,    12,    15,    50,    15,    50,    19,
      18,    19,     8,    49,    55,    44,    12,    36,    22,    15,
      22,    49,    49,    19,    55,    22,    23,    31,    32,    33,
      34,    41,    55,    41,    31,    32,    33,    34,    48,    49,
      48,    49,    20,    21,     5,    41,    24,    67,    45,    -1,
     133,    -1,    48,    49,    32,    13,    20,    21,    -1,    -1,
      24,    -1,    40,    -1,    22,    23,    44,    -1,    32,    -1,
      -1,    49,    -1,    51,    52,    53,    40,    -1,    -1,    -1,
      44,    31,    32,    33,    34,    49,    -1,    51,    52,    53,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    17,    -1,    13,    -1,    -1,    22,    23,
      -1,    -1,    -1,    45,    22,    23,    -1,    31,    32,    33,
      34,    -1,    -1,    31,    32,    33,    34,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    57,    35,    50,    58,    59,     0,    49,    49,
       5,    59,    65,    60,    44,    55,     8,    12,    15,    19,
      41,    48,    49,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    77,     4,    46,    50,    61,    20,    21,    24,
      32,    40,    44,    49,    51,    52,    53,    70,    76,    78,
      78,    49,    49,    24,    44,    76,    44,     7,    42,    44,
       6,    67,    55,    37,    38,    39,    50,    62,    63,    64,
      49,    43,    45,    76,    78,    76,    49,    76,    78,    42,
      22,    23,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     9,    22,    23,    13,    16,    76,    76,    76,
      76,    49,    75,    76,    55,    49,    47,    63,    50,    50,
      55,    45,    45,    49,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    66,    67,    78,    78,
      66,    76,    45,    44,    43,    45,    44,    55,    36,    49,
      49,    10,    11,    14,    17,    75,    76,    61,    44,    55,
      66,    76,    45,    45,    61,    11,    13,    55,    45,    66,
      55,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    59,    61,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    70,    70,    71,    71,    72,    73,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     2,     3,     6,     0,     7,     2,
       4,     2,     1,     3,     6,     4,     7,     1,     1,     1,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     4,     6,     5,     7,     9,     4,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     3,     3,     2,     3,     3,     3,     3,     3,     2,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3
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
  case 2: /* program: BPROGRAM global_declarations main_block EPROGRAM  */
#line 65 "limbaj.y"
                                                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1284 "limbaj.tab.c"
    break;

  case 5: /* decl: TYPE ID ';'  */
#line 72 "limbaj.y"
                          { 
                              currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                              delete (yyvsp[-2].Str);
                              delete (yyvsp[-1].Str);
                          }
#line 1294 "limbaj.tab.c"
    break;

  case 6: /* decl: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 78 "limbaj.y"
               {
                    vector<Parameter> params = *(yyvsp[-2].Params);

                    currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), params);

                    SymbolTable* saved = currentScope;
                    currentScope = currentScope->createChild("function " + *(yyvsp[-4].Str));

                    for (const auto& p : params) {
                    currentScope->addVariable(p.name, p.type, "-");
                    }

                    currentScope = saved;

                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-2].Params);
               }
#line 1317 "limbaj.tab.c"
    break;

  case 7: /* $@1: %empty  */
#line 97 "limbaj.y"
               {

                    currentScope->addClass(*(yyvsp[0].Str));
                    currentScope=currentScope->createChild("class "+*(yyvsp[0].Str));
               }
#line 1327 "limbaj.tab.c"
    break;

  case 8: /* decl: BCLASS ID $@1 LEFTB class_body RIGHTB ECLASS  */
#line 103 "limbaj.y"
               {
                    currentScope=currentScope->getParent();
                    delete (yyvsp[-5].Str);
               }
#line 1336 "limbaj.tab.c"
    break;

  case 9: /* list_param: TYPE ID  */
#line 110 "limbaj.y"
               {
                    (yyval.Params)=new vector<Parameter>();
                    (yyval.Params)->push_back({*(yyvsp[-1].Str),*(yyvsp[0].Str)});
                    delete (yyvsp[-1].Str);
                    delete (yyvsp[0].Str);
               }
#line 1347 "limbaj.tab.c"
    break;

  case 10: /* list_param: list_param COMMA TYPE ID  */
#line 117 "limbaj.y"
               {
                    (yyval.Params)=(yyvsp[-3].Params);
                    (yyval.Params)->push_back({*(yyvsp[-1].Str),*(yyvsp[0].Str)});
                    delete (yyvsp[-1].Str);
                    delete (yyvsp[0].Str);
               }
#line 1358 "limbaj.tab.c"
    break;

  case 13: /* class_member: TYPE ID ';'  */
#line 130 "limbaj.y"
               {
                    currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1368 "limbaj.tab.c"
    break;

  case 14: /* class_member: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 137 "limbaj.y"
               {
                    vector<Parameter> params=*(yyvsp[-2].Params);

                    currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), params);

                    SymbolTable* saved=currentScope;
                    currentScope=currentScope->createChild("function "+*(yyvsp[-4].Str));

                    for(const auto& p : params) {
                         currentScope->addVariable(p.name, p.type, "-");
                    }
                    currentScope=saved;

                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-2].Params);
               }
#line 1390 "limbaj.tab.c"
    break;

  case 15: /* class_member: acces_specifier TYPE ID ';'  */
#line 155 "limbaj.y"
               {
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1399 "limbaj.tab.c"
    break;

  case 16: /* class_member: acces_specifier TYPE ID LEFTP list_param RIGHTP ';'  */
#line 161 "limbaj.y"
                 {
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                 }
#line 1408 "limbaj.tab.c"
    break;

  case 31: /* assign: ID ASSIGN expression  */
#line 191 "limbaj.y"
          {
               delete (yyvsp[-2].Str);
          }
#line 1416 "limbaj.tab.c"
    break;

  case 32: /* declaration: INITIALIZE ID  */
#line 197 "limbaj.y"
          {
               currentScope->addVariable(*(yyvsp[0].Str),"unknown","-");
               delete (yyvsp[0].Str);
          }
#line 1425 "limbaj.tab.c"
    break;

  case 33: /* function_call: ID LEFTP call_parametres RIGHTP  */
#line 204 "limbaj.y"
          {
               delete (yyvsp[-3].Str);
          }
#line 1433 "limbaj.tab.c"
    break;

  case 34: /* function_call: ID DOT ID LEFTP call_parametres RIGHTP  */
#line 208 "limbaj.y"
          {
                delete (yyvsp[-5].Str);
                delete (yyvsp[-3].Str);
          }
#line 1442 "limbaj.tab.c"
    break;

  case 37: /* for_statement: BFOR ID FROM expression TO expression DO list EFOR  */
#line 219 "limbaj.y"
               {
                    delete (yyvsp[-7].Str);
               }
#line 1450 "limbaj.tab.c"
    break;

  case 44: /* expression: STRING_S  */
#line 234 "limbaj.y"
                     {delete (yyvsp[0].Str);}
#line 1456 "limbaj.tab.c"
    break;

  case 47: /* expression: ID  */
#line 237 "limbaj.y"
               {delete (yyvsp[0].Str);}
#line 1462 "limbaj.tab.c"
    break;

  case 48: /* expression: ID DOT ID  */
#line 239 "limbaj.y"
               {
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[0].Str);
               }
#line 1471 "limbaj.tab.c"
    break;

  case 49: /* expression: NEW ID  */
#line 244 "limbaj.y"
               {
                    delete (yyvsp[0].Str);
               }
#line 1479 "limbaj.tab.c"
    break;


#line 1483 "limbaj.tab.c"

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

#line 274 "limbaj.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");

     globalScope=new SymbolTable("global", nullptr);
     currentScope=globalScope;
     yyparse();
     ofstream fout("tables.txt");
     if(fout.is_open()) {
          globalScope->printAll(fout);
          fout.close();
     }

     delete globalScope;
     return (errorCount == 0) ? 0 : 1;
} 
