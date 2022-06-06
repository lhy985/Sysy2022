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
#line 3 "mysysy.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct node *,int);
int yylex ();

#line 84 "parser.tab.c"

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
  YYSYMBOL_FloatConst = 8,                 /* FloatConst  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
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
  YYSYMBOL_ASSIGNOP = 26,                  /* ASSIGNOP  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_STAR = 29,                      /* STAR  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_LEX_ERR = 34,                   /* LEX_ERR  */
  YYSYMBOL_UMINUS = 35,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_Program = 37,                   /* Program  */
  YYSYMBOL_CompUnit = 38,                  /* CompUnit  */
  YYSYMBOL_Decl = 39,                      /* Decl  */
  YYSYMBOL_ConstDecl = 40,                 /* ConstDecl  */
  YYSYMBOL_ConstDefLoop = 41,              /* ConstDefLoop  */
  YYSYMBOL_BType = 42,                     /* BType  */
  YYSYMBOL_ConstDef = 43,                  /* ConstDef  */
  YYSYMBOL_ConstExpLoop = 44,              /* ConstExpLoop  */
  YYSYMBOL_ConstInitVal = 45,              /* ConstInitVal  */
  YYSYMBOL_ConstInitValLoop = 46,          /* ConstInitValLoop  */
  YYSYMBOL_VarDecl = 47,                   /* VarDecl  */
  YYSYMBOL_VarDefLoop = 48,                /* VarDefLoop  */
  YYSYMBOL_VarDef = 49,                    /* VarDef  */
  YYSYMBOL_InitVal = 50,                   /* InitVal  */
  YYSYMBOL_InitValLoop = 51,               /* InitValLoop  */
  YYSYMBOL_FuncDef = 52,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 53,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 54,                /* FuncFParam  */
  YYSYMBOL_ExpLoop = 55,                   /* ExpLoop  */
  YYSYMBOL_Block = 56,                     /* Block  */
  YYSYMBOL_BlockItemLoop = 57,             /* BlockItemLoop  */
  YYSYMBOL_BlockItem = 58,                 /* BlockItem  */
  YYSYMBOL_Stmt = 59,                      /* Stmt  */
  YYSYMBOL_LVal = 60,                      /* LVal  */
  YYSYMBOL_Exp = 61,                       /* Exp  */
  YYSYMBOL_ConstExp = 62,                  /* ConstExp  */
  YYSYMBOL_Number = 63,                    /* Number  */
  YYSYMBOL_Args = 64                       /* Args  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    50,    52,    53,    55,
      57,    58,    60,    61,    63,    65,    66,    68,    69,    70,
      72,    73,    75,    77,    78,    80,    81,    84,    85,    86,
      88,    89,    91,    92,    93,    94,    99,   100,   103,   104,
     106,   107,   110,   112,   113,   115,   116,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   131,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   149,   150,   151,   152,   153,
     154,   155,   157,   158,   160,   161
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
  "RELOP", "INT", "FLOAT", "FloatConst", "VOID", "CONST", "RETURN", "IF",
  "ELSE", "FOR", "WHILE", "BREAK", "CONTINUE", "LP", "RP", "LB", "RB",
  "LC", "RC", "COMMA", "SEMI", "ASSIGNOP", "PLUS", "MINUS", "STAR", "DIV",
  "AND", "OR", "NOT", "LEX_ERR", "UMINUS", "$accept", "Program",
  "CompUnit", "Decl", "ConstDecl", "ConstDefLoop", "BType", "ConstDef",
  "ConstExpLoop", "ConstInitVal", "ConstInitValLoop", "VarDecl",
  "VarDefLoop", "VarDef", "InitVal", "InitValLoop", "FuncDef",
  "FuncFParams", "FuncFParam", "ExpLoop", "Block", "BlockItemLoop",
  "BlockItem", "Stmt", "LVal", "Exp", "ConstExp", "Number", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-41)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     259,  -144,  -144,    12,    86,    37,   259,  -144,  -144,    36,
    -144,  -144,    44,    61,  -144,  -144,  -144,    43,    64,    70,
      95,    88,   117,    10,    96,   129,   115,   122,   157,   102,
     139,   142,    61,   151,   122,   158,  -144,  -144,    10,    10,
     211,  -144,    83,    95,    64,  -144,    92,  -144,   165,   122,
      86,   345,    88,  -144,  -144,   122,    99,  -144,    88,    10,
      10,    10,    10,   168,   163,   147,   163,   163,  -144,   302,
    -144,  -144,   134,   154,   172,   175,   176,   174,   177,  -144,
    -144,   129,  -144,   160,    92,  -144,   169,   179,   209,  -144,
    -144,   332,  -144,    54,  -144,  -144,  -144,  -144,   101,   101,
    -144,  -144,   170,    27,  -144,   173,  -144,  -144,   163,   163,
     163,   163,   163,   163,   163,   163,   163,  -144,  -144,   187,
     163,   129,   163,  -144,  -144,  -144,  -144,   163,  -144,   180,
    -144,   207,  -144,   196,   214,  -144,    83,   213,   252,   315,
     108,   108,  -144,  -144,   347,   224,   216,  -144,   230,   242,
     245,   258,  -144,   345,   247,   163,  -144,   173,  -144,   180,
     131,   163,   131,  -144,   207,  -144,  -144,  -144,  -144,   221,
     273,  -144,  -144,   131,   163,  -144,   287,   131,  -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,    13,     0,     0,     0,     2,     3,     7,     0,
       8,     4,     0,     0,     1,     5,     6,    15,    23,     0,
      15,    10,     0,     0,    25,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,    82,    83,     0,     0,
       0,    81,     0,    15,    23,    22,    43,    33,    38,     0,
       0,     0,    10,     9,    32,     0,     0,    80,    10,     0,
       0,     0,     0,    73,     0,     0,     0,     0,    26,    27,
      74,    24,    73,     0,     0,     0,     0,     0,     0,    49,
      45,     0,    48,     0,    43,    46,     0,     0,     0,    35,
      37,     0,    14,    17,    11,    34,    79,    16,    75,    76,
      77,    78,     0,     0,    28,    30,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    56,     0,
       0,     0,     0,    54,    55,    42,    44,     0,    50,    40,
      18,    20,    72,    85,     0,    68,     0,     0,    63,    60,
      64,    65,    66,    67,    61,    62,     0,    57,     0,     0,
       0,     0,    39,     0,     0,     0,    71,    30,    29,    40,
       0,     0,     0,    47,    20,    19,    84,    31,    41,    51,
       0,    53,    21,     0,     0,    52,     0,     0,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,     9,  -144,    -7,     6,   261,   271,   -89,
     130,  -144,   251,   -24,   -61,   140,   290,   -14,  -144,  -126,
     -20,   225,  -144,  -143,  -144,   -42,   -18,   -12,   153
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    80,     8,    33,    28,    21,    24,    92,
     154,    10,    26,    18,    68,   137,    11,    29,    30,   117,
      82,    83,    84,    85,    86,    87,    93,    70,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    44,   131,   152,   105,    40,     9,    47,    35,     7,
      13,    41,     9,    36,    54,    15,    12,   169,    37,   171,
      56,    57,   103,    69,   106,   107,    41,    41,    38,    89,
     175,   119,   108,   168,   178,    95,    90,    14,    39,    41,
      17,    98,    99,   100,   101,    94,   135,    41,    41,    41,
      41,    97,    81,   109,   110,   111,   112,   113,   114,   115,
     133,    22,    19,    23,   164,    20,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   157,     1,     2,   148,    41,
     150,    59,    60,    61,    62,   151,    36,    63,    25,    27,
      81,    37,     1,     2,    69,    36,    72,   149,     1,     2,
      37,    64,     4,    73,    74,    65,    75,    76,    77,    78,
      64,    66,    32,   133,    46,    23,    67,    79,    96,   170,
      66,    49,    42,     1,     2,    67,    59,    60,    61,    62,
      61,    62,   176,    43,    36,    72,    34,   112,   113,    37,
      45,    41,    73,    74,    46,    75,    76,    77,    78,    64,
      36,    63,   102,    46,   116,    37,    79,    36,    63,    66,
     -40,    48,    37,    50,    67,    64,    36,    63,    51,    65,
     104,    37,    64,    36,    63,    66,    53,    55,    37,   118,
      67,    64,    66,   125,   108,    88,   102,    67,    64,   132,
     120,    66,   108,   121,   122,   127,    67,   136,    66,   123,
     116,   108,   124,    67,   128,   109,   110,   111,   112,   113,
     114,   115,   147,   109,   110,   111,   112,   113,   114,   115,
     155,   108,   109,   110,   111,   112,   113,   114,   115,   108,
     129,   153,    58,   156,   173,   108,   158,   159,    59,    60,
      61,    62,   109,   110,   111,   112,   113,   114,   115,   160,
     108,   110,   111,   112,   113,   114,   109,   110,   111,   112,
     113,   114,   115,   108,   162,     1,     2,   161,     3,     4,
     165,   109,   110,   111,   112,   113,   114,   115,   108,   110,
     111,   112,   113,   163,   109,   110,   111,   112,   113,   114,
     115,    31,   108,    52,   172,    71,    16,   167,   174,   109,
     110,   111,   112,   113,   114,   115,   177,   108,   166,   126,
       0,     0,     0,   109,   110,   111,   112,   113,   114,   115,
     108,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   113,   114,   115,    36,     0,     0,     0,     0,
      37,     0,   110,   111,   112,   113,   114,   115,    36,     0,
      38,     0,   108,    37,    91,   130,     0,     0,     0,     0,
      39,     0,     0,    38,     0,     0,     0,    91,     0,     0,
       0,     0,     0,    39,   110,   111,   112,   113
};

static const yytype_int16 yycheck[] =
{
      42,    25,    91,   129,    65,    23,     0,    27,    22,     0,
       4,    23,     6,     3,    34,     6,     4,   160,     8,   162,
      38,    39,    64,    65,    66,    67,    38,    39,    18,    49,
     173,    73,     5,   159,   177,    55,    50,     0,    28,    51,
       4,    59,    60,    61,    62,    52,    19,    59,    60,    61,
      62,    58,    46,    26,    27,    28,    29,    30,    31,    32,
     102,    18,    18,    20,   153,     4,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   136,     6,     7,   120,    91,
     122,    27,    28,    29,    30,   127,     3,     4,    24,    19,
      84,     8,     6,     7,   136,     3,     4,   121,     6,     7,
       8,    18,    10,    11,    12,    22,    14,    15,    16,    17,
      18,    28,    24,   155,    22,    20,    33,    25,    19,   161,
      28,    19,    26,     6,     7,    33,    27,    28,    29,    30,
      29,    30,   174,     4,     3,     4,    19,    29,    30,     8,
      25,   153,    11,    12,    22,    14,    15,    16,    17,    18,
       3,     4,    18,    22,    20,     8,    25,     3,     4,    28,
      26,     4,     8,    24,    33,    18,     3,     4,    26,    22,
      23,     8,    18,     3,     4,    28,    25,    19,     8,    25,
      33,    18,    28,    23,     5,    20,    18,    33,    18,    19,
      18,    28,     5,    18,    18,    26,    33,    24,    28,    25,
      20,     5,    25,    33,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      24,     5,    26,    27,    28,    29,    30,    31,    32,     5,
      21,    24,    21,    19,    13,     5,    23,    21,    27,    28,
      29,    30,    26,    27,    28,    29,    30,    31,    32,    19,
       5,    27,    28,    29,    30,    31,    26,    27,    28,    29,
      30,    31,    32,     5,    19,     6,     7,    25,     9,    10,
      23,    26,    27,    28,    29,    30,    31,    32,     5,    27,
      28,    29,    30,    25,    26,    27,    28,    29,    30,    31,
      32,    20,     5,    32,   164,    44,     6,   157,    25,    26,
      27,    28,    29,    30,    31,    32,    19,     5,   155,    84,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,     3,    -1,    -1,    -1,    -1,
       8,    -1,    27,    28,    29,    30,    31,    32,     3,    -1,
      18,    -1,     5,     8,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    28,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     9,    10,    37,    38,    39,    40,    42,
      47,    52,     4,    42,     0,    39,    52,     4,    49,    18,
       4,    43,    18,    20,    44,    24,    48,    19,    42,    53,
      54,    44,    24,    41,    19,    53,     3,     8,    18,    28,
      62,    63,    26,     4,    49,    25,    22,    56,     4,    19,
      24,    26,    43,    25,    56,    19,    62,    62,    21,    27,
      28,    29,    30,     4,    18,    22,    28,    33,    50,    61,
      63,    48,     4,    11,    12,    14,    15,    16,    17,    25,
      39,    42,    56,    57,    58,    59,    60,    61,    20,    56,
      53,    22,    45,    62,    41,    56,    19,    41,    62,    62,
      62,    62,    18,    61,    23,    50,    61,    61,     5,    26,
      27,    28,    29,    30,    31,    32,    20,    55,    25,    61,
      18,    18,    18,    25,    25,    23,    57,    26,    25,    21,
      23,    45,    19,    61,    64,    19,    24,    51,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    25,    61,    49,
      61,    61,    55,    24,    46,    24,    19,    50,    23,    21,
      19,    25,    19,    25,    45,    23,    64,    51,    55,    59,
      61,    59,    46,    13,    25,    59,    61,    19,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    38,    38,    39,    39,    40,
      41,    41,    42,    42,    43,    44,    44,    45,    45,    45,
      46,    46,    47,    48,    48,    49,    49,    50,    50,    50,
      51,    51,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     1,     1,     5,
       0,     3,     1,     1,     4,     0,     4,     1,     2,     4,
       0,     3,     4,     0,     3,     2,     4,     1,     2,     4,
       0,     3,     5,     5,     6,     6,     1,     3,     2,     5,
       0,     4,     3,     0,     2,     1,     1,     4,     1,     1,
       2,     5,     7,     5,     2,     2,     2,     3,     9,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     1,     1,     3,     3,     3,     3,     3,
       2,     1,     1,     1,     3,     1
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
#line 46 "mysysy.y"
                       {}
#line 1673 "parser.tab.c"
    break;

  case 3: /* CompUnit: Decl  */
#line 47 "mysysy.y"
                   {}
#line 1679 "parser.tab.c"
    break;

  case 4: /* CompUnit: FuncDef  */
#line 48 "mysysy.y"
                      {}
#line 1685 "parser.tab.c"
    break;

  case 5: /* CompUnit: CompUnit Decl  */
#line 49 "mysysy.y"
                            {}
#line 1691 "parser.tab.c"
    break;

  case 6: /* CompUnit: CompUnit FuncDef  */
#line 50 "mysysy.y"
                               {}
#line 1697 "parser.tab.c"
    break;

  case 7: /* Decl: ConstDecl  */
#line 52 "mysysy.y"
                        {}
#line 1703 "parser.tab.c"
    break;

  case 8: /* Decl: VarDecl  */
#line 53 "mysysy.y"
                      {}
#line 1709 "parser.tab.c"
    break;

  case 9: /* ConstDecl: CONST BType ConstDef ConstDefLoop SEMI  */
#line 55 "mysysy.y"
                                                     {}
#line 1715 "parser.tab.c"
    break;

  case 10: /* ConstDefLoop: %empty  */
#line 57 "mysysy.y"
              {(yyval.ptr) = NULL;}
#line 1721 "parser.tab.c"
    break;

  case 11: /* ConstDefLoop: COMMA ConstDef ConstDefLoop  */
#line 58 "mysysy.y"
                                          {}
#line 1727 "parser.tab.c"
    break;

  case 12: /* BType: INT  */
#line 60 "mysysy.y"
                  {}
#line 1733 "parser.tab.c"
    break;

  case 13: /* BType: FLOAT  */
#line 61 "mysysy.y"
                    {}
#line 1739 "parser.tab.c"
    break;

  case 14: /* ConstDef: ID ConstExpLoop ASSIGNOP ConstInitVal  */
#line 63 "mysysy.y"
                                                    {}
#line 1745 "parser.tab.c"
    break;

  case 15: /* ConstExpLoop: %empty  */
#line 65 "mysysy.y"
             {(yyval.ptr) = NULL;}
#line 1751 "parser.tab.c"
    break;

  case 16: /* ConstExpLoop: LB ConstExp RB ConstDefLoop  */
#line 66 "mysysy.y"
                                          { }
#line 1757 "parser.tab.c"
    break;

  case 17: /* ConstInitVal: ConstExp  */
#line 68 "mysysy.y"
                       {}
#line 1763 "parser.tab.c"
    break;

  case 18: /* ConstInitVal: LC RC  */
#line 69 "mysysy.y"
                    {}
#line 1769 "parser.tab.c"
    break;

  case 19: /* ConstInitVal: LC ConstInitVal ConstInitValLoop RC  */
#line 70 "mysysy.y"
                                                  {}
#line 1775 "parser.tab.c"
    break;

  case 20: /* ConstInitValLoop: %empty  */
#line 72 "mysysy.y"
                  {(yyval.ptr) = NULL;}
#line 1781 "parser.tab.c"
    break;

  case 21: /* ConstInitValLoop: COMMA ConstInitVal ConstInitValLoop  */
#line 73 "mysysy.y"
                                                  {}
#line 1787 "parser.tab.c"
    break;

  case 22: /* VarDecl: BType VarDef VarDefLoop SEMI  */
#line 75 "mysysy.y"
                                      {}
#line 1793 "parser.tab.c"
    break;

  case 23: /* VarDefLoop: %empty  */
#line 77 "mysysy.y"
            {}
#line 1799 "parser.tab.c"
    break;

  case 24: /* VarDefLoop: COMMA VarDef VarDefLoop  */
#line 78 "mysysy.y"
                                      {}
#line 1805 "parser.tab.c"
    break;

  case 25: /* VarDef: ID ConstExpLoop  */
#line 80 "mysysy.y"
                              {}
#line 1811 "parser.tab.c"
    break;

  case 26: /* VarDef: ID ConstExpLoop ASSIGNOP InitVal  */
#line 81 "mysysy.y"
                                               {}
#line 1817 "parser.tab.c"
    break;

  case 27: /* InitVal: Exp  */
#line 84 "mysysy.y"
                  {}
#line 1823 "parser.tab.c"
    break;

  case 28: /* InitVal: LC RC  */
#line 85 "mysysy.y"
                    {}
#line 1829 "parser.tab.c"
    break;

  case 29: /* InitVal: LC InitVal InitValLoop RC  */
#line 86 "mysysy.y"
                                        {}
#line 1835 "parser.tab.c"
    break;

  case 30: /* InitValLoop: %empty  */
#line 88 "mysysy.y"
             {}
#line 1841 "parser.tab.c"
    break;

  case 31: /* InitValLoop: COMMA InitVal InitValLoop  */
#line 89 "mysysy.y"
                                       {}
#line 1847 "parser.tab.c"
    break;

  case 32: /* FuncDef: BType ID LP RP Block  */
#line 91 "mysysy.y"
                                  {}
#line 1853 "parser.tab.c"
    break;

  case 33: /* FuncDef: VOID ID LP RP Block  */
#line 92 "mysysy.y"
                                  {}
#line 1859 "parser.tab.c"
    break;

  case 34: /* FuncDef: BType ID LP FuncFParams RP Block  */
#line 93 "mysysy.y"
                                              {}
#line 1865 "parser.tab.c"
    break;

  case 35: /* FuncDef: VOID ID LP FuncFParams RP Block  */
#line 94 "mysysy.y"
                                             {}
#line 1871 "parser.tab.c"
    break;

  case 36: /* FuncFParams: FuncFParam  */
#line 99 "mysysy.y"
                         {}
#line 1877 "parser.tab.c"
    break;

  case 37: /* FuncFParams: FuncFParam COMMA FuncFParams  */
#line 100 "mysysy.y"
                                           {}
#line 1883 "parser.tab.c"
    break;

  case 38: /* FuncFParam: BType ID  */
#line 103 "mysysy.y"
                       {}
#line 1889 "parser.tab.c"
    break;

  case 39: /* FuncFParam: BType ID LB RB ExpLoop  */
#line 104 "mysysy.y"
                                     {}
#line 1895 "parser.tab.c"
    break;

  case 40: /* ExpLoop: %empty  */
#line 106 "mysysy.y"
            {}
#line 1901 "parser.tab.c"
    break;

  case 41: /* ExpLoop: LB Exp RB ExpLoop  */
#line 107 "mysysy.y"
                               {}
#line 1907 "parser.tab.c"
    break;

  case 42: /* Block: LC BlockItemLoop RC  */
#line 110 "mysysy.y"
                                {}
#line 1913 "parser.tab.c"
    break;

  case 43: /* BlockItemLoop: %empty  */
#line 112 "mysysy.y"
               {}
#line 1919 "parser.tab.c"
    break;

  case 44: /* BlockItemLoop: BlockItem BlockItemLoop  */
#line 113 "mysysy.y"
                                      {}
#line 1925 "parser.tab.c"
    break;

  case 45: /* BlockItem: Decl  */
#line 115 "mysysy.y"
                   {}
#line 1931 "parser.tab.c"
    break;

  case 46: /* BlockItem: Stmt  */
#line 116 "mysysy.y"
                   {}
#line 1937 "parser.tab.c"
    break;

  case 47: /* Stmt: LVal ASSIGNOP Exp SEMI  */
#line 118 "mysysy.y"
                                     {}
#line 1943 "parser.tab.c"
    break;

  case 48: /* Stmt: Block  */
#line 119 "mysysy.y"
                    {}
#line 1949 "parser.tab.c"
    break;

  case 49: /* Stmt: SEMI  */
#line 120 "mysysy.y"
                   {}
#line 1955 "parser.tab.c"
    break;

  case 50: /* Stmt: Exp SEMI  */
#line 121 "mysysy.y"
                       {}
#line 1961 "parser.tab.c"
    break;

  case 51: /* Stmt: IF LP Exp RP Stmt  */
#line 122 "mysysy.y"
                                {}
#line 1967 "parser.tab.c"
    break;

  case 52: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 123 "mysysy.y"
                                          {}
#line 1973 "parser.tab.c"
    break;

  case 53: /* Stmt: WHILE LP Exp RP Stmt  */
#line 124 "mysysy.y"
                                   {}
#line 1979 "parser.tab.c"
    break;

  case 54: /* Stmt: BREAK SEMI  */
#line 125 "mysysy.y"
                         {}
#line 1985 "parser.tab.c"
    break;

  case 55: /* Stmt: CONTINUE SEMI  */
#line 126 "mysysy.y"
                            {}
#line 1991 "parser.tab.c"
    break;

  case 56: /* Stmt: RETURN SEMI  */
#line 127 "mysysy.y"
                          {}
#line 1997 "parser.tab.c"
    break;

  case 57: /* Stmt: RETURN Exp SEMI  */
#line 128 "mysysy.y"
                              {}
#line 2003 "parser.tab.c"
    break;

  case 58: /* Stmt: FOR LP VarDef SEMI Exp SEMI Exp RP Stmt  */
#line 129 "mysysy.y"
                                                        {}
#line 2009 "parser.tab.c"
    break;

  case 59: /* LVal: ID ExpLoop  */
#line 131 "mysysy.y"
                        {}
#line 2015 "parser.tab.c"
    break;

  case 60: /* Exp: Exp ASSIGNOP Exp  */
#line 133 "mysysy.y"
                         {}
#line 2021 "parser.tab.c"
    break;

  case 61: /* Exp: Exp AND Exp  */
#line 134 "mysysy.y"
                    {}
#line 2027 "parser.tab.c"
    break;

  case 62: /* Exp: Exp OR Exp  */
#line 135 "mysysy.y"
                    {}
#line 2033 "parser.tab.c"
    break;

  case 63: /* Exp: Exp RELOP Exp  */
#line 136 "mysysy.y"
                       {}
#line 2039 "parser.tab.c"
    break;

  case 64: /* Exp: Exp PLUS Exp  */
#line 137 "mysysy.y"
                      {}
#line 2045 "parser.tab.c"
    break;

  case 65: /* Exp: Exp MINUS Exp  */
#line 138 "mysysy.y"
                       {}
#line 2051 "parser.tab.c"
    break;

  case 66: /* Exp: Exp STAR Exp  */
#line 139 "mysysy.y"
                       {}
#line 2057 "parser.tab.c"
    break;

  case 67: /* Exp: Exp DIV Exp  */
#line 140 "mysysy.y"
                      {}
#line 2063 "parser.tab.c"
    break;

  case 68: /* Exp: LP Exp RP  */
#line 141 "mysysy.y"
                       {}
#line 2069 "parser.tab.c"
    break;

  case 69: /* Exp: MINUS Exp  */
#line 142 "mysysy.y"
                                  {}
#line 2075 "parser.tab.c"
    break;

  case 70: /* Exp: NOT Exp  */
#line 143 "mysysy.y"
                      {}
#line 2081 "parser.tab.c"
    break;

  case 71: /* Exp: ID LP Args RP  */
#line 144 "mysysy.y"
                       {}
#line 2087 "parser.tab.c"
    break;

  case 72: /* Exp: ID LP RP  */
#line 145 "mysysy.y"
                       {}
#line 2093 "parser.tab.c"
    break;

  case 73: /* Exp: ID  */
#line 146 "mysysy.y"
                       {}
#line 2099 "parser.tab.c"
    break;

  case 74: /* Exp: Number  */
#line 147 "mysysy.y"
                       {}
#line 2105 "parser.tab.c"
    break;

  case 75: /* ConstExp: ConstExp PLUS ConstExp  */
#line 149 "mysysy.y"
                                  {}
#line 2111 "parser.tab.c"
    break;

  case 76: /* ConstExp: ConstExp MINUS ConstExp  */
#line 150 "mysysy.y"
                                  {}
#line 2117 "parser.tab.c"
    break;

  case 77: /* ConstExp: ConstExp STAR ConstExp  */
#line 151 "mysysy.y"
                                 {}
#line 2123 "parser.tab.c"
    break;

  case 78: /* ConstExp: ConstExp DIV ConstExp  */
#line 152 "mysysy.y"
                                {}
#line 2129 "parser.tab.c"
    break;

  case 79: /* ConstExp: LP ConstExp RP  */
#line 153 "mysysy.y"
                         {}
#line 2135 "parser.tab.c"
    break;

  case 80: /* ConstExp: MINUS ConstExp  */
#line 154 "mysysy.y"
                                      {}
#line 2141 "parser.tab.c"
    break;

  case 81: /* ConstExp: Number  */
#line 155 "mysysy.y"
                 {}
#line 2147 "parser.tab.c"
    break;

  case 82: /* Number: IntConst  */
#line 157 "mysysy.y"
                   {}
#line 2153 "parser.tab.c"
    break;

  case 83: /* Number: FloatConst  */
#line 158 "mysysy.y"
                     {}
#line 2159 "parser.tab.c"
    break;

  case 84: /* Args: Exp COMMA Args  */
#line 160 "mysysy.y"
                           {}
#line 2165 "parser.tab.c"
    break;

  case 85: /* Args: Exp  */
#line 161 "mysysy.y"
                           {}
#line 2171 "parser.tab.c"
    break;


#line 2175 "parser.tab.c"

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

#line 168 "mysysy.y"


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return -1;
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	
