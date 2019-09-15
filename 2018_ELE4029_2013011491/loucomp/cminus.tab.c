/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 7 "cminus.y" /* yacc.c:339  */

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void); // added 11/2/11 to ensure no conflict with lex
static int savedNum; // for use in assign for cminus
static TokenType savedOp;


#line 84 "cminus.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cminus.tab.h".  */
#ifndef YY_YY_CMINUS_TAB_H_INCLUDED
# define YY_YY_CMINUS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    WHILE = 260,
    RETURN = 261,
    INT = 262,
    VOID = 263,
    ID = 264,
    NUM = 265,
    ASSIGN = 266,
    EQ = 267,
    LT = 268,
    PLUS = 269,
    MINUS = 270,
    TIMES = 271,
    OVER = 272,
    LPAREN = 273,
    RPAREN = 274,
    SEMI = 275,
    NE = 276,
    LE = 277,
    GT = 278,
    GE = 279,
    LBRACE = 280,
    RBRACE = 281,
    LCURLY = 282,
    RCURLY = 283,
    COMMA = 284,
    ERROR = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CMINUS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 166 "cminus.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    37,    46,    49,    49,    52,    58,    64,
      70,    78,    79,    83,    82,    96,    97,   100,   109,   112,
     119,   118,   129,   136,   145,   148,   157,   160,   160,   161,
     161,   162,   165,   165,   168,   173,   181,   188,   189,   195,
     201,   204,   210,   209,   220,   226,   229,   230,   231,   232,
     233,   234,   238,   237,   246,   249,   250,   254,   253,   262,
     265,   266,   269,   270,   271,   272,   279,   278,   289,   290,
     293,   302,   305
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "RETURN", "INT",
  "VOID", "ID", "NUM", "ASSIGN", "EQ", "LT", "PLUS", "MINUS", "TIMES",
  "OVER", "LPAREN", "RPAREN", "SEMI", "NE", "LE", "GT", "GE", "LBRACE",
  "RBRACE", "LCURLY", "RCURLY", "COMMA", "ERROR", "$accept", "program",
  "declar_list", "declar", "saveName", "saveNumber", "var_declar",
  "type_spec", "fun_declar", "@1", "params", "param_list", "param", "@2",
  "comp_stmt", "local_declar", "stmt_list", "stmt", "exp_stmt",
  "selec_stmt", "iter_stmt", "return_stmt", "exp", "var", "@3",
  "simple_exp", "relop", "addi_exp", "@4", "addop", "term", "@5", "mulop",
  "factor", "call", "@6", "args", "arg_list", "empty", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -67

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      19,   -88,   -88,     5,    19,   -88,   -88,    32,   -88,   -88,
     -88,   -88,    17,   -88,    35,    31,   -88,    33,    36,    49,
      52,    61,    53,    45,   -88,   -88,    54,   -88,    50,    19,
      56,   -88,   -88,   -88,    57,    19,   -88,   -88,   -88,    32,
       4,   -88,    17,    58,    60,    55,   -10,   -88,    20,   -88,
     -88,    62,   -88,   -88,   -88,   -88,   -88,   -88,    64,    71,
     -88,    39,    51,   -88,   -88,    20,    20,   -88,    65,    67,
      63,    69,   -88,    20,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,    20,   -88,   -88,   -88,   -88,    70,    72,   -88,
     -88,    20,    20,   -88,   -88,    41,    20,    20,    30,    30,
      66,   -88,    74,    68,   -88,    51,   -88,    86,   -88,   -88,
     -88,    20,    30,   -88,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    11,    12,     0,     2,     4,     5,     0,     6,     1,
       3,     7,    13,     9,     0,     0,     8,     0,     0,     0,
      12,     0,     0,    15,    18,    10,    19,    20,     0,     0,
       0,    72,    14,    17,     0,    72,    24,    21,    23,     0,
       0,    26,     0,     0,     0,     0,    41,    65,     0,    33,
      22,    42,    28,    25,    27,    29,    30,    31,     0,    63,
      40,    45,    54,    59,    64,     0,     0,    37,     0,     0,
       0,     0,    32,     0,    50,    47,    55,    56,    51,    46,
      48,    49,     0,    52,    60,    61,    57,     0,     0,    38,
      62,     0,    72,    39,    63,    44,     0,     0,     0,     0,
       0,    71,     0,    68,    69,    53,    58,    34,    36,    43,
      67,     0,     0,    70,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,   -88,    90,    -5,   -88,    73,   -12,   -88,   -88,
     -88,   -88,    75,   -88,    77,   -88,   -88,   -87,   -88,   -88,
     -88,   -88,   -45,   -78,   -88,   -88,   -88,    13,   -88,   -88,
       0,   -88,   -88,     1,   -88,   -88,   -88,   -88,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    51,    17,     6,     7,     8,    15,
      22,    23,    24,    30,    52,    35,    40,    53,    54,    55,
      56,    57,    58,    59,    70,    60,    82,    61,    96,    83,
      62,    97,    86,    63,    64,    71,   102,   103,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      68,    41,    12,    69,    94,     9,    21,    43,    -7,    44,
      45,   107,   108,    46,    47,    -7,    27,    21,    94,    94,
      87,    88,    48,    39,    49,   114,     1,     2,    93,    46,
      47,    31,    50,    43,    42,    44,    45,    13,    48,    46,
      47,    11,    14,     1,    20,    16,   100,   101,    48,    18,
      49,    74,    75,    76,    77,    76,    77,    31,   104,    19,
      78,    79,    80,    81,    46,    47,   113,    84,    85,    25,
      26,   -16,    28,    48,    29,    67,    65,    31,    66,    -7,
     -66,    34,    73,    37,    72,    89,    90,    92,    91,    98,
     112,    99,   109,   110,    10,    95,   105,   111,   106,     0,
       0,     0,     0,     0,    33,    32,     0,     0,    38
};

static const yytype_int8 yycheck[] =
{
      45,    35,     7,    48,    82,     0,    18,     3,    18,     5,
       6,    98,    99,     9,    10,    25,    21,    29,    96,    97,
      65,    66,    18,    35,    20,   112,     7,     8,    73,     9,
      10,    27,    28,     3,    39,     5,     6,    20,    18,     9,
      10,     9,    25,     7,     8,    10,    91,    92,    18,    18,
      20,    12,    13,    14,    15,    14,    15,    27,    92,    26,
      21,    22,    23,    24,     9,    10,   111,    16,    17,    20,
       9,    19,    19,    18,    29,    20,    18,    27,    18,    25,
      18,    25,    11,    26,    20,    20,    19,    18,    25,    19,
       4,    19,    26,    19,     4,    82,    96,    29,    97,    -1,
      -1,    -1,    -1,    -1,    29,    28,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    32,    33,    34,    37,    38,    39,     0,
      34,     9,    35,    20,    25,    40,    10,    36,    18,    26,
       8,    38,    41,    42,    43,    20,     9,    35,    19,    29,
      44,    27,    45,    43,    25,    46,    69,    26,    37,    38,
      47,    69,    35,     3,     5,     6,     9,    10,    18,    20,
      28,    35,    45,    48,    49,    50,    51,    52,    53,    54,
      56,    58,    61,    64,    65,    18,    18,    20,    53,    53,
      55,    66,    20,    11,    12,    13,    14,    15,    21,    22,
      23,    24,    57,    60,    16,    17,    63,    53,    53,    20,
      19,    25,    18,    53,    54,    58,    59,    62,    19,    19,
      53,    53,    67,    68,    69,    61,    64,    48,    48,    26,
      19,    29,     4,    53,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    35,    36,    37,
      37,    38,    38,    40,    39,    41,    41,    42,    42,    43,
      44,    43,    45,    46,    46,    47,    47,    48,    48,    48,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    55,    54,    56,    56,    57,    57,    57,    57,
      57,    57,    59,    58,    58,    60,    60,    62,    61,    61,
      63,    63,    64,    64,    64,    64,    66,    65,    67,    67,
      68,    68,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       6,     1,     1,     0,     7,     1,     1,     3,     1,     2,
       0,     5,     4,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     5,     7,     5,     2,     3,     3,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     1,     1,     0,     4,     1,
       1,     1,     3,     1,     1,     1,     0,     5,     1,     1,
       3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 34 "cminus.y" /* yacc.c:1646  */
    { savedTree = (yyvsp[0]);}
#line 1325 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "cminus.y" /* yacc.c:1646  */
    { YYSTYPE t = (yyvsp[-1]);
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = (yyvsp[0]);
					(yyval) = (yyvsp[-1]); }
				  	else (yyval) = (yyvsp[0]);
				}
#line 1338 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1344 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1350 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1356 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "cminus.y" /* yacc.c:1646  */
    { savedName = yylval; 
				  savedLineNo = lineno;
				}
#line 1364 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "cminus.y" /* yacc.c:1646  */
    { savedNum = atoi(tokenString);
				  savedLineNo = lineno;
				}
#line 1372 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(Var_declarK);
			  	  (yyval)->attr.name = savedName;
				  (yyval)->lineno = lineno;
				  (yyval)->child[0] = (yyvsp[-2]);
				}
#line 1382 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(Varar_declarK);
				  (yyval)->attr.name = savedName;
				  (yyval)->lineno = lineno;
				  (yyval)->child[0] = (yyvsp[-5]);
				}
#line 1392 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(IntK); }
#line 1398 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(VoidK); }
#line 1404 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(Fun_declarK);
				  (yyval)->attr.name = savedName;
				  (yyval)->lineno = lineno;
				}
#line 1413 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "cminus.y" /* yacc.c:1646  */
    {
				  (yyval) = (yyvsp[-4]);
				  (yyval)->child[0] = (yyvsp[-6]);
				  (yyval)->child[1] = (yyvsp[-2]);
				  (yyval)->child[2] = (yyvsp[0]);
				}
#line 1424 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1430 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(ParamsK); }
#line 1436 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 101 "cminus.y" /* yacc.c:1646  */
    { YYSTYPE t = (yyvsp[-2]);
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = (yyvsp[0]);
					(yyval) = (yyvsp[-2]); }
				  	else (yyval) = (yyvsp[0]);
				}
#line 1449 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 109 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1455 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 113 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(SparamK);
				  (yyval)->child[0] = (yyvsp[-1]);
				  (yyval)->attr.name = yylval;
				  (yyval)->lineno = lineno;
				}
#line 1465 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 119 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AparamK);
				  (yyval)->attr.name = savedName;
				  (yyval)->lineno = lineno;
				}
#line 1474 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 124 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);
				  (yyval)->child[0] = (yyvsp[-4]);
				}
#line 1482 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 130 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(CompK);
				  (yyval)->child[0] = (yyvsp[-2]);
				  (yyval)->child[1] = (yyvsp[-1]);
				}
#line 1491 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 137 "cminus.y" /* yacc.c:1646  */
    { YYSTYPE t = (yyvsp[-1]);
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = (yyvsp[0]);
					(yyval) = (yyvsp[-1]); }
				  	else (yyval) = (yyvsp[0]);
				}
#line 1504 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 149 "cminus.y" /* yacc.c:1646  */
    { YYSTYPE t = (yyvsp[-1]);
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = (yyvsp[0]);
					(yyval) = (yyvsp[-1]); }
				  	else (yyval) = (yyvsp[0]);
				}
#line 1517 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 160 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1523 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 160 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1529 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 161 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1535 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 161 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1541 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 162 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1547 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 165 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1553 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 169 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(IfK);
				  (yyval)->child[0] = (yyvsp[-2]);
				  (yyval)->child[1] = (yyvsp[0]);
				}
#line 1562 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 174 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(ElseK);
				  (yyval)->child[0] = (yyvsp[-4]);
				  (yyval)->child[1] = (yyvsp[-2]);
				  (yyval)->child[2] = (yyvsp[0]);
				}
#line 1572 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(WhileK);
				  (yyval)->child[0] = (yyvsp[-2]);
				  (yyval)->child[1] = (yyvsp[0]);
				}
#line 1581 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(ReturnK);
				  (yyval)->child[0] = (yyvsp[-1]);
				}
#line 1589 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 196 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(AssignK);
				  (yyval)->child[0] = (yyvsp[-2]);
				  (yyval)->child[1] = (yyvsp[0]);
				  (yyval)->attr.op = ASSIGN;
				}
#line 1599 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 201 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1605 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 205 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
				  (yyval)->attr.name = copyString(yylval);
				  (yyval)->lineno = lineno;
				}
#line 1614 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 210 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
				  (yyval)->attr.name = savedName;
				  (yyval)->lineno = lineno;
				}
#line 1623 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
				  (yyval)->child[0] = (yyvsp[-1]);
				}
#line 1631 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 221 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
				  (yyval)->child[0] = (yyvsp[-2]);
				  (yyval)->child[1] = (yyvsp[0]);
				  (yyval)->attr.op = savedOp;
				}
#line 1641 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 226 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1647 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 229 "cminus.y" /* yacc.c:1646  */
    { savedOp = LE; }
#line 1653 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 230 "cminus.y" /* yacc.c:1646  */
    { savedOp = LT; }
#line 1659 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 231 "cminus.y" /* yacc.c:1646  */
    { savedOp = GT; }
#line 1665 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 232 "cminus.y" /* yacc.c:1646  */
    { savedOp = GE; }
#line 1671 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 233 "cminus.y" /* yacc.c:1646  */
    { savedOp = EQ; }
#line 1677 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 234 "cminus.y" /* yacc.c:1646  */
    { savedOp = NE; }
#line 1683 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
				  (yyval)->attr.op = savedOp;
				}
#line 1691 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 242 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);
				  (yyval)->child[0] = (yyvsp[-3]);
				  (yyval)->child[1] = (yyvsp[0]);
				}
#line 1700 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 246 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1706 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 249 "cminus.y" /* yacc.c:1646  */
    { savedOp = PLUS; }
#line 1712 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 250 "cminus.y" /* yacc.c:1646  */
    { savedOp = MINUS; }
#line 1718 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 254 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
				  (yyval)->attr.op = savedOp;
				}
#line 1726 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 258 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);
				  (yyval)->child[0] = (yyvsp[-3]);
				  (yyval)->child[1] = (yyvsp[0]);
				}
#line 1735 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 262 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1741 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 265 "cminus.y" /* yacc.c:1646  */
    { savedOp = TIMES; }
#line 1747 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 266 "cminus.y" /* yacc.c:1646  */
    { savedOp = OVER; }
#line 1753 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 269 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1759 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 270 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1765 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 271 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1771 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 273 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(ConstK);
				  (yyval)->attr.val = atoi(tokenString);
				}
#line 1779 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 279 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(CallK);
				  (yyval)->attr.name = savedName;
				  (yyval)->lineno = lineno;
				}
#line 1788 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 284 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
				  (yyval)->child[0] = (yyvsp[-1]);
				}
#line 1796 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 289 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1802 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 294 "cminus.y" /* yacc.c:1646  */
    { YYSTYPE t = (yyvsp[-2]);
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = (yyvsp[0]);
					(yyval) = (yyvsp[-2]); }
				  	else (yyval) = (yyvsp[0]);
				}
#line 1815 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 302 "cminus.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1821 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 305 "cminus.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1827 "cminus.tab.c" /* yacc.c:1646  */
    break;


#line 1831 "cminus.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 308 "cminus.y" /* yacc.c:1906  */


int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}

