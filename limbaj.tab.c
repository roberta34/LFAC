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
#line 21 "limbaj.y"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "symbol_table.hpp"
#include "ASTnode.hpp"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
int errorCount = 0;

SymbolTable* globalScope=nullptr;
SymbolTable* currentScope=nullptr;


#line 89 "limbaj.tab.c"

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
  YYSYMBOL_TRUE = 19,                      /* TRUE  */
  YYSYMBOL_FALSE = 20,                     /* FALSE  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_NEQ = 25,                       /* NEQ  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_LT = 28,                        /* LT  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_BCLASS = 34,                    /* BCLASS  */
  YYSYMBOL_ECLASS = 35,                    /* ECLASS  */
  YYSYMBOL_PRIVATE = 36,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 37,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 38,                 /* PROTECTED  */
  YYSYMBOL_NEW = 39,                       /* NEW  */
  YYSYMBOL_RETURN = 40,                    /* RETURN  */
  YYSYMBOL_DOT = 41,                       /* DOT  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_LEFTP = 43,                     /* LEFTP  */
  YYSYMBOL_RIGHTP = 44,                    /* RIGHTP  */
  YYSYMBOL_LEFTB = 45,                     /* LEFTB  */
  YYSYMBOL_RIGHTB = 46,                    /* RIGHTB  */
  YYSYMBOL_PRINT = 47,                     /* PRINT  */
  YYSYMBOL_ID = 48,                        /* ID  */
  YYSYMBOL_TYPE = 49,                      /* TYPE  */
  YYSYMBOL_STRING_S = 50,                  /* STRING_S  */
  YYSYMBOL_INT_NR = 51,                    /* INT_NR  */
  YYSYMBOL_FLOAT_NR = 52,                  /* FLOAT_NR  */
  YYSYMBOL_UMINUS = 53,                    /* UMINUS  */
  YYSYMBOL_54_ = 54,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_global_declarations = 57,       /* global_declarations  */
  YYSYMBOL_decl = 58,                      /* decl  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_list_param = 62,                /* list_param  */
  YYSYMBOL_class_body = 63,                /* class_body  */
  YYSYMBOL_class_member = 64,              /* class_member  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_acces_specifier = 67,           /* acces_specifier  */
  YYSYMBOL_main_block = 68,                /* main_block  */
  YYSYMBOL_list = 69,                      /* list  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_assign = 71,                    /* assign  */
  YYSYMBOL_function_call = 72,             /* function_call  */
  YYSYMBOL_if_statement = 73,              /* if_statement  */
  YYSYMBOL_for_statement = 74,             /* for_statement  */
  YYSYMBOL_print_statement = 75,           /* print_statement  */
  YYSYMBOL_return_statement = 76,          /* return_statement  */
  YYSYMBOL_call_parametres = 77,           /* call_parametres  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_while_statement = 79,           /* while_statement  */
  YYSYMBOL_bool_expression = 80            /* bool_expression  */
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
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    86,    87,    90,   101,   115,   132,   131,
     151,   150,   179,   178,   196,   211,   219,   231,   231,   233,
     240,   259,   266,   273,   272,   286,   285,   305,   313,   314,
     315,   318,   322,   323,   326,   327,   328,   329,   330,   331,
     332,   333,   336,   356,   387,   415,   453,   455,   459,   467,
     475,   485,   493,   502,   510,   520,   521,   522,   523,   524,
     525,   537,   562,   571,   585,   600,   613,   627,   641,   662,
     675,   679,   687,   695,   703,   711,   719,   727,   735,   743,
     749
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
  "EWHILE", "BFOR", "FROM", "TO", "EFOR", "TRUE", "FALSE", "AND", "OR",
  "NOT", "EQ", "NEQ", "LE", "GE", "LT", "GT", "PLUS", "MINUS", "MUL",
  "DIV", "BCLASS", "ECLASS", "PRIVATE", "PUBLIC", "PROTECTED", "NEW",
  "RETURN", "DOT", "COMMA", "LEFTP", "RIGHTP", "LEFTB", "RIGHTB", "PRINT",
  "ID", "TYPE", "STRING_S", "INT_NR", "FLOAT_NR", "UMINUS", "';'",
  "$accept", "program", "global_declarations", "decl", "$@1", "$@2", "$@3",
  "list_param", "class_body", "class_member", "$@4", "$@5",
  "acces_specifier", "main_block", "list", "statement", "assign",
  "function_call", "if_statement", "for_statement", "print_statement",
  "return_statement", "call_parametres", "expression", "while_statement",
  "bool_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    13,    39,    38,    44,    59,     1,  -116,  -116,  -116,
      57,   -39,   211,  -116,   110,    80,  -116,   134,  -116,   244,
     244,    91,   218,   120,     5,  -116,    11,  -116,  -116,   113,
    -116,  -116,  -116,  -116,  -116,  -116,   105,    54,   128,   -26,
    -116,  -116,   244,   254,   142,   244,   129,  -116,  -116,  -116,
     314,    33,   137,   191,   254,   254,  -116,   -22,   244,   254,
     172,   254,  -116,  -116,  -116,  -116,  -116,  -116,   184,   176,
    -116,   133,  -116,  -116,  -116,   175,    67,   314,  -116,  -116,
    -116,   283,    -8,   192,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   211,   244,   244,   211,   254,   248,
      72,  -116,   293,     8,    43,     0,   122,   248,    37,   208,
    -116,   200,   211,   214,  -116,  -116,  -116,  -116,  -116,   248,
     248,   248,   248,   248,   248,   256,   256,  -116,  -116,    86,
     239,  -116,   235,    75,   222,   217,   228,  -116,   254,   254,
     254,  -116,   216,  -116,  -116,    41,    98,  -116,   211,   211,
     230,  -116,   254,  -116,  -116,    97,   156,   248,   166,   152,
    -116,  -116,   140,   145,  -116,   198,  -116,  -116,   232,    95,
     202,  -116,   236,   211,  -116,  -116,  -116,   117,  -116,   157,
     211,  -116,  -116,   237,   169,   211,  -116,  -116,   187,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,     1,    12,
       0,     0,     0,     4,     0,     0,    14,     0,     5,     0,
       0,     0,     0,     0,     0,    35,     0,    32,    34,     0,
      37,    39,    40,    41,    38,     2,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,    60,    57,    55,    56,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,    31,    33,    36,    28,    29,    30,     0,     0,
      18,     0,     8,     6,    15,     0,     0,    69,    79,    65,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,    51,     0,     0,     0,     0,     0,    53,     0,     0,
      17,     0,     0,     0,    10,     7,    68,    80,    61,    71,
      72,    74,    76,    73,    75,    63,    64,    66,    67,     0,
      32,    77,    78,     0,     0,     0,     0,    42,     0,     0,
       0,    44,     0,    19,    13,     0,     0,    16,     0,     0,
       0,    70,     0,    49,    50,     0,     0,    54,     0,     0,
      21,     9,     0,     0,    46,     0,    43,    45,     0,     0,
       0,    11,     0,     0,    20,    23,    27,     0,    47,     0,
       0,    25,    22,     0,     0,     0,    48,    24,     0,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,   241,  -116,  -116,  -116,  -115,  -116,   207,
    -116,  -116,  -116,  -116,   -92,   -12,  -116,  -116,  -116,  -116,
    -116,  -116,   159,   -21,  -116,   -17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,    25,   112,   148,    15,    39,    69,    70,
     180,   185,    71,    14,    26,    63,    28,    29,    30,    31,
      32,    33,   106,    50,    34,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    57,   129,    52,    17,   133,    12,   138,    90,    91,
      92,    93,    59,    95,    96,    18,    75,    62,    76,    19,
     146,    77,    79,    20,    81,    78,    21,   158,    82,    95,
      96,     1,   101,    99,   100,     3,   117,   102,   104,     8,
     107,   103,    94,   139,   170,     3,    60,     3,    61,     4,
       5,    22,   136,    10,    95,    96,   162,   163,    23,    24,
       5,     4,     5,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    90,    91,    92,    93,   134,   131,   132,
     142,   179,   130,    19,   159,    27,     9,    20,   184,   151,
      21,   143,    10,   188,    19,   160,   149,   137,    20,    72,
      27,    21,    90,    91,    92,    93,    19,    11,    73,     3,
      20,    16,   114,    21,    35,    22,   116,   155,   107,   157,
       3,   115,    23,    24,     5,    36,    22,    90,    91,    92,
      93,   165,     3,    23,    24,     5,    27,    27,    22,    53,
     175,    65,    66,    67,   161,    23,    24,     5,    19,   176,
      97,   166,    20,    19,    68,    21,   172,    20,    95,    96,
      21,    27,   181,    58,   140,    19,   141,    64,    27,    20,
      83,   182,    21,    27,     3,   183,    74,    19,    37,     3,
      22,    20,   111,    38,    21,    22,   171,    23,    24,     5,
      80,     3,    23,    24,     5,    19,   169,    22,   140,    20,
     167,    38,    21,     3,    23,    24,     5,    98,    75,    22,
     168,   173,    65,    66,    67,   187,    23,    24,     5,    19,
     105,     3,   109,    20,   113,    68,    21,    22,    90,    91,
      92,    93,   108,   189,    23,    24,     5,    40,    41,   152,
     118,    54,     7,   144,    75,     3,   177,    13,   145,    43,
     150,    22,    90,    91,    92,    93,    95,    44,    23,    24,
       5,    55,   147,    40,    41,    38,    46,    42,    47,    48,
      49,   153,    56,    40,    41,    43,   110,    54,    90,    91,
      92,    93,   154,    44,   164,    43,   174,    45,    92,    93,
     178,   186,    46,    44,    47,    48,    49,    55,   156,     0,
       0,     0,    46,     0,    47,    48,    49,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93
};

static const yytype_int16 yycheck[] =
{
      12,    22,    94,    20,    43,    97,     5,     7,    30,    31,
      32,    33,     7,    21,    22,    54,    42,     6,    44,     8,
     112,    42,    43,    12,    45,    42,    15,   142,    45,    21,
      22,     3,    54,    54,    55,    34,    44,    58,    59,     0,
      61,    58,     9,    43,   159,    34,    41,    34,    43,    48,
      49,    40,    44,    48,    21,    22,   148,   149,    47,    48,
      49,    48,    49,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    30,    31,    32,    33,    98,    95,    96,
      43,   173,    94,     8,    43,    97,    48,    12,   180,    14,
      15,    54,    48,   185,     8,    54,    10,    54,    12,    45,
     112,    15,    30,    31,    32,    33,     8,    48,    54,    34,
      12,    54,    45,    15,     4,    40,    44,   138,   139,   140,
      34,    54,    47,    48,    49,    45,    40,    30,    31,    32,
      33,   152,    34,    47,    48,    49,   148,   149,    40,    48,
      45,    36,    37,    38,    46,    47,    48,    49,     8,    54,
      13,    54,    12,     8,    49,    15,    11,    12,    21,    22,
      15,   173,    45,    43,    42,     8,    44,    54,   180,    12,
      41,    54,    15,   185,    34,    18,    48,     8,    44,    34,
      40,    12,    49,    49,    15,    40,    46,    47,    48,    49,
      48,    34,    47,    48,    49,     8,    44,    40,    42,    12,
      44,    49,    15,    34,    47,    48,    49,    16,    42,    40,
      44,    13,    36,    37,    38,    46,    47,    48,    49,     8,
      48,    34,    46,    12,    49,    49,    15,    40,    30,    31,
      32,    33,    48,    46,    47,    48,    49,    19,    20,    17,
      48,    23,     1,    35,    42,    34,    44,     6,    48,    31,
      11,    40,    30,    31,    32,    33,    21,    39,    47,    48,
      49,    43,    48,    19,    20,    49,    48,    23,    50,    51,
      52,    54,    54,    19,    20,    31,    69,    23,    30,    31,
      32,    33,    54,    39,    54,    31,    54,    43,    32,    33,
      54,    54,    48,    39,    50,    51,    52,    43,   139,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    56,    34,    48,    49,    57,    58,     0,    48,
      48,    48,     5,    58,    68,    61,    54,    43,    54,     8,
      12,    15,    40,    47,    48,    58,    69,    70,    71,    72,
      73,    74,    75,    76,    79,     4,    45,    44,    49,    62,
      19,    20,    23,    31,    39,    43,    48,    50,    51,    52,
      78,    80,    80,    48,    23,    43,    54,    78,    43,     7,
      41,    43,     6,    70,    54,    36,    37,    38,    49,    63,
      64,    67,    45,    54,    48,    42,    44,    78,    80,    78,
      48,    78,    80,    41,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     9,    21,    22,    13,    16,    78,
      78,    54,    78,    80,    78,    48,    77,    78,    48,    46,
      64,    49,    59,    49,    45,    54,    44,    44,    48,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    69,
      70,    80,    80,    69,    78,    44,    44,    54,     7,    43,
      42,    44,    43,    54,    35,    48,    69,    48,    60,    10,
      11,    14,    17,    54,    54,    78,    77,    78,    62,    43,
      54,    46,    69,    69,    54,    78,    54,    44,    44,    44,
      62,    46,    11,    13,    54,    45,    54,    44,    54,    69,
      65,    45,    54,    18,    69,    66,    54,    46,    69,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    59,    58,
      60,    58,    61,    58,    58,    62,    62,    63,    63,    64,
      64,    64,    64,    65,    64,    66,    64,    64,    67,    67,
      67,    68,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     2,     3,     5,     6,     0,     8,
       0,     9,     0,     7,     3,     2,     4,     2,     1,     3,
       6,     4,     7,     0,     9,     0,    10,     6,     1,     1,
       1,     3,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     4,     6,     4,     6,     6,     8,    10,     5,
       5,     3,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     3,     2,     3,     3,     3,     2,
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
#line 83 "limbaj.y"
                                                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1308 "limbaj.tab.c"
    break;

  case 3: /* global_declarations: decl  */
#line 86 "limbaj.y"
                            { currentScope=globalScope; }
#line 1314 "limbaj.tab.c"
    break;

  case 5: /* decl: TYPE ID ';'  */
#line 90 "limbaj.y"
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
#line 1330 "limbaj.tab.c"
    break;

  case 6: /* decl: TYPE ID LEFTP RIGHTP ';'  */
#line 102 "limbaj.y"
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
#line 1348 "limbaj.tab.c"
    break;

  case 7: /* decl: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 116 "limbaj.y"
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
#line 1368 "limbaj.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 132 "limbaj.y"
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
#line 1386 "limbaj.tab.c"
    break;

  case 9: /* decl: TYPE ID LEFTP RIGHTP LEFTB $@1 list RIGHTB  */
#line 146 "limbaj.y"
               {
                    if(currentScope)
                         currentScope=currentScope->getParent();
               }
#line 1395 "limbaj.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 151 "limbaj.y"
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
#line 1422 "limbaj.tab.c"
    break;

  case 11: /* decl: TYPE ID LEFTP list_param RIGHTP LEFTB $@2 list RIGHTB  */
#line 174 "limbaj.y"
               {
                   currentScope=currentScope->getParent();
               }
#line 1430 "limbaj.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 179 "limbaj.y"
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
#line 1446 "limbaj.tab.c"
    break;

  case 13: /* decl: BCLASS ID $@3 LEFTB class_body RIGHTB ECLASS  */
#line 191 "limbaj.y"
               {
                    currentScope=currentScope->getParent();
                    delete (yyvsp[-5].Str);
                    
               }
#line 1456 "limbaj.tab.c"
    break;

  case 14: /* decl: ID ID ';'  */
#line 197 "limbaj.y"
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
#line 1473 "limbaj.tab.c"
    break;

  case 15: /* list_param: TYPE ID  */
#line 212 "limbaj.y"
               {
                    //cout << currentScope->getName() << endl;
                    (yyval.Params)=new vector<Parameter>();
                    (yyval.Params)->push_back({*(yyvsp[-1].Str),*(yyvsp[0].Str)});
                    delete (yyvsp[-1].Str);
                    delete (yyvsp[0].Str);
               }
#line 1485 "limbaj.tab.c"
    break;

  case 16: /* list_param: list_param COMMA TYPE ID  */
#line 220 "limbaj.y"
               {
                    //cout << currentScope->getName() << endl;
                    (yyval.Params)=(yyvsp[-3].Params);
                    (yyval.Params)->push_back({*(yyvsp[-1].Str),*(yyvsp[0].Str)});
                    delete (yyvsp[-1].Str);
                    delete (yyvsp[0].Str);
               }
#line 1497 "limbaj.tab.c"
    break;

  case 19: /* class_member: TYPE ID ';'  */
#line 234 "limbaj.y"
               {
                    currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1507 "limbaj.tab.c"
    break;

  case 20: /* class_member: TYPE ID LEFTP list_param RIGHTP ';'  */
#line 241 "limbaj.y"
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
#line 1529 "limbaj.tab.c"
    break;

  case 21: /* class_member: acces_specifier TYPE ID ';'  */
#line 260 "limbaj.y"
               {
                    currentScope->addVariable(*(yyvsp[-1].Str),*(yyvsp[-2].Str),"-");
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[-1].Str);
               }
#line 1539 "limbaj.tab.c"
    break;

  case 22: /* class_member: acces_specifier TYPE ID LEFTP list_param RIGHTP ';'  */
#line 267 "limbaj.y"
                 {
                    currentScope->addFunction(*(yyvsp[-4].Str), *(yyvsp[-5].Str), *(yyvsp[-2].Params));
                    delete (yyvsp[-5].Str);
                    delete (yyvsp[-4].Str);
                 }
#line 1549 "limbaj.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 273 "limbaj.y"
              {
                    vector<Parameter> params;
                    currentScope->addFunction(*(yyvsp[-3].Str), *(yyvsp[-4].Str), params);
                    currentScope=currentScope->createChild("function "+*(yyvsp[-3].Str));
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-3].Str);
              }
#line 1561 "limbaj.tab.c"
    break;

  case 24: /* class_member: acces_specifier TYPE ID LEFTP RIGHTP LEFTB $@4 list RIGHTB  */
#line 281 "limbaj.y"
                 {
                    if(currentScope)
                         currentScope=currentScope->getParent();
                 }
#line 1570 "limbaj.tab.c"
    break;

  case 25: /* $@5: %empty  */
#line 286 "limbaj.y"
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
#line 1589 "limbaj.tab.c"
    break;

  case 26: /* class_member: acces_specifier TYPE ID LEFTP list_param RIGHTP LEFTB $@5 list RIGHTB  */
#line 301 "limbaj.y"
                 {
                    if(currentScope)
                         currentScope=currentScope->getParent();
                 }
#line 1598 "limbaj.tab.c"
    break;

  case 27: /* class_member: acces_specifier TYPE ID LEFTP RIGHTP ';'  */
#line 306 "limbaj.y"
                 {
                    currentScope->addFunction(*(yyvsp[-3].Str), *(yyvsp[-4].Str), {});
                    delete (yyvsp[-4].Str);
                    delete (yyvsp[-3].Str);
                 }
#line 1608 "limbaj.tab.c"
    break;

  case 42: /* assign: ID ASSIGN expression ';'  */
#line 337 "limbaj.y"
          {
               auto* entry=currentScope->lookup(*(yyvsp[-3].Str));
               if(!entry){
                    cout<<"Eroare de semantica: variabila '"<<*(yyvsp[-3].Str)<<"' nedeclarata la linia "<<yylineno<<endl;
                    errorCount++;
               }
               else if(*((yyvsp[-1].Expr)->type) != entry->varType){
                    cout<<"Eroare de semantica: asignare de tip incompatibil pentru variabila '"<<*(yyvsp[-3].Str)<<"' la linia "<<yylineno<<endl;
                    cout << "Tip variabila: " << entry->varType << ", tip expresie: " << *((yyvsp[-1].Expr)->type) << endl;
                    errorCount++;
               }

               ASTNode* root=new ASTNode(":=", new ASTNode(*(yyvsp[-3].Str)), (yyvsp[-1].Expr)->node);
               (yyvsp[-1].Expr)->node=nullptr;
               root->evaluate(currentScope);
               delete root;
               delete (yyvsp[-3].Str);
               freeExpr((yyvsp[-1].Expr));
          }
#line 1632 "limbaj.tab.c"
    break;

  case 43: /* assign: ID DOT ID ASSIGN expression ';'  */
#line 357 "limbaj.y"
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
                    else if(*((yyvsp[-1].Expr)->type) != member->varType)
                    {
                         cout<<"Eroare de semantica: asignare de tip incompatibil pentru membrul "<<*(yyvsp[-3].Str)<<" al clasei "<<obj->varType<<" la linia "<<yylineno<<endl;
                         errorCount++;
                    }
               }
               delete (yyvsp[-5].Str);
               delete (yyvsp[-3].Str);
               freeExpr((yyvsp[-1].Expr));
          }
#line 1662 "limbaj.tab.c"
    break;

  case 44: /* function_call: ID LEFTP call_parametres RIGHTP  */
#line 388 "limbaj.y"
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
#line 1694 "limbaj.tab.c"
    break;

  case 45: /* function_call: ID DOT ID LEFTP call_parametres RIGHTP  */
#line 416 "limbaj.y"
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
#line 1734 "limbaj.tab.c"
    break;

  case 46: /* if_statement: BIF bool_expression THEN statement EIF ';'  */
#line 454 "limbaj.y"
               {freeExpr((yyvsp[-4].Expr)); }
#line 1740 "limbaj.tab.c"
    break;

  case 47: /* if_statement: BIF bool_expression THEN list ELSE list EIF ';'  */
#line 456 "limbaj.y"
               {freeExpr((yyvsp[-6].Expr));}
#line 1746 "limbaj.tab.c"
    break;

  case 48: /* for_statement: BFOR ID FROM expression TO expression DO list EFOR ';'  */
#line 460 "limbaj.y"
               {
                    delete (yyvsp[-8].Str);
                    freeExpr((yyvsp[-6].Expr));
                    freeExpr((yyvsp[-4].Expr));
               }
#line 1756 "limbaj.tab.c"
    break;

  case 49: /* print_statement: PRINT LEFTP expression RIGHTP ';'  */
#line 468 "limbaj.y"
               {
                    ASTNode* root=new ASTNode("Print", (yyvsp[-2].Expr)->node, nullptr);
                    (yyvsp[-2].Expr)->node=nullptr;
                    root->evaluate(currentScope);
                    delete root;
                    freeExpr((yyvsp[-2].Expr));
               }
#line 1768 "limbaj.tab.c"
    break;

  case 50: /* print_statement: PRINT LEFTP bool_expression RIGHTP ';'  */
#line 476 "limbaj.y"
               {
                    ASTNode* root=new ASTNode("Print", (yyvsp[-2].Expr)->node, nullptr);
                    (yyvsp[-2].Expr)->node=nullptr;
                    root->evaluate(currentScope);
                    delete root;
                    freeExpr((yyvsp[-2].Expr));
               }
#line 1780 "limbaj.tab.c"
    break;

  case 51: /* return_statement: RETURN expression ';'  */
#line 485 "limbaj.y"
                                       {
                    SymbolEntry* f=currentScope->getParentFunction();
                    if(f && f->varType == "void"){
                         cout<<"Eroare de semantica: return intr-o functie void la linia "<<yylineno<<endl;
                         errorCount++;
                    }
                    freeExpr((yyvsp[-1].Expr));
                    }
#line 1793 "limbaj.tab.c"
    break;

  case 52: /* return_statement: RETURN ';'  */
#line 493 "limbaj.y"
                                 {
                    SymbolEntry* f=currentScope->getParentFunction();
                    if(f && f->varType != "void"){
                         cout<<"Eroare de semantica: return fara valoare intr-o functie non-void la linia "<<yylineno<<endl;
                         errorCount++;
                         }
                    }
#line 1805 "limbaj.tab.c"
    break;

  case 53: /* call_parametres: expression  */
#line 502 "limbaj.y"
                            {
                    (yyval.Params) = new vector<Parameter>();
                    Parameter p;
                    p.type=*((yyvsp[0].Expr)->type);
                    p.name="";
                    (yyval.Params)->push_back(p);
                    freeExpr((yyvsp[0].Expr));
}
#line 1818 "limbaj.tab.c"
    break;

  case 54: /* call_parametres: call_parametres COMMA expression  */
#line 510 "limbaj.y"
                                             {
                    (yyval.Params) = (yyvsp[-2].Params);
                    Parameter p;
                    p.type=*((yyvsp[0].Expr)->type);
                    p.name="";
                    (yyval.Params)->push_back(p);
                    freeExpr((yyvsp[0].Expr));
           }
#line 1831 "limbaj.tab.c"
    break;

  case 55: /* expression: INT_NR  */
#line 520 "limbaj.y"
                   { (yyval.Expr)=new ExprInfo{new ASTNode(to_string((yyvsp[0].Int))), new string("integer")};}
#line 1837 "limbaj.tab.c"
    break;

  case 56: /* expression: FLOAT_NR  */
#line 521 "limbaj.y"
                     { (yyval.Expr) = new ExprInfo{new ASTNode(to_string((yyvsp[0].Float))), new string("float")};}
#line 1843 "limbaj.tab.c"
    break;

  case 57: /* expression: STRING_S  */
#line 522 "limbaj.y"
                     { (yyval.Expr) = new ExprInfo{new ASTNode(*(yyvsp[0].Str)), new string("text")}; delete (yyvsp[0].Str);}
#line 1849 "limbaj.tab.c"
    break;

  case 58: /* expression: TRUE  */
#line 523 "limbaj.y"
                 { (yyval.Expr) = new ExprInfo{new ASTNode("true"), new string("bool")};}
#line 1855 "limbaj.tab.c"
    break;

  case 59: /* expression: FALSE  */
#line 524 "limbaj.y"
                  { (yyval.Expr) = new ExprInfo{new ASTNode("false"), new string("bool")};}
#line 1861 "limbaj.tab.c"
    break;

  case 60: /* expression: ID  */
#line 525 "limbaj.y"
               {
               if(!currentScope->lookup(*(yyvsp[0].Str))){
                    cout<<"Eroare de semantica: '"<<*(yyvsp[0].Str)<<"' nedeclarat la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{new ASTNode(*(yyvsp[0].Str)), new string("error")};
               }
               else{
                    SymbolEntry* entry=currentScope->lookup(*(yyvsp[0].Str));
                    (yyval.Expr) = new ExprInfo{new ASTNode(*(yyvsp[0].Str)), new string(entry->varType)};
               }
               delete (yyvsp[0].Str);
               }
#line 1878 "limbaj.tab.c"
    break;

  case 61: /* expression: ID DOT ID  */
#line 538 "limbaj.y"
               {
                    SymbolEntry* obj=currentScope->lookup(*(yyvsp[-2].Str));
                    if(!obj)
                    {
                         cout<<"Eroare de semantica: obiectul "<<*(yyvsp[-2].Str)<<" nedeclarat la linia "<<yylineno<<endl;
                         errorCount++;
                         (yyval.Expr) = new ExprInfo{new ASTNode("error"), new string("error")};
                    }
                    else
                    {
                         SymbolEntry* member=globalScope->lookupMember(obj->varType, *(yyvsp[0].Str));
                         if(!member)
                         {
                              cout<<"Eroare de semantica: clasa "<<obj->varType<<" nu are niciun membru "<<*(yyvsp[0].Str)<<" la linia "<<yylineno<<endl;
                              errorCount++;
                              (yyval.Expr) = new ExprInfo{new ASTNode("error"), new string("error")};
                         }
                         else{
                              (yyval.Expr) = new ExprInfo{new ASTNode(*(yyvsp[-2].Str)+string(".")+*(yyvsp[0].Str)), new string(member->varType)};
                         }
                    }
                    delete (yyvsp[-2].Str);
                    delete (yyvsp[0].Str);
               }
#line 1907 "limbaj.tab.c"
    break;

  case 62: /* expression: NEW ID  */
#line 563 "limbaj.y"
               {
                    (yyval.Expr) = new ExprInfo{
        new ASTNode("new " + *(yyvsp[0].Str)),
        new string(*(yyvsp[0].Str))
    };
                    delete (yyvsp[0].Str);
               }
#line 1919 "limbaj.tab.c"
    break;

  case 63: /* expression: expression PLUS expression  */
#line 571 "limbaj.y"
                                       {
               if(*((yyvsp[-2].Expr)->type) != *((yyvsp[0].Expr)->type)) {
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '+' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{ new ASTNode("+", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("error") };               
               }
               else {
                    (yyval.Expr) = new ExprInfo{new ASTNode("+", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string (*((yyvsp[-2].Expr)->type))};
               }
               (yyvsp[-2].Expr)->node=nullptr;
               (yyvsp[0].Expr)->node=nullptr;
               freeExpr((yyvsp[-2].Expr));
               freeExpr((yyvsp[0].Expr));
          }
#line 1938 "limbaj.tab.c"
    break;

  case 64: /* expression: expression MINUS expression  */
#line 585 "limbaj.y"
                                       {
               if(*((yyvsp[-2].Expr)->type) != *((yyvsp[0].Expr)->type)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '-' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{ new ASTNode("-", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("error") };              
               }
               else{
                    (yyval.Expr) = new ExprInfo{ new ASTNode("-", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string(*((yyvsp[-2].Expr)->type)) };
               }
               (yyvsp[-2].Expr)->node=nullptr;
               (yyvsp[0].Expr)->node=nullptr;
               freeExpr((yyvsp[-2].Expr));
               freeExpr((yyvsp[0].Expr));
          }
#line 1957 "limbaj.tab.c"
    break;

  case 65: /* expression: MINUS expression  */
#line 601 "limbaj.y"
          { 
               if(*((yyvsp[0].Expr)->type)!="integer" && *((yyvsp[0].Expr)->type)!="float"){
                    cout<<"Eroare de semantica: unary '-' pe tip invalid la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{ new ASTNode("uminus", (yyvsp[0].Expr)->node, nullptr), new string("error") };
               }
               else {
                    (yyval.Expr)=new ExprInfo{new ASTNode("uminus", (yyvsp[0].Expr)->node, nullptr), new string(*((yyvsp[0].Expr)->type))};
               }
               (yyvsp[0].Expr)->node=nullptr;
               freeExpr((yyvsp[0].Expr));
          }
#line 1974 "limbaj.tab.c"
    break;

  case 66: /* expression: expression MUL expression  */
#line 613 "limbaj.y"
                                     {
               if(*((yyvsp[-2].Expr)->type) != *((yyvsp[0].Expr)->type)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '*' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{ new ASTNode("*", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("error") };               
               }
               else{
                              (yyval.Expr) = new ExprInfo{ new ASTNode("*", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string(*((yyvsp[-2].Expr)->type)) };
               }
               (yyvsp[-2].Expr)->node=nullptr;
               (yyvsp[0].Expr)->node=nullptr;
               freeExpr((yyvsp[-2].Expr));
               freeExpr((yyvsp[0].Expr));
          }
#line 1993 "limbaj.tab.c"
    break;

  case 67: /* expression: expression DIV expression  */
#line 627 "limbaj.y"
                                     {
               if(*((yyvsp[-2].Expr)->type) != *((yyvsp[0].Expr)->type)){
                    cout<<"Eroare de semantica: tipuri incompatibile pentru operatorul '/' la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{ new ASTNode("/", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("error") };     
               }
               else {
                    (yyval.Expr) = new ExprInfo{ new ASTNode("/", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string(*((yyvsp[-2].Expr)->type)) };    
               }
               (yyvsp[-2].Expr)->node=nullptr;
               (yyvsp[0].Expr)->node=nullptr;
               freeExpr((yyvsp[-2].Expr));
               freeExpr((yyvsp[0].Expr));
          }
#line 2012 "limbaj.tab.c"
    break;

  case 68: /* expression: LEFTP expression RIGHTP  */
#line 641 "limbaj.y"
                                    { (yyval.Expr) =(yyvsp[-1].Expr);}
#line 2018 "limbaj.tab.c"
    break;

  case 69: /* expression: NOT expression  */
#line 662 "limbaj.y"
                           { 
               if(*((yyvsp[0].Expr)->type) != "bool"){
                    cout<<"Eroare de semantica: 'not' pe tip invalid la linia "<<yylineno<<endl;
                    errorCount++;
                    (yyval.Expr) = new ExprInfo{ new ASTNode("not", (yyvsp[0].Expr)->node, nullptr), new string("error") };
               } else {
                    (yyval.Expr) = new ExprInfo{ new ASTNode("not", (yyvsp[0].Expr)->node, nullptr), new string("bool") };
               }
               (yyvsp[0].Expr)->node=nullptr;
               freeExpr((yyvsp[0].Expr));
          }
#line 2034 "limbaj.tab.c"
    break;

  case 70: /* while_statement: BWHILE bool_expression DO list EWHILE  */
#line 676 "limbaj.y"
               {freeExpr((yyvsp[-3].Expr));}
#line 2040 "limbaj.tab.c"
    break;

  case 71: /* bool_expression: expression EQ expression  */
#line 680 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("==", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2052 "limbaj.tab.c"
    break;

  case 72: /* bool_expression: expression NEQ expression  */
#line 688 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("!=", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2064 "limbaj.tab.c"
    break;

  case 73: /* bool_expression: expression LT expression  */
#line 696 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("<", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2076 "limbaj.tab.c"
    break;

  case 74: /* bool_expression: expression LE expression  */
#line 704 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("<=", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2088 "limbaj.tab.c"
    break;

  case 75: /* bool_expression: expression GT expression  */
#line 712 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode(">", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2100 "limbaj.tab.c"
    break;

  case 76: /* bool_expression: expression GE expression  */
#line 720 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode(">=", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2112 "limbaj.tab.c"
    break;

  case 77: /* bool_expression: bool_expression AND bool_expression  */
#line 728 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("and", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2124 "limbaj.tab.c"
    break;

  case 78: /* bool_expression: bool_expression OR bool_expression  */
#line 736 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("or", (yyvsp[-2].Expr)->node, (yyvsp[0].Expr)->node), new string("bool")};
                    (yyvsp[-2].Expr)->node=nullptr;
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[-2].Expr));
                    freeExpr((yyvsp[0].Expr));
               }
#line 2136 "limbaj.tab.c"
    break;

  case 79: /* bool_expression: NOT bool_expression  */
#line 744 "limbaj.y"
               {
                    (yyval.Expr)=new ExprInfo{new ASTNode("not", (yyvsp[0].Expr)->node, nullptr), new string("bool")};
                    (yyvsp[0].Expr)->node=nullptr;
                    freeExpr((yyvsp[0].Expr));
               }
#line 2146 "limbaj.tab.c"
    break;

  case 80: /* bool_expression: LEFTP bool_expression RIGHTP  */
#line 750 "limbaj.y"
               {
                    (yyval.Expr)=(yyvsp[-1].Expr);
               }
#line 2154 "limbaj.tab.c"
    break;


#line 2158 "limbaj.tab.c"

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

#line 755 "limbaj.y"

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
