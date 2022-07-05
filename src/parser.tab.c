/* A Bison parser, made by GNU Bison 3.8.  */

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
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "sysy.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
#include "semantic.h"
#include "IR.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct node *,int);
extern int yylex ();
char filename[30];

#line 87 "parser.tab.c"

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
  YYSYMBOL_IntConst = 3,                   /* IntConst  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_RELOP = 5,                      /* RELOP  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_FloatConst = 9,                 /* FloatConst  */
  YYSYMBOL_CONST = 10,                     /* CONST  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_BREAK = 16,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 17,                  /* CONTINUE  */
  YYSYMBOL_LP = 18,                        /* LP  */
  YYSYMBOL_RP = 19,                        /* RP  */
  YYSYMBOL_LB = 20,                        /* LB  */
  YYSYMBOL_RB = 21,                        /* RB  */
  YYSYMBOL_LC = 22,                        /* LC  */
  YYSYMBOL_RC = 23,                        /* RC  */
  YYSYMBOL_COMMA = 24,                     /* COMMA  */
  YYSYMBOL_SEMI = 25,                      /* SEMI  */
  YYSYMBOL_ASSIGN = 26,                    /* ASSIGN  */
  YYSYMBOL_ADD = 27,                       /* ADD  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MUL = 29,                       /* MUL  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_SELF_ADD = 35,                  /* SELF_ADD  */
  YYSYMBOL_SELF_MINUS = 36,                /* SELF_MINUS  */
  YYSYMBOL_UMINUS = 37,                    /* UMINUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 38,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_Program = 40,                   /* Program  */
  YYSYMBOL_CompUnit = 41,                  /* CompUnit  */
  YYSYMBOL_Decl = 42,                      /* Decl  */
  YYSYMBOL_BType = 43,                     /* BType  */
  YYSYMBOL_VoidType = 44,                  /* VoidType  */
  YYSYMBOL_VarDecl = 45,                   /* VarDecl  */
  YYSYMBOL_VarDefList = 46,                /* VarDefList  */
  YYSYMBOL_VarDef = 47,                    /* VarDef  */
  YYSYMBOL_InitVal = 48,                   /* InitVal  */
  YYSYMBOL_InitValList = 49,               /* InitValList  */
  YYSYMBOL_FuncDef = 50,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 51,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 52,                /* FuncFParam  */
  YYSYMBOL_Arrays = 53,                    /* Arrays  */
  YYSYMBOL_Block = 54,                     /* Block  */
  YYSYMBOL_BlockItem = 55,                 /* BlockItem  */
  YYSYMBOL_Stmt = 56,                      /* Stmt  */
  YYSYMBOL_ForArgs = 57,                   /* ForArgs  */
  YYSYMBOL_ForArg = 58,                    /* ForArg  */
  YYSYMBOL_LVal = 59,                      /* LVal  */
  YYSYMBOL_Exp = 60,                       /* Exp  */
  YYSYMBOL_Args = 61                       /* Args  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    52,    53,    54,    55,    56,    58,    59,
      61,    62,    64,    66,    68,    69,    71,    72,    75,    76,
      77,    79,    80,    82,    83,    84,    85,    87,    88,    91,
      93,    94,    97,    99,   100,   101,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   115,   117,   118,
     120,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     142,   143
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
  "\"end of file\"", "error", "\"invalid token\"", "IntConst", "ID",
  "RELOP", "INT", "FLOAT", "VOID", "FloatConst", "CONST", "RETURN", "IF",
  "ELSE", "FOR", "WHILE", "BREAK", "CONTINUE", "LP", "RP", "LB", "RB",
  "LC", "RC", "COMMA", "SEMI", "ASSIGN", "ADD", "MINUS", "MUL", "DIV",
  "MOD", "AND", "OR", "NOT", "SELF_ADD", "SELF_MINUS", "UMINUS",
  "LOWER_THEN_ELSE", "$accept", "Program", "CompUnit", "Decl", "BType",
  "VoidType", "VarDecl", "VarDefList", "VarDef", "InitVal", "InitValList",
  "FuncDef", "FuncFParams", "FuncFParam", "Arrays", "Block", "BlockItem",
  "Stmt", "ForArgs", "ForArg", "LVal", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     247,    -4,  -109,  -109,  -109,    65,    36,   262,  -109,    41,
      44,  -109,  -109,  -109,    50,  -109,  -109,  -109,  -109,   -10,
      33,    42,    45,    69,   148,    47,    50,    56,    76,    67,
      86,    74,    77,  -109,    31,  -109,   148,   148,   148,   -20,
     156,   115,    33,  -109,    67,    79,    52,  -109,    45,    67,
      65,   135,  -109,   173,  -109,  -109,   148,  -109,  -109,   148,
      45,   148,   148,   148,   148,   148,   148,   148,   108,  -109,
     261,  -109,  -109,    67,   137,    89,    91,    96,    95,    98,
    -109,    52,  -109,   102,    52,   185,  -109,  -109,  -109,  -109,
     202,   109,  -109,   261,   193,  -109,    49,    49,  -109,  -109,
      49,   275,   167,  -109,    97,  -109,  -109,   214,   148,   148,
      88,   148,  -109,  -109,  -109,  -109,  -109,  -109,   148,  -109,
     115,   104,  -109,   231,   107,   261,  -109,   246,  -109,    97,
    -109,    88,   148,    88,  -109,   116,   110,  -109,    88,   148,
    -109,   126,  -109
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    10,    11,    12,     0,     0,     2,     3,     0,
       0,     9,     4,     7,     0,     8,     1,     5,     6,    30,
      14,     0,    30,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    27,    68,    30,    69,     0,     0,     0,    67,
       0,     0,    14,    13,     0,     0,    33,    23,    30,     0,
       0,     0,    50,     0,    63,    64,     0,    60,    61,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    15,    24,     0,     0,     0,     0,     0,     0,     0,
      38,    33,    37,     0,    33,     0,    29,    25,    28,    66,
      71,     0,    62,    51,    54,    31,    55,    56,    57,    58,
      59,    52,    53,    19,    21,    26,    44,     0,     0,    48,
       0,     0,    42,    43,    35,    32,    34,    36,     0,    65,
       0,     0,    45,     0,     0,    49,    46,     0,    70,    21,
      20,     0,    48,     0,    22,    39,     0,    41,     0,    48,
      40,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,     4,     2,  -109,   129,   105,   122,   -67,
      21,   149,   -21,  -109,   -14,   -26,   -62,  -105,  -109,  -108,
    -109,   -24,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,    81,    14,    10,    11,    27,    20,    69,
     121,    12,    31,    32,    25,    82,    83,    84,   110,   124,
      39,    85,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,   104,     9,    47,     8,   126,    56,    45,    23,     9,
      24,    17,    53,    54,    55,    57,    58,    70,    72,   114,
      52,    13,   116,    87,   136,    30,   135,    90,   137,    88,
      30,   141,    93,   140,    86,    94,    16,    96,    97,    98,
      99,   100,   101,   102,    70,    19,    95,   105,    21,    51,
     107,    24,    30,   129,    22,    33,    34,    26,     2,     3,
      28,    35,     5,    74,    75,    24,    76,    77,    78,    79,
      36,     2,     3,    41,    46,     2,     3,    80,    63,    64,
      37,    43,     2,     3,   123,   125,    38,   127,    29,    46,
      48,    33,    34,    49,    90,    44,    70,    35,    73,    74,
      75,    50,    76,    77,    78,    79,    36,   108,   125,   109,
      46,    33,    34,    80,   111,   125,    37,    35,    33,    34,
     112,   120,    38,   113,    35,   115,    36,   130,   119,   138,
      68,   103,   132,    36,    15,   139,    37,    68,    33,    34,
      33,    34,    38,    37,    35,   142,    35,    71,    42,    38,
     134,    33,    34,    36,    89,    36,    18,    35,   128,     0,
       0,    59,   106,    37,     0,    37,    36,     0,     0,    38,
       0,    38,    59,     0,     0,     0,    37,    60,    59,     0,
       0,     0,    38,    61,    62,    63,    64,    65,    66,    67,
      59,     0,    92,     0,    61,    62,    63,    64,    65,    66,
      61,    62,    63,    64,    65,    66,    67,    59,     0,     0,
     117,     0,    61,    62,    63,    64,    65,    66,    67,    59,
      61,    62,    63,    64,    65,     0,   118,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    59,     0,     0,   122,
       0,    61,    62,    63,    64,    65,    66,    67,     1,     0,
     131,    59,     0,     2,     3,     4,     0,     5,    61,    62,
      63,    64,    65,    66,    67,   133,    59,     0,     2,     3,
       4,     0,     5,    61,    62,    63,    64,    65,    66,    67,
      59,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65
};

static const yytype_int16 yycheck[] =
{
      24,    68,     0,    29,     0,   110,    26,    28,    18,     7,
      20,     7,    36,    37,    38,    35,    36,    41,    44,    81,
      34,    25,    84,    49,   132,    23,   131,    51,   133,    50,
      28,   139,    56,   138,    48,    59,     0,    61,    62,    63,
      64,    65,    66,    67,    68,     4,    60,    73,     4,    18,
      74,    20,    50,   120,     4,     3,     4,    24,     6,     7,
      18,     9,    10,    11,    12,    20,    14,    15,    16,    17,
      18,     6,     7,    26,    22,     6,     7,    25,    29,    30,
      28,    25,     6,     7,   108,   109,    34,   111,    19,    22,
       4,     3,     4,    19,   118,    19,   120,     9,    19,    11,
      12,    24,    14,    15,    16,    17,    18,    18,   132,    18,
      22,     3,     4,    25,    18,   139,    28,     9,     3,     4,
      25,    24,    34,    25,     9,    23,    18,    23,    19,    13,
      22,    23,    25,    18,     5,    25,    28,    22,     3,     4,
       3,     4,    34,    28,     9,    19,     9,    42,    26,    34,
     129,     3,     4,    18,    19,    18,     7,     9,   118,    -1,
      -1,     5,    25,    28,    -1,    28,    18,    -1,    -1,    34,
      -1,    34,     5,    -1,    -1,    -1,    28,    21,     5,    -1,
      -1,    -1,    34,    27,    28,    29,    30,    31,    32,    33,
       5,    -1,    19,    -1,    27,    28,    29,    30,    31,    32,
      27,    28,    29,    30,    31,    32,    33,     5,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,     5,
      27,    28,    29,    30,    31,    -1,    24,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,     5,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,     1,    -1,
      19,     5,    -1,     6,     7,     8,    -1,    10,    27,    28,
      29,    30,    31,    32,    33,    19,     5,    -1,     6,     7,
       8,    -1,    10,    27,    28,    29,    30,    31,    32,    33,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,     7,     8,    10,    40,    41,    42,    43,
      44,    45,    50,    25,    43,    45,     0,    42,    50,     4,
      47,     4,     4,    18,    20,    53,    24,    46,    18,    19,
      43,    51,    52,     3,     4,     9,    18,    28,    34,    59,
      60,    26,    47,    25,    19,    51,    22,    54,     4,    19,
      24,    18,    53,    60,    60,    60,    26,    35,    36,     5,
      21,    27,    28,    29,    30,    31,    32,    33,    22,    48,
      60,    46,    54,    19,    11,    12,    14,    15,    16,    17,
      25,    42,    54,    55,    56,    60,    53,    54,    51,    19,
      60,    61,    19,    60,    60,    53,    60,    60,    60,    60,
      60,    60,    60,    23,    48,    54,    25,    60,    18,    18,
      57,    18,    25,    25,    55,    23,    55,    25,    24,    19,
      24,    49,    25,    60,    58,    60,    56,    60,    61,    48,
      23,    19,    25,    19,    49,    56,    58,    56,    13,    25,
      56,    58,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    41,    42,    42,
      43,    43,    44,    45,    46,    46,    47,    47,    48,    48,
      48,    49,    49,    50,    50,    50,    50,    51,    51,    52,
      53,    53,    54,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    58,    58,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     4,     0,     3,     2,     4,     1,     2,
       4,     0,     3,     5,     5,     6,     6,     1,     3,     3,
       0,     4,     3,     0,     2,     2,     2,     1,     1,     5,
       7,     5,     2,     2,     2,     3,     3,     7,     0,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     2,     2,     4,     3,     1,     1,     1,
       3,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: CompUnit  */
#line 51 "sysy.y"
                       {initTable(); semantic_Analysis((yyvsp[0].ptr));displaycode(work((yyvsp[0].ptr)));}
#line 1646 "parser.tab.c"
    break;

  case 3: /* CompUnit: Decl  */
#line 52 "sysy.y"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1652 "parser.tab.c"
    break;

  case 4: /* CompUnit: FuncDef  */
#line 53 "sysy.y"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1658 "parser.tab.c"
    break;

  case 5: /* CompUnit: CompUnit Decl  */
#line 54 "sysy.y"
                            {(yyval.ptr)=mknode(COMP_UNIT,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1664 "parser.tab.c"
    break;

  case 6: /* CompUnit: CompUnit FuncDef  */
#line 55 "sysy.y"
                               {(yyval.ptr)=mknode(COMP_UNIT,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1670 "parser.tab.c"
    break;

  case 7: /* CompUnit: error SEMI  */
#line 56 "sysy.y"
                          {(yyval.ptr)=NULL; }
#line 1676 "parser.tab.c"
    break;

  case 8: /* Decl: CONST VarDecl  */
#line 58 "sysy.y"
                            {(yyval.ptr)=(yyvsp[0].ptr); (yyval.ptr)->type = CONST;}
#line 1682 "parser.tab.c"
    break;

  case 9: /* Decl: VarDecl  */
#line 59 "sysy.y"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1688 "parser.tab.c"
    break;

  case 10: /* BType: INT  */
#line 61 "sysy.y"
                  {(yyval.ptr)=mknode(INT_TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type= INT;}
#line 1694 "parser.tab.c"
    break;

  case 11: /* BType: FLOAT  */
#line 62 "sysy.y"
                    {(yyval.ptr)=mknode(FLOAT_TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type= FLOAT;}
#line 1700 "parser.tab.c"
    break;

  case 12: /* VoidType: VOID  */
#line 64 "sysy.y"
                 {(yyval.ptr)=mknode(VOID_TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type=VOID;}
#line 1706 "parser.tab.c"
    break;

  case 13: /* VarDecl: BType VarDef VarDefList SEMI  */
#line 66 "sysy.y"
                                           {(yyval.ptr)=mknode(VAR_DECL,(yyvsp[-3].ptr),(yyvsp[-2].ptr),(yyvsp[-1].ptr),yylineno); (yyval.ptr)->type = (yyvsp[-3].ptr)->type; }
#line 1712 "parser.tab.c"
    break;

  case 14: /* VarDefList: %empty  */
#line 68 "sysy.y"
            {(yyval.ptr)=NULL;}
#line 1718 "parser.tab.c"
    break;

  case 15: /* VarDefList: COMMA VarDef VarDefList  */
#line 69 "sysy.y"
                                      {(yyval.ptr)=mknode(VAR_DEF_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1724 "parser.tab.c"
    break;

  case 16: /* VarDef: ID Arrays  */
#line 71 "sysy.y"
                        {(yyval.ptr)=mknode(VAR_DEF,(yyvsp[0].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1730 "parser.tab.c"
    break;

  case 17: /* VarDef: ID Arrays ASSIGN InitVal  */
#line 72 "sysy.y"
                                       {(yyval.ptr)=mknode(VAR_DEF,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1736 "parser.tab.c"
    break;

  case 18: /* InitVal: Exp  */
#line 75 "sysy.y"
                  {(yyval.ptr)=mknode(INIT_VAL,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 1742 "parser.tab.c"
    break;

  case 19: /* InitVal: LC RC  */
#line 76 "sysy.y"
                    {(yyval.ptr)=NULL;}
#line 1748 "parser.tab.c"
    break;

  case 20: /* InitVal: LC InitVal InitValList RC  */
#line 77 "sysy.y"
                                        {(yyval.ptr)=mknode(INIT_VAL_LIST,(yyvsp[-2].ptr),(yyvsp[-1].ptr),NULL,yylineno);}
#line 1754 "parser.tab.c"
    break;

  case 21: /* InitValList: %empty  */
#line 79 "sysy.y"
             {(yyval.ptr)=NULL;}
#line 1760 "parser.tab.c"
    break;

  case 22: /* InitValList: COMMA InitVal InitValList  */
#line 80 "sysy.y"
                                       {(yyval.ptr)=mknode(INIT_VAL_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1766 "parser.tab.c"
    break;

  case 23: /* FuncDef: BType ID LP RP Block  */
#line 82 "sysy.y"
                                  {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[-4].ptr),NULL,(yyvsp[0].ptr),yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1772 "parser.tab.c"
    break;

  case 24: /* FuncDef: VoidType ID LP RP Block  */
#line 83 "sysy.y"
                                      {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[-4].ptr),NULL,(yyvsp[0].ptr),yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1778 "parser.tab.c"
    break;

  case 25: /* FuncDef: BType ID LP FuncFParams RP Block  */
#line 84 "sysy.y"
                                              {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[-5].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr),yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-4].type_id));}
#line 1784 "parser.tab.c"
    break;

  case 26: /* FuncDef: VoidType ID LP FuncFParams RP Block  */
#line 85 "sysy.y"
                                                 {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[-5].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr),yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-4].type_id));}
#line 1790 "parser.tab.c"
    break;

  case 27: /* FuncFParams: FuncFParam  */
#line 87 "sysy.y"
                         {(yyval.ptr)=mknode(PARAM_LIST,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 1796 "parser.tab.c"
    break;

  case 28: /* FuncFParams: FuncFParam COMMA FuncFParams  */
#line 88 "sysy.y"
                                           {(yyval.ptr)=mknode(PARAM_LIST,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1802 "parser.tab.c"
    break;

  case 29: /* FuncFParam: BType ID Arrays  */
#line 91 "sysy.y"
                              {(yyval.ptr)=mknode(FUNC_PARAM,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1808 "parser.tab.c"
    break;

  case 30: /* Arrays: %empty  */
#line 93 "sysy.y"
              {(yyval.ptr)=NULL;}
#line 1814 "parser.tab.c"
    break;

  case 31: /* Arrays: LB Exp RB Arrays  */
#line 94 "sysy.y"
                              {(yyval.ptr)=mknode(ARRAYS,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1820 "parser.tab.c"
    break;

  case 32: /* Block: LC BlockItem RC  */
#line 97 "sysy.y"
                            {(yyval.ptr)=mknode(BLOCK,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 1826 "parser.tab.c"
    break;

  case 33: /* BlockItem: %empty  */
#line 99 "sysy.y"
              {(yyval.ptr)=NULL; }
#line 1832 "parser.tab.c"
    break;

  case 34: /* BlockItem: Stmt BlockItem  */
#line 100 "sysy.y"
                            {(yyval.ptr)=mknode(BLOCK_ITEM_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1838 "parser.tab.c"
    break;

  case 35: /* BlockItem: Decl BlockItem  */
#line 101 "sysy.y"
                             {(yyval.ptr)=mknode(BLOCK_ITEM_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1844 "parser.tab.c"
    break;

  case 36: /* Stmt: Exp SEMI  */
#line 103 "sysy.y"
                      {(yyval.ptr)=mknode(EXP_STMT,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 1850 "parser.tab.c"
    break;

  case 37: /* Stmt: Block  */
#line 104 "sysy.y"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1856 "parser.tab.c"
    break;

  case 38: /* Stmt: SEMI  */
#line 105 "sysy.y"
                   {(yyval.ptr)=NULL;}
#line 1862 "parser.tab.c"
    break;

  case 39: /* Stmt: IF LP Exp RP Stmt  */
#line 106 "sysy.y"
                                                      {(yyval.ptr)=mknode(IF_THEN,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1868 "parser.tab.c"
    break;

  case 40: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 107 "sysy.y"
                                          {(yyval.ptr)=mknode(IF_THEN_ELSE,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr),yylineno);}
#line 1874 "parser.tab.c"
    break;

  case 41: /* Stmt: WHILE LP Exp RP Stmt  */
#line 108 "sysy.y"
                                   {(yyval.ptr)=mknode(WHILE_STMT,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1880 "parser.tab.c"
    break;

  case 42: /* Stmt: BREAK SEMI  */
#line 109 "sysy.y"
                         {(yyval.ptr)=mknode(BREAK_STMT,NULL,NULL,NULL,yylineno);}
#line 1886 "parser.tab.c"
    break;

  case 43: /* Stmt: CONTINUE SEMI  */
#line 110 "sysy.y"
                            {(yyval.ptr)=mknode(CONTINUE_STMT,NULL,NULL,NULL,yylineno);}
#line 1892 "parser.tab.c"
    break;

  case 44: /* Stmt: RETURN SEMI  */
#line 111 "sysy.y"
                          {(yyval.ptr)=mknode(RETURN_STMT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type = VOID;}
#line 1898 "parser.tab.c"
    break;

  case 45: /* Stmt: RETURN Exp SEMI  */
#line 112 "sysy.y"
                              {(yyval.ptr)=mknode(RETURN_STMT,(yyvsp[-1].ptr),NULL,NULL,yylineno);(yyval.ptr)->type = (yyvsp[-1].ptr)->type;}
#line 1904 "parser.tab.c"
    break;

  case 46: /* Stmt: FOR ForArgs Stmt  */
#line 113 "sysy.y"
                               {(yyval.ptr)=mknode(FOR_STMT,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1910 "parser.tab.c"
    break;

  case 47: /* ForArgs: LP ForArg SEMI ForArg SEMI ForArg RP  */
#line 115 "sysy.y"
                                                   {(yyval.ptr)=mknode(FOR_ARGS,(yyvsp[-5].ptr),(yyvsp[-3].ptr),(yyvsp[-1].ptr),yylineno);}
#line 1916 "parser.tab.c"
    break;

  case 48: /* ForArg: %empty  */
#line 117 "sysy.y"
              {(yyval.ptr)=NULL;}
#line 1922 "parser.tab.c"
    break;

  case 49: /* ForArg: Exp  */
#line 118 "sysy.y"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1928 "parser.tab.c"
    break;

  case 50: /* LVal: ID Arrays  */
#line 120 "sysy.y"
                       {(yyval.ptr)=mknode(LVAL,(yyvsp[0].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1934 "parser.tab.c"
    break;

  case 51: /* Exp: LVal ASSIGN Exp  */
#line 122 "sysy.y"
                              {(yyval.ptr)=mknode(ASSIGN_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"=");}
#line 1940 "parser.tab.c"
    break;

  case 52: /* Exp: Exp AND Exp  */
#line 123 "sysy.y"
                          {(yyval.ptr)=mknode(AND_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"AND");}
#line 1946 "parser.tab.c"
    break;

  case 53: /* Exp: Exp OR Exp  */
#line 124 "sysy.y"
                          {(yyval.ptr)=mknode(OR_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"OR");}
#line 1952 "parser.tab.c"
    break;

  case 54: /* Exp: Exp RELOP Exp  */
#line 125 "sysy.y"
                             {(yyval.ptr)=mknode(RELOP_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1958 "parser.tab.c"
    break;

  case 55: /* Exp: Exp ADD Exp  */
#line 126 "sysy.y"
                           {(yyval.ptr)=mknode(ADD_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"+");}
#line 1964 "parser.tab.c"
    break;

  case 56: /* Exp: Exp MINUS Exp  */
#line 127 "sysy.y"
                             {(yyval.ptr)=mknode(MINUS_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"-");}
#line 1970 "parser.tab.c"
    break;

  case 57: /* Exp: Exp MUL Exp  */
#line 128 "sysy.y"
                            {(yyval.ptr)=mknode(MUL_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"*");}
#line 1976 "parser.tab.c"
    break;

  case 58: /* Exp: Exp DIV Exp  */
#line 129 "sysy.y"
                            {(yyval.ptr)=mknode(DIV_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"/");}
#line 1982 "parser.tab.c"
    break;

  case 59: /* Exp: Exp MOD Exp  */
#line 130 "sysy.y"
                              {(yyval.ptr)=mknode(MOD_EXP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"%");}
#line 1988 "parser.tab.c"
    break;

  case 60: /* Exp: LVal SELF_ADD  */
#line 131 "sysy.y"
                             {(yyval.ptr)=mknode(SELF_ADD_EXP,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 1994 "parser.tab.c"
    break;

  case 61: /* Exp: LVal SELF_MINUS  */
#line 132 "sysy.y"
                              {(yyval.ptr)=mknode(SELF_MINUS_EXP,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 2000 "parser.tab.c"
    break;

  case 62: /* Exp: LP Exp RP  */
#line 133 "sysy.y"
                             {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2006 "parser.tab.c"
    break;

  case 63: /* Exp: MINUS Exp  */
#line 134 "sysy.y"
                                        {(yyval.ptr)=mknode(UMINUS_EXP,(yyvsp[0].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"UMINUS");(yyval.ptr)->type = (yyvsp[0].ptr)->type;}
#line 2012 "parser.tab.c"
    break;

  case 64: /* Exp: NOT Exp  */
#line 135 "sysy.y"
                            {(yyval.ptr)=mknode(NOT_EXP,(yyvsp[0].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"NOT");(yyval.ptr)->type = (yyvsp[0].ptr)->type;}
#line 2018 "parser.tab.c"
    break;

  case 65: /* Exp: ID LP Args RP  */
#line 136 "sysy.y"
                             {(yyval.ptr)=mknode(FUNC_CALL,(yyvsp[-1].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 2024 "parser.tab.c"
    break;

  case 66: /* Exp: ID LP RP  */
#line 137 "sysy.y"
                             {(yyval.ptr)=mknode(FUNC_CALL,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 2030 "parser.tab.c"
    break;

  case 67: /* Exp: LVal  */
#line 138 "sysy.y"
                               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2036 "parser.tab.c"
    break;

  case 68: /* Exp: IntConst  */
#line 139 "sysy.y"
                       {(yyval.ptr)=mknode(INT_CONST,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_int=(yyvsp[0].type_int);(yyval.ptr)->type=INT;}
#line 2042 "parser.tab.c"
    break;

  case 69: /* Exp: FloatConst  */
#line 140 "sysy.y"
                         {(yyval.ptr)=mknode(FLOAT_CONST,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_float=(yyvsp[0].type_float);(yyval.ptr)->type=FLOAT;}
#line 2048 "parser.tab.c"
    break;

  case 70: /* Args: Exp COMMA Args  */
#line 142 "sysy.y"
                                {(yyval.ptr)=mknode(ARGS,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 2054 "parser.tab.c"
    break;

  case 71: /* Args: Exp  */
#line 143 "sysy.y"
                                {(yyval.ptr)=mknode(ARGS,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 2060 "parser.tab.c"
    break;


#line 2064 "parser.tab.c"

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
  *++yylsp = yyloc;

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
          = {yyssp, yytoken, &yylloc};
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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
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

#line 147 "sysy.y"


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return -1;
	/* char A[30] = "cat ";
	strcpy(A+4, argv[1]); */
	/* system(A); //打印文件内容*/
	strcpy(filename,strrchr(argv[1],'/')+1);
    /* C 库函数 char *strrchr(const char *str, int c) 在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置 */
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
	fprintf(stderr, "%s:%d ",filename, yylloc.first_line);
    // fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	
