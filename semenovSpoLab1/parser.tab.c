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
#line 1 "parser.y"

#include "parser.tab.h"
#include "error.h"

#define YYDEBUG 1

#line 78 "parser.tab.c"

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
  YYSYMBOL_PLUS = 3,                       /* PLUS  */
  YYSYMBOL_MINUS = 4,                      /* MINUS  */
  YYSYMBOL_STAR = 5,                       /* STAR  */
  YYSYMBOL_SLASH = 6,                      /* SLASH  */
  YYSYMBOL_PERCENT = 7,                    /* PERCENT  */
  YYSYMBOL_EQUAL = 8,                      /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 9,                   /* NOTEQUAL  */
  YYSYMBOL_LESSTHAN = 10,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 11,               /* GREATERTHAN  */
  YYSYMBOL_LESSTHANEQ = 12,                /* LESSTHANEQ  */
  YYSYMBOL_GREATERTHANEQ = 13,             /* GREATERTHANEQ  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_NOT = 16,                       /* NOT  */
  YYSYMBOL_IDENTIFIER = 17,                /* IDENTIFIER  */
  YYSYMBOL_STR = 18,                       /* STR  */
  YYSYMBOL_COMMA = 19,                     /* COMMA  */
  YYSYMBOL_CHAR = 20,                      /* CHAR  */
  YYSYMBOL_BIN = 21,                       /* BIN  */
  YYSYMBOL_HEX = 22,                       /* HEX  */
  YYSYMBOL_DEC = 23,                       /* DEC  */
  YYSYMBOL_TRUE = 24,                      /* TRUE  */
  YYSYMBOL_FALSE = 25,                     /* FALSE  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_SEMICOLON = 31,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 32,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 33,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 34,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 35,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 36,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 37,                  /* RBRACKET  */
  YYSYMBOL_TYPEDEF = 38,                   /* TYPEDEF  */
  YYSYMBOL_ARRAY_COMMAS = 39,              /* ARRAY_COMMAS  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_source = 41,                    /* source  */
  YYSYMBOL_sourceItem = 42,                /* sourceItem  */
  YYSYMBOL_funcSignature = 43,             /* funcSignature  */
  YYSYMBOL_listArgDef = 44,                /* listArgDef  */
  YYSYMBOL_argDef = 45,                    /* argDef  */
  YYSYMBOL_optionalTypeRef = 46,           /* optionalTypeRef  */
  YYSYMBOL_typeRef = 47,                   /* typeRef  */
  YYSYMBOL_builtin = 48,                   /* builtin  */
  YYSYMBOL_statement = 49,                 /* statement  */
  YYSYMBOL_custom = 50,                    /* custom  */
  YYSYMBOL_array = 51,                     /* array  */
  YYSYMBOL_listVarDeclared = 52,           /* listVarDeclared  */
  YYSYMBOL_listVarDeclaredItem = 53,       /* listVarDeclaredItem  */
  YYSYMBOL_var = 54,                       /* var  */
  YYSYMBOL_if = 55,                        /* if  */
  YYSYMBOL_optionalElseStatement = 56,     /* optionalElseStatement  */
  YYSYMBOL_listStatement = 57,             /* listStatement  */
  YYSYMBOL_block = 58,                     /* block  */
  YYSYMBOL_while = 59,                     /* while  */
  YYSYMBOL_do = 60,                        /* do  */
  YYSYMBOL_break = 61,                     /* break  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_assignment = 63,                /* assignment  */
  YYSYMBOL_expr = 64,                      /* expr  */
  YYSYMBOL_binary = 65,                    /* binary  */
  YYSYMBOL_unary = 66,                     /* unary  */
  YYSYMBOL_braces = 67,                    /* braces  */
  YYSYMBOL_call = 68,                      /* call  */
  YYSYMBOL_optionalListExpr = 69,          /* optionalListExpr  */
  YYSYMBOL_listExpr = 70,                  /* listExpr  */
  YYSYMBOL_indexer = 71,                   /* indexer  */
  YYSYMBOL_place = 72,                     /* place  */
  YYSYMBOL_literal = 73                    /* literal  */
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
#define YYLAST   389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  134

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    70,    71,    75,    77,    78,    79,
      81,    83,    84,    87,    88,    89,    91,    94,    95,    96,
      97,    98,    99,   100,   105,   107,   110,   111,   113,   114,
     116,   118,   120,   121,   122,   124,   125,   127,   128,   130,
     132,   134,   136,   138,   140,   141,   142,   143,   144,   145,
     146,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   163,   164,   165,   167,   169,
     170,   171,   173,   174,   175,   177,   179,   180,   181,   182,
     183,   184,   185
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
  "\"end of file\"", "error", "\"invalid token\"", "PLUS", "MINUS",
  "STAR", "SLASH", "PERCENT", "EQUAL", "NOTEQUAL", "LESSTHAN",
  "GREATERTHAN", "LESSTHANEQ", "GREATERTHANEQ", "AND", "OR", "NOT",
  "IDENTIFIER", "STR", "COMMA", "CHAR", "BIN", "HEX", "DEC", "TRUE",
  "FALSE", "IF", "ELSE", "WHILE", "DO", "BREAK", "SEMICOLON", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "TYPEDEF",
  "ARRAY_COMMAS", "$accept", "source", "sourceItem", "funcSignature",
  "listArgDef", "argDef", "optionalTypeRef", "typeRef", "builtin",
  "statement", "custom", "array", "listVarDeclared", "listVarDeclaredItem",
  "var", "if", "optionalElseStatement", "listStatement", "block", "while",
  "do", "break", "expression", "assignment", "expr", "binary", "unary",
  "braces", "call", "optionalListExpr", "listExpr", "indexer", "place",
  "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -81,     7,   -81,   -81,   -81,   -81,   -20,   -28,   -11,   -18,
     -81,   -81,   -81,   -81,   110,   -81,    -1,   -81,   -81,   334,
     334,   334,     9,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -13,   -12,    -6,    15,   334,   -81,    86,   143,   -81,   -81,
      12,   -81,   -81,   -81,   -81,   -81,   -81,   179,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,    18,    33,    21,   294,   294,
     294,   334,   334,   334,    26,   -81,   192,    -9,    39,    52,
      19,   294,   -81,   -81,   334,   334,   334,   334,   334,   311,
     334,   334,   334,   334,   334,   334,   334,   -81,   334,   -81,
      -1,   226,    40,   -81,   243,   260,    42,   -81,   -81,   357,
     294,   294,   294,   294,   294,   334,   294,   294,   294,   294,
     294,   294,   294,   294,    35,   -81,   334,   -81,   143,   143,
     334,   -81,   294,   -81,   -81,    48,   -81,   277,   143,   -81,
      45,    48,   -81,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    24,    16,     3,     0,     0,     0,    12,
      13,    14,    15,     5,     0,     4,     7,    10,    25,     0,
       0,     0,    75,    78,    79,    81,    80,    82,    76,    77,
       0,     0,     0,     0,     0,    38,     0,    36,    17,    18,
       0,    19,    20,    21,    22,    23,    51,     0,    45,    44,
      46,    47,    48,    49,    50,     0,     8,    75,    65,    66,
      67,    71,     0,     0,     0,    41,     0,    75,     0,    27,
      51,     0,    35,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     6,
       7,    73,     0,    70,     0,     0,     0,    68,    30,     0,
      52,    53,    54,    55,    56,     0,    43,    58,    59,    60,
      61,    62,    63,    64,     0,     9,     0,    69,     0,     0,
       0,    26,    57,    74,    72,    34,    39,     0,     0,    31,
       0,    33,    40,    32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   -81,   -81,    -8,    76,   -81,     2,   -81,   -79,
     -81,   -81,   -21,   -81,   -81,   -81,   -52,    44,     3,   -81,
     -81,   -81,   -81,   -31,   -19,   -81,   -81,   -81,   -81,   -81,
     -80,   -81,   -81,   -81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     5,     6,    55,    56,     8,    36,    10,    37,
      11,    12,    68,    69,    38,    39,   129,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    92,
      93,    52,    53,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    59,    60,     9,    16,    70,    17,     2,   114,    15,
     -28,    13,   -24,   -24,    14,    66,     3,    71,     9,    62,
      63,    18,   -28,    61,     3,   -24,   -24,   -24,    14,   -24,
     -24,   -24,   -24,   -24,   -24,    64,   124,     4,   -29,   125,
     126,    61,    91,    94,    95,     4,    65,    73,   -24,   131,
     -29,    89,    90,    61,    96,   100,   101,   102,   103,   104,
     106,   107,   108,   109,   110,   111,   112,   113,    70,    91,
      98,    99,   123,   117,   120,   128,   132,     7,   121,   133,
      71,    72,   115,     0,     0,     0,   122,     0,     0,    19,
      20,     0,     9,     0,     0,     0,     0,    91,     0,     0,
       0,   127,    21,    67,    23,     0,    24,    25,    26,    27,
      28,    29,     0,    19,    20,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,    18,    21,    22,    23,     0,
      24,    25,    26,    27,    28,    29,    30,     0,    31,    32,
      33,     0,    34,     0,    14,    35,    19,    20,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,    32,    33,     0,    34,     0,    14,     0,     0,
       0,     4,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
      87,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    88,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,   116,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     0,
       0,     0,    88,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   118,     0,     0,    88,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   119,     0,     0,    88,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     130,     0,     0,    88,    19,    20,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,    21,    57,    23,
      88,    24,    25,    26,    27,    28,    29,    19,    20,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
      21,    57,    23,     0,    24,    25,    26,    27,    28,    29,
      19,    20,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    21,    67,    23,     0,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,     0,     0,    34
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,     1,    32,    36,    17,     0,    88,     6,
      19,    31,     3,     4,    34,    34,    17,    36,    16,    32,
      32,    39,    31,    32,    17,    16,    17,    18,    34,    20,
      21,    22,    23,    24,    25,    32,   116,    38,    19,   118,
     119,    32,    61,    62,    63,    38,    31,    35,    39,   128,
      31,    33,    19,    32,    28,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    99,    88,
      31,    19,    37,    33,    32,    27,    31,     1,    99,   131,
      99,    37,    90,    -1,    -1,    -1,   105,    -1,    -1,     3,
       4,    -1,    90,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,   120,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    -1,     3,     4,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    34,    35,     3,     4,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    -1,    32,    -1,    34,    -1,    -1,
      -1,    38,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    36,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    33,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    33,    -1,    -1,    36,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      33,    -1,    -1,    36,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      36,    20,    21,    22,    23,    24,    25,     3,     4,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
       3,     4,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,     0,    17,    38,    42,    43,    45,    46,    47,
      48,    50,    51,    31,    34,    58,    32,    17,    39,     3,
       4,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    28,    29,    30,    32,    35,    47,    49,    54,    55,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    71,    72,    73,    44,    45,    17,    64,    64,
      64,    32,    32,    32,    58,    31,    64,    17,    52,    53,
      63,    64,    57,    35,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    31,    36,    33,
      19,    64,    69,    70,    64,    64,    28,    33,    31,    19,
      64,    64,    64,    64,    64,     8,    64,    64,    64,    64,
      64,    64,    64,    64,    70,    44,    19,    33,    33,    33,
      32,    52,    64,    37,    70,    49,    49,    64,    27,    56,
      33,    49,    31,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    44,    44,    44,
      45,    46,    46,    47,    47,    47,    48,    49,    49,    49,
      49,    49,    49,    49,    50,    51,    52,    52,    53,    53,
      54,    55,    56,    56,    56,    57,    57,    58,    58,    59,
      60,    61,    62,    63,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    67,    68,
      69,    69,    70,    70,    71,    72,    73,    73,    73,    73,
      73,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     4,     0,     1,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       3,     6,     3,     2,     0,     2,     0,     3,     2,     5,
       7,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     4,
       1,     0,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1
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
  case 2: /* source: %empty  */
#line 67 "parser.y"
        {{(yyval.node) = NULL;}}
#line 1554 "parser.tab.c"
    break;

  case 3: /* source: source sourceItem  */
#line 68 "parser.y"
                        {{(yyval.node) = createNode("source", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1560 "parser.tab.c"
    break;

  case 4: /* sourceItem: funcSignature block  */
#line 70 "parser.y"
                                {{(yyval.node) = createNode("sourceItem", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1566 "parser.tab.c"
    break;

  case 5: /* sourceItem: funcSignature SEMICOLON  */
#line 71 "parser.y"
                              {{(yyval.node) = createNode("sourceItem", (yyvsp[-1].node), NULL, "");}}
#line 1572 "parser.tab.c"
    break;

  case 6: /* funcSignature: argDef LPAREN listArgDef RPAREN  */
#line 75 "parser.y"
                                               {{(yyval.node) = createNode("funcSignature", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 1578 "parser.tab.c"
    break;

  case 7: /* listArgDef: %empty  */
#line 77 "parser.y"
             {{(yyval.node) = NULL;}}
#line 1584 "parser.tab.c"
    break;

  case 8: /* listArgDef: argDef  */
#line 78 "parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1590 "parser.tab.c"
    break;

  case 9: /* listArgDef: argDef COMMA listArgDef  */
#line 79 "parser.y"
                              {{(yyval.node) = createNode("listArgDef", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1596 "parser.tab.c"
    break;

  case 10: /* argDef: optionalTypeRef IDENTIFIER  */
#line 81 "parser.y"
                                   {{(yyval.node) = createNode("argDef", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1602 "parser.tab.c"
    break;

  case 11: /* optionalTypeRef: %empty  */
#line 83 "parser.y"
                 {{ (yyval.node) = NULL; }}
#line 1608 "parser.tab.c"
    break;

  case 12: /* optionalTypeRef: typeRef  */
#line 84 "parser.y"
              {{(yyval.node) = (yyvsp[0].node);}}
#line 1614 "parser.tab.c"
    break;

  case 13: /* typeRef: builtin  */
#line 87 "parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1620 "parser.tab.c"
    break;

  case 14: /* typeRef: custom  */
#line 88 "parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1626 "parser.tab.c"
    break;

  case 15: /* typeRef: array  */
#line 89 "parser.y"
            {{(yyval.node) = (yyvsp[0].node);}}
#line 1632 "parser.tab.c"
    break;

  case 16: /* builtin: TYPEDEF  */
#line 91 "parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1638 "parser.tab.c"
    break;

  case 17: /* statement: var  */
#line 94 "parser.y"
               {{(yyval.node) =  (yyvsp[0].node);}}
#line 1644 "parser.tab.c"
    break;

  case 18: /* statement: if  */
#line 95 "parser.y"
         {{(yyval.node) =  (yyvsp[0].node);}}
#line 1650 "parser.tab.c"
    break;

  case 19: /* statement: block  */
#line 96 "parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1656 "parser.tab.c"
    break;

  case 20: /* statement: while  */
#line 97 "parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1662 "parser.tab.c"
    break;

  case 21: /* statement: do  */
#line 98 "parser.y"
         {{(yyval.node) =  (yyvsp[0].node);}}
#line 1668 "parser.tab.c"
    break;

  case 22: /* statement: break  */
#line 99 "parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1674 "parser.tab.c"
    break;

  case 23: /* statement: expression  */
#line 100 "parser.y"
                 {{(yyval.node) =  (yyvsp[0].node);}}
#line 1680 "parser.tab.c"
    break;

  case 24: /* custom: IDENTIFIER  */
#line 105 "parser.y"
                   {{(yyval.node) = (yyvsp[0].node);}}
#line 1686 "parser.tab.c"
    break;

  case 25: /* array: typeRef ARRAY_COMMAS  */
#line 107 "parser.y"
                            {{(yyval.node) = createNode("array", (yyvsp[-1].node), NULL, (yyvsp[0].node)->value);}}
#line 1692 "parser.tab.c"
    break;

  case 26: /* listVarDeclared: listVarDeclaredItem COMMA listVarDeclared  */
#line 110 "parser.y"
                                                           {{(yyval.node) = createNode("listVarDeclared", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1698 "parser.tab.c"
    break;

  case 27: /* listVarDeclared: listVarDeclaredItem  */
#line 111 "parser.y"
                          {{(yyval.node) = createNode("listVarDeclared", (yyvsp[0].node), NULL, "");}}
#line 1704 "parser.tab.c"
    break;

  case 28: /* listVarDeclaredItem: IDENTIFIER  */
#line 113 "parser.y"
                                {{(yyval.node) = (yyvsp[0].node);}}
#line 1710 "parser.tab.c"
    break;

  case 29: /* listVarDeclaredItem: assignment  */
#line 114 "parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1716 "parser.tab.c"
    break;

  case 30: /* var: typeRef listVarDeclared SEMICOLON  */
#line 116 "parser.y"
                                       {{(yyval.node) = createNode("var", (yyvsp[-2].node), (yyvsp[-1].node), "");}}
#line 1722 "parser.tab.c"
    break;

  case 31: /* if: IF LPAREN expr RPAREN statement optionalElseStatement  */
#line 118 "parser.y"
                                                          {{(yyval.node) = createNode("if", (yyvsp[-3].node), createNode("ifStatements", (yyvsp[-1].node), (yyvsp[0].node), ""), "");}}
#line 1728 "parser.tab.c"
    break;

  case 32: /* optionalElseStatement: ELSE statement optionalElseStatement  */
#line 120 "parser.y"
                                                            {{(yyval.node) = createNode("else", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1734 "parser.tab.c"
    break;

  case 33: /* optionalElseStatement: ELSE statement  */
#line 121 "parser.y"
                     {{(yyval.node) = createNode("else", (yyvsp[0].node), NULL, "");}}
#line 1740 "parser.tab.c"
    break;

  case 34: /* optionalElseStatement: %empty  */
#line 122 "parser.y"
      {{(yyval.node) = NULL;}}
#line 1746 "parser.tab.c"
    break;

  case 35: /* listStatement: statement listStatement  */
#line 124 "parser.y"
                                       {{(yyval.node) = createNode("listStatement", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1752 "parser.tab.c"
    break;

  case 36: /* listStatement: %empty  */
#line 125 "parser.y"
      {{(yyval.node) = NULL;}}
#line 1758 "parser.tab.c"
    break;

  case 37: /* block: LBRACE listStatement RBRACE  */
#line 127 "parser.y"
                                   {{(yyval.node) = createNode("block", (yyvsp[-1].node), NULL, "");}}
#line 1764 "parser.tab.c"
    break;

  case 38: /* block: LBRACE RBRACE  */
#line 128 "parser.y"
                    {{(yyval.node) = createNode("block", NULL, NULL, "");}}
#line 1770 "parser.tab.c"
    break;

  case 39: /* while: WHILE LPAREN expr RPAREN statement  */
#line 130 "parser.y"
                                          {{(yyval.node) = createNode("while", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1776 "parser.tab.c"
    break;

  case 40: /* do: DO block WHILE LPAREN expr RPAREN SEMICOLON  */
#line 132 "parser.y"
                                                {{(yyval.node) = createNode("dowhile", (yyvsp[-5].node), (yyvsp[-2].node), "");}}
#line 1782 "parser.tab.c"
    break;

  case 41: /* break: BREAK SEMICOLON  */
#line 134 "parser.y"
                       {{(yyval.node) = createNode("break", NULL, NULL, "");}}
#line 1788 "parser.tab.c"
    break;

  case 42: /* expression: expr SEMICOLON  */
#line 136 "parser.y"
                           {{(yyval.node) = (yyvsp[-1].node);}}
#line 1794 "parser.tab.c"
    break;

  case 43: /* assignment: expr EQUAL expr  */
#line 138 "parser.y"
                            {{(yyval.node) = createNode("assigment", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1800 "parser.tab.c"
    break;

  case 44: /* expr: unary  */
#line 140 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1806 "parser.tab.c"
    break;

  case 45: /* expr: binary  */
#line 141 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1812 "parser.tab.c"
    break;

  case 46: /* expr: braces  */
#line 142 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1818 "parser.tab.c"
    break;

  case 47: /* expr: call  */
#line 143 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1824 "parser.tab.c"
    break;

  case 48: /* expr: indexer  */
#line 144 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1830 "parser.tab.c"
    break;

  case 49: /* expr: place  */
#line 145 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1836 "parser.tab.c"
    break;

  case 50: /* expr: literal  */
#line 146 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1842 "parser.tab.c"
    break;

  case 52: /* binary: expr PLUS expr  */
#line 149 "parser.y"
                     {{(yyval.node) = createNode("PLUS", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1848 "parser.tab.c"
    break;

  case 53: /* binary: expr MINUS expr  */
#line 150 "parser.y"
                      {{(yyval.node) = createNode("MINUS", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1854 "parser.tab.c"
    break;

  case 54: /* binary: expr STAR expr  */
#line 151 "parser.y"
                     {{(yyval.node) = createNode("STAR", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1860 "parser.tab.c"
    break;

  case 55: /* binary: expr SLASH expr  */
#line 152 "parser.y"
                      {{(yyval.node) = createNode("SLASH", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1866 "parser.tab.c"
    break;

  case 56: /* binary: expr PERCENT expr  */
#line 153 "parser.y"
                        {{(yyval.node) = createNode("PERCENT", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1872 "parser.tab.c"
    break;

  case 57: /* binary: expr EQUAL EQUAL expr  */
#line 154 "parser.y"
                            {{(yyval.node) = createNode("EQUALITY", (yyvsp[-3].node), (yyvsp[0].node), "");}}
#line 1878 "parser.tab.c"
    break;

  case 58: /* binary: expr NOTEQUAL expr  */
#line 155 "parser.y"
                         {{(yyval.node) = createNode("NOTEQUAL", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1884 "parser.tab.c"
    break;

  case 59: /* binary: expr LESSTHAN expr  */
#line 156 "parser.y"
                         {{(yyval.node) = createNode("LESSTHAN", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1890 "parser.tab.c"
    break;

  case 60: /* binary: expr GREATERTHAN expr  */
#line 157 "parser.y"
                            {{(yyval.node) = createNode("GREATERTHAN", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1896 "parser.tab.c"
    break;

  case 61: /* binary: expr LESSTHANEQ expr  */
#line 158 "parser.y"
                           {{(yyval.node) = createNode("LESSTHANEQ", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1902 "parser.tab.c"
    break;

  case 62: /* binary: expr GREATERTHANEQ expr  */
#line 159 "parser.y"
                              {{(yyval.node) = createNode("GREATERTHANEQ", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1908 "parser.tab.c"
    break;

  case 63: /* binary: expr AND expr  */
#line 160 "parser.y"
                    {{(yyval.node) = createNode("AND", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1914 "parser.tab.c"
    break;

  case 64: /* binary: expr OR expr  */
#line 161 "parser.y"
                   {{(yyval.node) = createNode("OR", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1920 "parser.tab.c"
    break;

  case 65: /* unary: PLUS expr  */
#line 163 "parser.y"
                 {{(yyval.node) = createNode("PLUS", (yyvsp[0].node), NULL, "");}}
#line 1926 "parser.tab.c"
    break;

  case 66: /* unary: MINUS expr  */
#line 164 "parser.y"
                 {{(yyval.node) = createNode("MINUS", (yyvsp[0].node), NULL, "");}}
#line 1932 "parser.tab.c"
    break;

  case 67: /* unary: NOT expr  */
#line 165 "parser.y"
               {{(yyval.node) = createNode("NOT", (yyvsp[0].node), NULL, "");}}
#line 1938 "parser.tab.c"
    break;

  case 68: /* braces: LPAREN expr RPAREN  */
#line 167 "parser.y"
                            {{(yyval.node) = createNode("braces", (yyvsp[-1].node), NULL, "");}}
#line 1944 "parser.tab.c"
    break;

  case 69: /* call: IDENTIFIER LPAREN optionalListExpr RPAREN  */
#line 169 "parser.y"
                                                 {{(yyval.node) = createNode("CALL", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 1950 "parser.tab.c"
    break;

  case 70: /* optionalListExpr: listExpr  */
#line 170 "parser.y"
                            {{(yyval.node) = createNode("optionalListExpr", (yyvsp[0].node), NULL, "");}}
#line 1956 "parser.tab.c"
    break;

  case 71: /* optionalListExpr: %empty  */
#line 171 "parser.y"
      {{(yyval.node) = createNode("optionalListExpr", NULL, NULL, "");}}
#line 1962 "parser.tab.c"
    break;

  case 72: /* listExpr: expr COMMA listExpr  */
#line 173 "parser.y"
                              {{(yyval.node) = createNode("listExpr", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1968 "parser.tab.c"
    break;

  case 73: /* listExpr: expr  */
#line 174 "parser.y"
           {{(yyval.node) = createNode("listExpr", (yyvsp[0].node), NULL, "");}}
#line 1974 "parser.tab.c"
    break;

  case 74: /* indexer: expr LBRACKET listExpr RBRACKET  */
#line 175 "parser.y"
                                         {{(yyval.node) = createNode("indexer", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 1980 "parser.tab.c"
    break;

  case 75: /* place: IDENTIFIER  */
#line 177 "parser.y"
                  {{(yyval.node) = (yyvsp[0].node);}}
#line 1986 "parser.tab.c"
    break;

  case 76: /* literal: TRUE  */
#line 179 "parser.y"
              {{(yyval.node) = (yyvsp[0].node);}}
#line 1992 "parser.tab.c"
    break;

  case 77: /* literal: FALSE  */
#line 180 "parser.y"
            {{(yyval.node) = (yyvsp[0].node);}}
#line 1998 "parser.tab.c"
    break;

  case 78: /* literal: STR  */
#line 181 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2004 "parser.tab.c"
    break;

  case 79: /* literal: CHAR  */
#line 182 "parser.y"
           {{(yyval.node) = (yyvsp[0].node);}}
#line 2010 "parser.tab.c"
    break;

  case 80: /* literal: HEX  */
#line 183 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2016 "parser.tab.c"
    break;

  case 81: /* literal: BIN  */
#line 184 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2022 "parser.tab.c"
    break;

  case 82: /* literal: DEC  */
#line 185 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2028 "parser.tab.c"
    break;


#line 2032 "parser.tab.c"

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

#line 186 "parser.y"

