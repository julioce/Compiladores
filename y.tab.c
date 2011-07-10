/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _VALUE_NULL = 258,
     _TRUE = 259,
     _FALSE = 260,
     _VALUE_INTEGER = 261,
     _VALUE_DOUBLE = 262,
     _VALUE_CHAR = 263,
     _VALUE_STRING = 264,
     _BEGIN = 265,
     _DO = 266,
     _END = 267,
     _VAR = 268,
     _INTEGER = 269,
     _DOUBLE = 270,
     _CHAR = 271,
     _STRING = 272,
     _BOOLEAN = 273,
     _FUNCTION = 274,
     _ARRAY = 275,
     _OF = 276,
     _AND = 277,
     _OR = 278,
     _NOT = 279,
     _IF = 280,
     _ELSE = 281,
     _FOR = 282,
     _WHILE = 283,
     _PRINT = 284,
     _READ = 285,
     _ATRIBUICAO = 286,
     _MENORIGUAL = 287,
     _MAIORIGUAL = 288,
     _IGUAL = 289,
     _DIFERENTE = 290,
     _ID = 291
   };
#endif
/* Tokens.  */
#define _VALUE_NULL 258
#define _TRUE 259
#define _FALSE 260
#define _VALUE_INTEGER 261
#define _VALUE_DOUBLE 262
#define _VALUE_CHAR 263
#define _VALUE_STRING 264
#define _BEGIN 265
#define _DO 266
#define _END 267
#define _VAR 268
#define _INTEGER 269
#define _DOUBLE 270
#define _CHAR 271
#define _STRING 272
#define _BOOLEAN 273
#define _FUNCTION 274
#define _ARRAY 275
#define _OF 276
#define _AND 277
#define _OR 278
#define _NOT 279
#define _IF 280
#define _ELSE 281
#define _FOR 282
#define _WHILE 283
#define _PRINT 284
#define _READ 285
#define _ATRIBUICAO 286
#define _MENORIGUAL 287
#define _MAIORIGUAL 288
#define _IGUAL 289
#define _DIFERENTE 290
#define _ID 291




/* Copy the first part of user declarations.  */
#line 1 "trabalho.y"

/*Grupo
  Júlio César Machado Bueno - 106033507
  Jonas Tomaz Alves - 106089655
  Débora Ribeiro Nobre - 107390677
*/

#include <string>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

struct Atributos {
  string v, c, t;

  Atributos(): v(""), c(""), t("") {}
  Atributos(string v, string c, string t): v(v), c(c), t(t) {} 
};

int yyparse();
int yylex();
int toInt( string n );

string toStr( int n );
string criaTemp( string tipo );
string criaLabel( string prefixo );
string geraCodigoDeclaracaoVarTemp();
string buscaTipoVar( string nome );
string tipoOperacao( string opr, string tipoA, string tipoB );

void yyerror( const char* st );
void erroSemantico( string erro );
void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3);
void insereVar( string nome, string tipo );

map< string, string > ts;

#define YYSTYPE Atributos


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 220 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   466

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    43,     2,     2,
      46,    47,    41,    39,    45,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    50,
      37,     2,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    13,    16,    17,    21,    24,
      25,    29,    33,    35,    41,    50,    57,    61,    64,    68,
      70,    74,    76,    79,    80,    84,    86,    88,    90,    92,
      94,    96,    98,   102,   109,   119,   124,   132,   142,   154,
     162,   170,   172,   177,   181,   185,   189,   193,   197,   201,
     205,   209,   213,   217,   221,   225,   229,   231,   233,   235,
     239,   242,   245,   248,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   268,   270,   275,   280,   285,   290,   295,
     301,   307,   313,   319,   325,   327,   329,   331,   333,   335,
     341,   347,   353,   359,   365,   371,   377
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    54,    10,    63,    12,    -1,
      55,    54,    -1,    59,    54,    -1,    -1,    13,    56,    12,
      -1,    57,    56,    -1,    -1,    58,    44,    75,    -1,    36,
      45,    58,    -1,    36,    -1,    19,    36,    44,    75,    60,
      -1,    19,    36,    46,    61,    47,    44,    75,    60,    -1,
      19,    36,    46,    61,    47,    60,    -1,    55,    63,    12,
      -1,    63,    12,    -1,    57,    45,    61,    -1,    57,    -1,
      72,    45,    62,    -1,    72,    -1,    63,    64,    -1,    -1,
      11,    63,    12,    -1,    65,    -1,    66,    -1,    67,    -1,
      68,    -1,    69,    -1,    70,    -1,    71,    -1,    36,    31,
      72,    -1,    36,    48,    72,    49,    31,    72,    -1,    36,
      48,    72,    49,    48,    72,    49,    31,    72,    -1,    29,
      46,    72,    47,    -1,    25,    46,    72,    47,    11,    63,
      12,    -1,    25,    46,    72,    47,    11,    63,    26,    63,
      12,    -1,    27,    46,    65,    50,    72,    50,    72,    47,
      11,    63,    12,    -1,    28,    46,    72,    47,    11,    63,
      12,    -1,    11,    63,    28,    46,    72,    47,    12,    -1,
      36,    -1,    36,    46,    62,    47,    -1,    72,    39,    72,
      -1,    72,    40,    72,    -1,    72,    41,    72,    -1,    72,
      42,    72,    -1,    72,    43,    72,    -1,    72,    37,    72,
      -1,    72,    38,    72,    -1,    72,    33,    72,    -1,    72,
      32,    72,    -1,    72,    34,    72,    -1,    72,    35,    72,
      -1,    72,    22,    72,    -1,    72,    23,    72,    -1,    73,
      -1,    36,    -1,    74,    -1,    46,    72,    47,    -1,    24,
      73,    -1,    40,    73,    -1,    39,    73,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,     4,    -1,     5,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      20,    76,    21,    14,    -1,    20,    76,    21,    15,    -1,
      20,    76,    21,    16,    -1,    20,    76,    21,    17,    -1,
      20,    76,    21,    18,    -1,    20,    76,    76,    21,    14,
      -1,    20,    76,    76,    21,    15,    -1,    20,    76,    76,
      21,    16,    -1,    20,    76,    76,    21,    17,    -1,    20,
      76,    76,    21,    18,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    48,     6,    44,     6,    49,
      -1,    48,     7,    44,     7,    49,    -1,    48,     8,    44,
       8,    49,    -1,    48,     9,    44,     9,    49,    -1,    48,
       4,    44,     4,    49,    -1,    48,     4,    44,     5,    49,
      -1,    48,     5,    44,     4,    49,    -1,    48,     5,    44,
       5,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    70,    73,    74,    75,    82,    84,    85,
      87,   105,   106,   113,   114,   115,   117,   118,   120,   121,
     123,   124,   131,   132,   134,   135,   136,   137,   138,   139,
     140,   141,   147,   165,   166,   172,   181,   194,   215,   216,
     217,   222,   223,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   246,   252,   253,
     254,   255,   256,   263,   264,   265,   266,   267,   268,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   286,   287,   288,   289,   290,   292,
     293,   294,   295,   296,   297,   298,   299
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_VALUE_NULL", "_TRUE", "_FALSE",
  "_VALUE_INTEGER", "_VALUE_DOUBLE", "_VALUE_CHAR", "_VALUE_STRING",
  "_BEGIN", "_DO", "_END", "_VAR", "_INTEGER", "_DOUBLE", "_CHAR",
  "_STRING", "_BOOLEAN", "_FUNCTION", "_ARRAY", "_OF", "_AND", "_OR",
  "_NOT", "_IF", "_ELSE", "_FOR", "_WHILE", "_PRINT", "_READ",
  "_ATRIBUICAO", "_MENORIGUAL", "_MAIORIGUAL", "_IGUAL", "_DIFERENTE",
  "_ID", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "':'", "','",
  "'('", "')'", "'['", "']'", "';'", "$accept", "PROGRAMA",
  "BLOCO_PRINCIPAL", "DECLARACOES_GLOBAIS", "VAR", "DECLARACOES_VARS",
  "DECLARACAO_VAR", "LISTA_IDS", "FUN", "CORPO", "PARAMS", "LISTA_E",
  "CMDS", "CMD", "CMD_ATRIB", "CMD_SAIDA", "CMD_IF_ELSE", "CMD_FOR",
  "CMD_WHILE", "CMD_DO_WHILE", "CMD_FUNCTION", "E", "F", "VALUE", "TIPOS",
  "TIPO_ARRAY", "ARRAY_INTEGER", "ARRAY_DOUBLE", "ARRAY_CHAR",
  "ARRAY_STRING", "ARRAY_BOOLEAN", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    60,    62,    43,
      45,    42,    47,    37,    58,    44,    40,    41,    91,    93,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    54,    55,    56,    56,
      57,    58,    58,    59,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    66,    67,    67,    68,    69,
      70,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    77,
      78,    79,    80,    81,    81,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     2,     2,     0,     3,     2,     0,
       3,     3,     1,     5,     8,     6,     3,     2,     3,     1,
       3,     1,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     9,     4,     7,     9,    11,     7,
       7,     1,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     1,     5,
       5,     5,     5,     5,     5,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     9,     0,     0,     2,     0,     6,     6,    12,     0,
       9,     0,     0,     1,    23,     4,     5,     0,     7,     8,
       0,     0,     0,     0,    11,    69,    70,    71,    72,    73,
       0,    10,    23,    19,     0,    23,     3,     0,     0,     0,
       0,    41,    22,    25,    26,    27,    28,    29,    30,    31,
       0,     0,    84,    85,    86,    87,    88,    23,    13,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,     0,    15,    24,     0,    67,    68,    63,    64,    65,
      66,     0,    57,     0,     0,     0,     0,    56,    58,     0,
       0,     0,     0,    32,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,     0,    16,
      23,     0,    60,    62,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    14,
       0,    59,    54,    55,    51,    50,    52,    53,    48,    49,
      43,    44,    45,    46,    47,    23,     0,    23,    20,     0,
       0,    93,    94,    95,    96,    89,    90,    91,    92,     0,
       0,     0,     0,    33,     0,    40,    36,    23,     0,    39,
       0,     0,     0,     0,    37,    23,    34,     0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     9,    10,    11,     7,    58,
      34,   104,    59,    42,    43,    44,    45,    46,    47,    48,
      49,   105,    97,    98,    31,    51,    52,    53,    54,    55,
      56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
       3,    14,    16,    34,   -68,    22,     3,     3,   -39,    51,
      14,    36,   -16,   -68,   -68,   -68,   -68,    14,   -68,   -68,
      40,    40,    14,   289,   -68,   -68,   -68,   -68,   -68,   -68,
      41,   -68,    82,    63,    74,   -68,   -68,    78,    94,    97,
      98,    -8,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
      79,    -2,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   294,
      14,    -5,   315,     5,   103,     5,     5,     5,     5,     5,
     101,   102,   107,   118,   121,   122,    89,   146,   320,   -68,
     -68,    40,   -68,   -68,   127,   -68,   -68,   -68,   -68,   -68,
     -68,     5,   -68,     5,     5,     5,   137,   -68,   -68,   -13,
     131,   163,   185,   385,   135,   361,    93,    32,    57,   162,
     180,   181,   179,   -68,   -68,   -68,   -68,   -68,    96,   -68,
      82,     5,   -68,   -68,   -68,   207,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,   182,
       5,   183,   -68,   -68,     5,    -6,   141,   143,   150,   160,
     164,   165,   166,   167,   -68,   -68,   -68,   -68,   -68,   -68,
     229,   -68,   411,   399,   423,   423,   423,   423,   423,   423,
       6,     6,   -68,   -68,   -68,   -68,    59,   -68,   -68,     5,
       5,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   108,
     284,     5,   325,   385,   115,   -68,   -68,   -68,   251,   -68,
     190,   346,   200,     5,   -68,   -68,   385,   351,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   116,   -30,   202,    -7,   214,   -68,   -41,
     173,    90,   -14,   -68,   171,   -68,   -68,   -68,   -68,   -68,
     -68,   -62,   -67,   -68,    -4,   186,   -68,   -68,   -68,   -68,
     -68
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      23,    96,    57,   101,   102,   103,    17,   106,     1,    85,
      86,    87,    88,    89,    90,    33,     1,    32,    67,    76,
      82,    62,     2,    67,   122,   179,   123,   124,    21,    91,
      22,    57,    14,   125,    13,    69,   146,   147,    68,    81,
      69,    92,   180,    78,    93,    94,    50,   136,   137,   138,
       8,    95,    12,    33,    25,    26,    27,    28,    29,   160,
      30,   148,   149,    18,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   120,   176,   159,
      20,   126,   127,    70,    71,    72,    73,    74,    75,    50,
      57,   128,   129,   130,   131,     1,   132,   133,   134,   135,
     136,   137,   138,   113,   114,   115,   116,   117,    60,   191,
     154,   155,   156,   157,   158,   126,   127,   193,   194,   177,
     195,    61,    15,    16,    63,   128,   129,   130,   131,   198,
     132,   133,   134,   135,   136,   137,   138,   126,   127,    99,
      64,   206,   145,    65,    66,   107,   108,   128,   129,   130,
     131,   109,   132,   133,   134,   135,   136,   137,   138,   126,
     127,   190,   110,   192,   200,   111,   112,   118,   150,   128,
     129,   130,   131,   121,   132,   133,   134,   135,   136,   137,
     138,   140,   143,   201,   139,   126,   127,   151,   153,   152,
     181,   207,   182,   175,   177,   128,   129,   130,   131,   183,
     132,   133,   134,   135,   136,   137,   138,   126,   127,   184,
     141,   205,    19,   185,   186,   187,   188,   128,   129,   130,
     131,   203,   132,   133,   134,   135,   136,   137,   138,   126,
     127,    24,   142,    80,   178,   100,     0,    77,     0,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   126,   127,     0,   161,     0,     0,     0,     0,     0,
       0,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   126,   127,     0,   189,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,    35,   196,     0,   202,     0,
      35,    36,     0,     0,     0,    35,    79,     0,     0,    37,
     197,    38,    39,    40,    37,     0,    38,    39,    40,    37,
      41,    38,    39,    40,     0,    41,    35,    83,     0,     0,
      41,    35,   119,     0,     0,     0,    35,   199,     0,     0,
      37,     0,    38,    84,    40,    37,     0,    38,    39,    40,
      37,    41,    38,    39,    40,     0,    41,    35,   204,     0,
       0,    41,    35,   208,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,    39,    40,    37,     0,    38,    39,
      40,     0,    41,   126,   127,     0,     0,    41,     0,     0,
       0,     0,     0,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,     0,   144,   126,   127,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,   126,   132,   133,   134,   135,   136,   137,   138,     0,
       0,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,     0,
      -1,    -1,   134,   135,   136,   137,   138
};

static const yytype_int16 yycheck[] =
{
      14,    63,    32,    65,    66,    67,    45,    69,    13,     4,
       5,     6,     7,     8,     9,    22,    13,    21,    31,    21,
      61,    35,    19,    31,    91,    31,    93,    94,    44,    24,
      46,    61,    10,    95,     0,    48,     4,     5,    46,    44,
      48,    36,    48,    57,    39,    40,    48,    41,    42,    43,
      36,    46,    36,    60,    14,    15,    16,    17,    18,   121,
      20,     4,     5,    12,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    81,   140,   120,
      44,    22,    23,     4,     5,     6,     7,     8,     9,    48,
     120,    32,    33,    34,    35,    13,    37,    38,    39,    40,
      41,    42,    43,    14,    15,    16,    17,    18,    45,    50,
      14,    15,    16,    17,    18,    22,    23,   179,   180,    11,
      12,    47,     6,     7,    46,    32,    33,    34,    35,   191,
      37,    38,    39,    40,    41,    42,    43,    22,    23,    36,
      46,   203,    49,    46,    46,    44,    44,    32,    33,    34,
      35,    44,    37,    38,    39,    40,    41,    42,    43,    22,
      23,   175,    44,   177,    49,    44,    44,    21,     6,    32,
      33,    34,    35,    46,    37,    38,    39,    40,    41,    42,
      43,    50,    47,   197,    47,    22,    23,     7,     9,     8,
      49,   205,    49,    11,    11,    32,    33,    34,    35,    49,
      37,    38,    39,    40,    41,    42,    43,    22,    23,    49,
      47,    11,    10,    49,    49,    49,    49,    32,    33,    34,
      35,    31,    37,    38,    39,    40,    41,    42,    43,    22,
      23,    17,    47,    60,   144,    64,    -1,    51,    -1,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    22,    23,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    22,    23,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    11,    12,    -1,    47,    -1,
      11,    12,    -1,    -1,    -1,    11,    12,    -1,    -1,    25,
      26,    27,    28,    29,    25,    -1,    27,    28,    29,    25,
      36,    27,    28,    29,    -1,    36,    11,    12,    -1,    -1,
      36,    11,    12,    -1,    -1,    -1,    11,    12,    -1,    -1,
      25,    -1,    27,    28,    29,    25,    -1,    27,    28,    29,
      25,    36,    27,    28,    29,    -1,    36,    11,    12,    -1,
      -1,    36,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    25,    -1,    27,    28,
      29,    -1,    36,    22,    23,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    22,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    19,    52,    53,    54,    55,    59,    36,    56,
      57,    58,    36,     0,    10,    54,    54,    45,    12,    56,
      44,    44,    46,    63,    58,    14,    15,    16,    17,    18,
      20,    75,    75,    57,    61,    11,    12,    25,    27,    28,
      29,    36,    64,    65,    66,    67,    68,    69,    70,    71,
      48,    76,    77,    78,    79,    80,    81,    55,    60,    63,
      45,    47,    63,    46,    46,    46,    46,    31,    46,    48,
       4,     5,     6,     7,     8,     9,    21,    76,    63,    12,
      61,    44,    60,    12,    28,     4,     5,     6,     7,     8,
       9,    24,    36,    39,    40,    46,    72,    73,    74,    36,
      65,    72,    72,    72,    62,    72,    72,    44,    44,    44,
      44,    44,    44,    14,    15,    16,    17,    18,    21,    12,
      75,    46,    73,    73,    73,    72,    22,    23,    32,    33,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    47,
      50,    47,    47,    47,    45,    49,     4,     5,     4,     5,
       6,     7,     8,     9,    14,    15,    16,    17,    18,    60,
      72,    47,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    11,    72,    11,    62,    31,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    47,
      63,    50,    63,    72,    72,    12,    12,    26,    72,    12,
      49,    63,    47,    31,    12,    11,    72,    63,    12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 63 "trabalho.y"
    { cout << "#include <iostream>\n"
                                     "#include <string.h>\n"
                                     "#include <stdio.h>\n\n"
                                     "using namespace std;\n\n"
                                     "#define TRUE 1\n"
                                     "#define FALSE 0\n\n" << (yyvsp[(1) - (1)]).c << "\n" << endl; }
    break;

  case 3:
#line 71 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (4)]).c + geraCodigoDeclaracaoVarTemp() + "\nint main() {\n" + (yyvsp[(3) - (4)]).c + "\treturn 0;\n}\n"; }
    break;

  case 4:
#line 73 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 5:
#line 74 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 6:
#line 75 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 7:
#line 82 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 8:
#line 84 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 9:
#line 85 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 10:
#line 88 "trabalho.y"
    { 
                 string lista = (yyvsp[(1) - (3)]).v;
                 string tipo = (yyvsp[(3) - (3)]).t;
                 (yyval).c = "";
    
                 for( size_t pos = lista.find( "$" ); pos != string::npos; pos = lista.find( "$" ) ) { 
                   string variavel = lista.substr( 0, pos );
                   if(tipo == "string"){
                     (yyval).c += "char " + variavel + "[256];\n"; 
                   }else{
                     (yyval).c += tipo + " " + variavel + ";\n"; 
                   }
                   insereVar( variavel, tipo );
                   lista = lista.substr( pos+1 );
                 }
               }
    break;

  case 11:
#line 105 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (3)]).v + "$" + (yyvsp[(3) - (3)]).v; }
    break;

  case 12:
#line 106 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (1)]).v + "$"; }
    break;

  case 22:
#line 131 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 23:
#line 132 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 24:
#line 134 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (3)]).c + (yyvsp[(2) - (3)]).c + (yyvsp[(3) - (3)]).c; }
    break;

  case 32:
#line 148 "trabalho.y"
    {
            (yyvsp[(1) - (3)]).t = buscaTipoVar( (yyvsp[(1) - (3)]).v );
            (yyval).t = ""; 
            (yyval).v = "";

            (yyval).c = (yyvsp[(3) - (3)]).c;

            if( ((yyvsp[(1) - (3)]).t == (yyvsp[(3) - (3)]).t && (yyvsp[(1) - (3)]).t != "string") || ((yyvsp[(1) - (3)]).t == "double" && (yyvsp[(3) - (3)]).t == "int") ){
              (yyval).c += "\t" + (yyvsp[(3) - (3)]).c + (yyvsp[(1) - (3)]).v + " = " + (yyvsp[(3) - (3)]).v + ";\n";
            }else if( (yyvsp[(1) - (3)]).t == "string" && (yyvsp[(3) - (3)]).t == "string" ){
              (yyval).c += "\tstrncpy(" + (yyvsp[(1) - (3)]).v + ", " + (yyvsp[(3) - (3)]).v + ", 256);\n";
            }else if( (yyvsp[(1) - (3)]).t == "string" && (yyvsp[(3) - (3)]).t == "char" ){
              (yyval).c += "\t" + (yyvsp[(3) - (3)]).c + (yyvsp[(1) - (3)]).v + "[0] = " + (yyvsp[(3) - (3)]).v + ";\n" + (yyvsp[(1) - (3)]).v + "[1] = 0;\n";
            }else{
              erroSemantico( "Não é possível atribuir " + (yyvsp[(3) - (3)]).t + " à " + (yyvsp[(1) - (3)]).t );
            }
          }
    break;

  case 35:
#line 173 "trabalho.y"
    {
              (yyval).v = "";
              (yyval).c = "\tputs("+ (yyvsp[(3) - (4)]).v +");\n";
            }
    break;

  case 36:
#line 182 "trabalho.y"
    {
              string varTeste = criaTemp( "bool" );
              string labelFim = criaLabel( "label_fim" );
              (yyval).v = "";
              (yyval).c = (yyvsp[(3) - (7)]).c + 
                "\t" + varTeste + " = " + (yyvsp[(3) - (7)]).v + ";\n" 
                "\tif( !" + varTeste + " ) goto " + 
                labelFim + ";\n" +
                (yyvsp[(6) - (7)]).c +
                "\t" + labelFim +":\n"; 
 
            }
    break;

  case 37:
#line 195 "trabalho.y"
    {
              string varTeste = criaTemp( "bool" );
              string labelFim = criaLabel( "label_fim" );
              string labelElse = criaLabel( "label_else" );
              (yyval).v = "";
              (yyval).c = (yyvsp[(3) - (9)]).c + 
                "\t" + varTeste + " = " + (yyvsp[(3) - (9)]).v + ";\n" 
                "\tif( !" + varTeste + " ) goto " + 
                labelElse +";\n" +
                (yyvsp[(6) - (9)]).c +
                "\tgoto " + labelFim + ";\n\t" +
                labelElse + ":\n" + 
                (yyvsp[(8) - (9)]).c +  
                "\t" + labelFim + ":\n"; 
            }
    break;

  case 43:
#line 229 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "+", (yyvsp[(3) - (3)]) ); }
    break;

  case 44:
#line 230 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "-", (yyvsp[(3) - (3)]) ); }
    break;

  case 45:
#line 231 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "*", (yyvsp[(3) - (3)]) ); }
    break;

  case 46:
#line 232 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "/", (yyvsp[(3) - (3)]) ); }
    break;

  case 47:
#line 233 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "%", (yyvsp[(3) - (3)]) ); }
    break;

  case 48:
#line 234 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<", (yyvsp[(3) - (3)]) ); }
    break;

  case 49:
#line 235 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">", (yyvsp[(3) - (3)]) ); }
    break;

  case 50:
#line 236 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">=", (yyvsp[(3) - (3)]) );}
    break;

  case 51:
#line 237 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<=", (yyvsp[(3) - (3)]) );}
    break;

  case 52:
#line 238 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "==", (yyvsp[(3) - (3)]) );}
    break;

  case 53:
#line 239 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "!=", (yyvsp[(3) - (3)]) );}
    break;

  case 54:
#line 240 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "&&", (yyvsp[(3) - (3)]) );}
    break;

  case 55:
#line 241 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "||", (yyvsp[(3) - (3)]) );}
    break;

  case 57:
#line 247 "trabalho.y"
    { 
    (yyval).c = (yyvsp[(1) - (1)]).c;
    (yyval).v = (yyvsp[(1) - (1)]).v;
    (yyval).t = buscaTipoVar( (yyvsp[(1) - (1)]).v );
  }
    break;

  case 59:
#line 253 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 60:
#line 254 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 61:
#line 255 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 62:
#line 256 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;


/* Line 1267 of yacc.c.  */
#line 1900 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 301 "trabalho.y"

#include "lex.yy.c"

struct Resultado {
  string opr, a, b, r;
} resultado[] = {
  //Concatenação de int, double, char e strings
  { "+", "char", "char", "string" },
  { "+", "char", "string", "string" },
  { "+", "string", "char", "string" },
  { "+", "string", "string", "string" },
  { "+", "int", "char", "string" },
  { "+", "char", "int", "string" },
  { "+", "double", "char", "string" },
  { "+", "char", "double", "string" },
  { "+", "int", "string", "string" },
  { "+", "string", "int", "string" },
  { "+", "double", "string", "string" },
  { "+", "string", "double", "string" },
  
  //Opreações aritméticas básicas
  { "+", "int", "int", "int" },
  { "+", "int", "double", "double" },
  { "+", "double", "int", "double" },
  { "+", "double", "double", "double" },
  { "-", "int", "int", "int" },
  { "-", "double", "int", "double" },
  { "-", "int", "double", "double" },
  { "-", "double", "double", "double" },
  { "*", "int", "int", "int" },
  { "*", "int", "double", "double" },
  { "*", "double", "int", "double" },
  { "*", "double", "double", "double" },
  { "%", "int", "int", "int" },
  { "%", "double", "int", "double" },
  { "%", "int", "double", "double" },
  { "%", "double", "double", "double" },
  
  //Operação OR lógico
  { "||", "int", "int", "bool" },
  { "||", "int", "bool", "bool" },
  { "||", "bool", "int", "bool" },
  { "||", "bool", "bool", "bool" },
  { "||", "double", "double", "bool" },
  { "||", "int", "double", "bool" },
  { "||", "double", "int", "bool" },
  { "||", "double", "double", "bool" },
  
  //Operação AND lógico
  { "&&", "int", "int", "bool" },
  { "&&", "int", "bool", "bool" },
  { "&&", "bool", "int", "bool" },
  { "&&", "bool", "bool", "bool" },
  { "&&", "double", "double", "bool" },
  { "&&", "int", "double", "bool" },
  { "&&", "double", "int", "bool" },
  { "&&", "double", "double", "bool" },
  
  //Comparação aritmética ==
  { "==", "int", "int", "bool" },
  { "==", "int", "double", "bool" },
  { "==", "int", "bool", "bool" },
  { "==", "double", "double", "bool" },
  { "==", "double", "int", "bool" },
  { "==", "double", "bool", "bool" },
  { "==", "bool", "double", "bool" },
  { "==", "bool", "bool", "bool" },
  
  //Comparação aritmética >
  { ">", "int", "int", "bool" },
  { ">", "int", "double", "bool" },
  { ">", "double", "int", "bool" },
  { ">", "double", "double", "bool" },
  
  //Comparação aritmética >=
  { ">=", "int", "int", "bool" },
  { ">=", "int", "double", "bool" },
  { ">=", "double", "int", "bool" },
  { ">=", "double", "double", "bool" },
  
  //Comparação aritmética <
  { "<", "int", "int", "bool" },
  { "<", "int", "double", "bool" },
  { "<", "double", "int", "bool" },
  { "<", "double", "double", "bool" },
  
  //Comparação aritmética <=
  { "<=", "int", "int", "bool" },
  { "<=", "int", "double", "bool" },
  { "<=", "double", "int", "bool" },
  { "<=", "double", "double", "bool" },
  { "", "", "", "" }
};

struct Temporarias {
  int tipo_int;
  int tipo_char;
  int tipo_double;
  int tipo_string;
  int tipo_bool;
} n_temp = { 0, 0, 0, 0, 0 };

int n_label = 0;

void geraCodigoOperador( Atributos& ss, Atributos s1, string op, Atributos s3 ) {
  ss.t = tipoOperacao( op, s1.t, s3.t ); 
  ss.v = criaTemp( ss.t );
  string strA = s1.v, strB = s3.v, conversoes = "";
  
  
  if( (s1.t == "int" && s3.t == "int") || 
      (s1.t == "int" && s3.t == "double") || 
      (s1.t == "double" && s3.t == "int") || 
      (s1.t == "double" && s3.t == "double") ||
      (s1.t == "int" && s3.t == "bool") || 
      (s1.t == "bool" && s3.t == "int") || 
      (s1.t == "bool" && s3.t == "bool") || 
      (s1.t == "double" && s3.t == "bool") || 
      (s1.t == "bool" && s3.t == "double") ){
  	ss.c = s1.c + s3.c + "\t" + ss.v + " = " + strA + " " + op + " " + strB + ";\n";
  	
  }else{
  	if( s1.t == "string" && s3.t == "string" ){
  	  strA = criaTemp( "string" );
  	  conversoes += "\tstrncpy(" + strA + ", " + s1.v + ", 256);\n" + "\tstrcat(" + strA + ", " + strB + ");\n";
  	  ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n";
  	  
    }else if( s1.t == "char" && s3.t == "string" ){
  	  strA = criaTemp( "string" );
      conversoes += strA + "[0] = " + s1.v + ";\n" + "\t" + strA + "[1] = 0;\n";
      ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n\tstrcat(" + ss.v + ", " + strB + ");\n";
      
    }else if( s1.t == "string" && s3.t == "char" ){
      strB = criaTemp( "string" );
      conversoes += "\t" + strB + "[0] = " + s3.v + ";\n" + "\t" + strB + "[1] = 0;\n";
      ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n\tstrcat(" + ss.v + ", " + strB + ");\n";
      
    }else if( s1.t == "char" && s3.t == "char" ){
      strA = criaTemp( "string" );
      conversoes += strA + "[0] = " + s1.v + ";\n" + "\t" + strA + "[1] = 0;\n";
      strB = criaTemp( "string" );
      conversoes += "\t" + strB + "[0] = " + s3.v + ";\n" + "\t" + strB + "[1] = 0;\n";
      ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n\tstrcat(" + ss.v + ", " + strB + ");\n";
      
    }else if( s1.t == "double" && s3.t == "string" ){
      strA = criaTemp( "string" );
      strB = criaTemp( "string" );
      conversoes += "\tsprintf(" + strA + ", \"%lf\", " + s1.v + ");\n";
      conversoes += "\tstrncpy(" + strB + ", " + s3.v + ", 256);\n";
      ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n\tstrcat(" + ss.v + ", " + strB + ");\n";
      
    }else if( s1.t == "string" && s3.t == "double" ){
      strA = criaTemp( "string" );
      strB = criaTemp( "string" );
      conversoes += "\tsprintf(" + strB + ", \"%lf\", " + s3.v + ");\n";
      conversoes += "\tstrncpy(" + strA + ", " + s1.v + ", 256);\n";
      ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n\tstrcat(" + ss.v + ", " + strB + ");\n";
      
    }    
    
  }
}

void yyerror( const char* st ){
  cout << "Erro sintático: " << st << endl
       << "Erro anterior ao token: " << yytext << endl;
}

void erroSemantico( string erro ){
  cout << "Erro semântico: " << erro << endl;
  cout << "Erro anterior ao token: " << yytext << endl;
  exit(0);
}

void insereVar( string nome, string tipo ) {
  if( ts.find( nome ) == ts.end() ) 
    ts[nome] = tipo;
  else 
    erroSemantico( "Variável já declarada: " + nome ); 
}

string buscaTipoVar( string nome ) {
  if( ts.find( nome ) == ts.end() ) 
    erroSemantico( "Variável não declarada: " + nome );

  return ts[nome];
}

string toStr( int n ) {
  stringstream temp;
  temp << n;

  return temp.str();
}

string criaTemp( string tipo ) {
  if( tipo == "int" ) {
    return "_t_int_" + toStr( ++n_temp.tipo_int );
  }else if( tipo == "char" ) {
    return "_t_char_" + toStr( ++n_temp.tipo_char );
  }else if( tipo == "double" ) {
    return "_t_double_" + toStr( ++n_temp.tipo_double );
  }else if( tipo == "string" ) {
    return "_t_string_" + toStr( ++n_temp.tipo_string );
  }else if( tipo == "bool" ) {
    return "_t_boolean_" + toStr( ++n_temp.tipo_bool );
  }else
    erroSemantico( "Bug interno do Compilador ao criar variáveis temporárias." );

  return "";
}

string criaLabel( string prefixo ) {
  return prefixo + "_" + toStr( ++n_label );
}

string geraCodigoDeclaracaoVarTemp() {
  string aux = "";
  
  for( int i = 1; i <= n_temp.tipo_int; i++ )
    aux += "int _t_int_" + toStr( i ) + ";\n";

  for( int i = 1; i <= n_temp.tipo_char; i++ )
    aux += "char _t_char_" + toStr( i ) + ";\n";

  for( int i = 1; i <= n_temp.tipo_bool; i++ )
    aux += "bool _t_boolean_" + toStr( i ) + ";\n";

  for( int i = 1; i <= n_temp.tipo_double; i++ )
    aux += "double _t_double_" + toStr( i ) + ";\n";

  for( int i = 1; i <= n_temp.tipo_string; i++ )
    aux += "char _t_string_" + toStr( i ) + "[256];\n";

  return aux;
}

string tipoOperacao( string opr, string tipoA, string tipoB ) {
  for( int i = 0; resultado[i].opr != ""; i++ ) {
    if( (resultado[i].opr == opr) && (resultado[i].a == tipoA) && (resultado[i].b == tipoB) )
      return resultado[i].r;
  }

  erroSemantico( "O operador '" + opr + "' não está definido para os tipos " + tipoA + " e " + tipoB );
  return ""; 
}


int toInt( string n ) {
  stringstream temp;
  int valor;
  
  temp << n;
  temp >> valor;

  return valor;
}

int main( int argc, char* argv[] )
{
  yyparse();
}





