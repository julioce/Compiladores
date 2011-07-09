
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
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


/* Line 189 of yacc.c  */
#line 116 "y.tab.c"

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
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
      47,    48,    41,    39,    46,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    51,
      37,     2,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,    44,     2,     2,     2,     2,     2,
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
      53,     0,    -1,    54,    -1,    55,    10,    64,    12,    -1,
      56,    55,    -1,    60,    55,    -1,    -1,    13,    57,    12,
      -1,    58,    57,    -1,    -1,    59,    45,    76,    -1,    36,
      46,    59,    -1,    36,    -1,    19,    36,    45,    76,    61,
      -1,    19,    36,    47,    62,    48,    45,    76,    61,    -1,
      19,    36,    47,    62,    48,    61,    -1,    56,    64,    12,
      -1,    64,    12,    -1,    58,    46,    62,    -1,    58,    -1,
      73,    46,    63,    -1,    73,    -1,    64,    65,    -1,    -1,
      11,    64,    12,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    36,    31,
      73,    -1,    36,    49,    73,    50,    31,    73,    -1,    36,
      49,    73,    50,    49,    73,    50,    31,    73,    -1,    29,
      47,    73,    48,    -1,    25,    47,    73,    48,    11,    64,
      12,    -1,    25,    47,    73,    48,    11,    64,    26,    64,
      12,    -1,    27,    47,    66,    51,    73,    51,    73,    48,
      11,    64,    12,    -1,    28,    47,    73,    48,    11,    64,
      12,    -1,    11,    64,    28,    47,    73,    48,    12,    -1,
      36,    -1,    36,    47,    63,    48,    -1,    73,    39,    73,
      -1,    73,    40,    73,    -1,    73,    41,    73,    -1,    73,
      42,    73,    -1,    73,    43,    73,    -1,    73,    37,    73,
      -1,    73,    38,    73,    -1,    73,    33,    73,    -1,    73,
      32,    73,    -1,    73,    34,    73,    -1,    73,    35,    73,
      -1,    73,    22,    73,    -1,    73,    23,    73,    -1,    74,
      -1,    36,    -1,    75,    -1,    47,    73,    48,    -1,    24,
      74,    -1,    40,    74,    -1,    39,    74,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,     4,    -1,     5,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      20,    77,    21,    14,    -1,    20,    77,    21,    15,    -1,
      20,    77,    21,    16,    -1,    20,    77,    21,    17,    -1,
      20,    77,    21,    18,    -1,    20,    77,    77,    21,    14,
      -1,    20,    77,    77,    21,    15,    -1,    20,    77,    77,
      21,    16,    -1,    20,    77,    77,    21,    17,    -1,    20,
      77,    77,    21,    18,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    49,     6,    45,     6,    50,
      -1,    49,     7,    45,     7,    50,    -1,    49,     8,    45,
       8,    50,    -1,    49,     9,    45,     9,    50,    -1,    49,
       4,    45,     4,    50,    -1,    49,     4,    45,     5,    50,
      -1,    49,     5,    45,     4,    50,    -1,    49,     5,    45,
       5,    50,    -1
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
  "_ID", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "':'",
  "','", "'('", "')'", "'['", "']'", "';'", "$accept", "PROGRAMA",
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
      45,    42,    47,    37,    94,    58,    44,    40,    41,    91,
      93,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    55,    55,    55,    56,    57,    57,
      58,    59,    59,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    68,    68,    69,    70,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    78,
      79,    80,    81,    82,    82,    82,    82
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
#define YYPACT_NINF -63
static const yytype_int16 yypact[] =
{
       3,    -6,     6,    32,   -63,    70,     3,     3,    43,    83,
      -6,    63,    62,   -63,   -63,   -63,   -63,    -6,   -63,   -63,
      40,    40,    -6,   290,   -63,   -63,   -63,   -63,   -63,   -63,
      55,   -63,   108,    76,    75,   -63,   -63,    77,    92,    95,
      97,   -12,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
      79,   -15,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   295,
      -6,    -5,   316,     5,   104,     5,     5,     5,     5,     5,
     100,   101,   106,   117,   119,   121,     9,   146,   321,   -63,
     -63,    40,   -63,   -63,   126,   -63,   -63,   -63,   -63,   -63,
     -63,     5,   -63,     5,     5,     5,   137,   -63,   -63,   -13,
     130,   164,   186,   384,   120,   362,    93,    34,   107,   176,
     177,   180,   181,   -63,   -63,   -63,   -63,   -63,    33,   -63,
     108,     5,   -63,   -63,   -63,   208,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,   178,
       5,   182,   -63,   -63,     5,    -3,   142,   144,   145,   150,
     160,   161,   163,   165,   -63,   -63,   -63,   -63,   -63,   -63,
     230,   -63,   410,   398,   422,   422,   422,   422,   422,   422,
      20,    20,   -63,   -63,   -63,   -63,    59,   -63,   -63,     5,
       5,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   102,
     285,     5,   326,   384,   115,   -63,   -63,   -63,   252,   -63,
     183,   347,   205,     5,   -63,   -63,   384,   352,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   113,   -30,   207,    -7,   215,   -63,   -41,
     162,    89,   -14,   -63,   171,   -63,   -63,   -63,   -63,   -63,
     -63,   -62,    12,   -63,    -4,   185,   -63,   -63,   -63,   -63,
     -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      23,    96,    57,   101,   102,   103,    76,   106,     1,    85,
      86,    87,    88,    89,    90,    33,     1,    32,    67,    67,
      82,    62,     2,   113,   114,   115,   116,   117,   179,    91,
       8,    57,    13,   125,    50,    68,    69,    69,   146,   147,
      81,    92,    12,    78,    93,    94,   180,   154,   155,   156,
     157,   158,    95,    33,    25,    26,    27,    28,    29,   160,
      30,   136,   137,   138,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   120,   176,   159,
      14,   126,   127,    70,    71,    72,    73,    74,    75,    17,
      57,   128,   129,   130,   131,    18,   132,   133,   134,   135,
     136,   137,   138,   122,    50,   123,   124,    21,    20,    22,
     191,   148,   149,   177,   195,   126,   127,   193,   194,    15,
      16,     1,    60,    61,    63,   128,   129,   130,   131,   198,
     132,   133,   134,   135,   136,   137,   138,   126,   127,    64,
      99,   206,    65,   145,    66,   107,   108,   128,   129,   130,
     131,   109,   132,   133,   134,   135,   136,   137,   138,   126,
     127,   190,   110,   192,   111,   200,   112,   118,   143,   128,
     129,   130,   131,   121,   132,   133,   134,   135,   136,   137,
     138,   140,   150,   201,   151,   139,   126,   127,   152,   175,
     153,   207,   181,   177,   182,   183,   128,   129,   130,   131,
     184,   132,   133,   134,   135,   136,   137,   138,   126,   127,
     185,   186,   141,   187,   203,   188,   205,    19,   128,   129,
     130,   131,    80,   132,   133,   134,   135,   136,   137,   138,
     126,   127,    24,   178,   142,   100,    77,     0,     0,     0,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   126,   127,     0,     0,   161,     0,     0,     0,
       0,     0,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   126,   127,     0,     0,   189,     0,
       0,     0,     0,     0,   128,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,    35,   196,     0,     0,
     202,    35,    36,     0,     0,     0,    35,    79,     0,     0,
      37,   197,    38,    39,    40,    37,     0,    38,    39,    40,
      37,    41,    38,    39,    40,     0,    41,    35,    83,     0,
       0,    41,    35,   119,     0,     0,     0,    35,   199,     0,
       0,    37,     0,    38,    84,    40,    37,     0,    38,    39,
      40,    37,    41,    38,    39,    40,     0,    41,    35,   204,
       0,     0,    41,    35,   208,     0,     0,     0,     0,     0,
       0,     0,    37,     0,    38,    39,    40,    37,     0,    38,
      39,    40,     0,    41,   126,   127,     0,     0,    41,     0,
       0,     0,     0,     0,   128,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   126,   127,   144,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     126,   132,   133,   134,   135,   136,   137,   138,     0,     0,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,     0,    -1,
      -1,   134,   135,   136,   137,   138
};

static const yytype_int16 yycheck[] =
{
      14,    63,    32,    65,    66,    67,    21,    69,    13,     4,
       5,     6,     7,     8,     9,    22,    13,    21,    31,    31,
      61,    35,    19,    14,    15,    16,    17,    18,    31,    24,
      36,    61,     0,    95,    49,    47,    49,    49,     4,     5,
      45,    36,    36,    57,    39,    40,    49,    14,    15,    16,
      17,    18,    47,    60,    14,    15,    16,    17,    18,   121,
      20,    41,    42,    43,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    81,   140,   120,
      10,    22,    23,     4,     5,     6,     7,     8,     9,    46,
     120,    32,    33,    34,    35,    12,    37,    38,    39,    40,
      41,    42,    43,    91,    49,    93,    94,    45,    45,    47,
      51,     4,     5,    11,    12,    22,    23,   179,   180,     6,
       7,    13,    46,    48,    47,    32,    33,    34,    35,   191,
      37,    38,    39,    40,    41,    42,    43,    22,    23,    47,
      36,   203,    47,    50,    47,    45,    45,    32,    33,    34,
      35,    45,    37,    38,    39,    40,    41,    42,    43,    22,
      23,   175,    45,   177,    45,    50,    45,    21,    48,    32,
      33,    34,    35,    47,    37,    38,    39,    40,    41,    42,
      43,    51,     6,   197,     7,    48,    22,    23,     8,    11,
       9,   205,    50,    11,    50,    50,    32,    33,    34,    35,
      50,    37,    38,    39,    40,    41,    42,    43,    22,    23,
      50,    50,    48,    50,    31,    50,    11,    10,    32,    33,
      34,    35,    60,    37,    38,    39,    40,    41,    42,    43,
      22,    23,    17,   144,    48,    64,    51,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    22,    23,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    22,    23,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    11,    12,    -1,    -1,
      48,    11,    12,    -1,    -1,    -1,    11,    12,    -1,    -1,
      25,    26,    27,    28,    29,    25,    -1,    27,    28,    29,
      25,    36,    27,    28,    29,    -1,    36,    11,    12,    -1,
      -1,    36,    11,    12,    -1,    -1,    -1,    11,    12,    -1,
      -1,    25,    -1,    27,    28,    29,    25,    -1,    27,    28,
      29,    25,    36,    27,    28,    29,    -1,    36,    11,    12,
      -1,    -1,    36,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    25,    -1,    27,
      28,    29,    -1,    36,    22,    23,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    22,    23,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      22,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    19,    53,    54,    55,    56,    60,    36,    57,
      58,    59,    36,     0,    10,    55,    55,    46,    12,    57,
      45,    45,    47,    64,    59,    14,    15,    16,    17,    18,
      20,    76,    76,    58,    62,    11,    12,    25,    27,    28,
      29,    36,    65,    66,    67,    68,    69,    70,    71,    72,
      49,    77,    78,    79,    80,    81,    82,    56,    61,    64,
      46,    48,    64,    47,    47,    47,    47,    31,    47,    49,
       4,     5,     6,     7,     8,     9,    21,    77,    64,    12,
      62,    45,    61,    12,    28,     4,     5,     6,     7,     8,
       9,    24,    36,    39,    40,    47,    73,    74,    75,    36,
      66,    73,    73,    73,    63,    73,    73,    45,    45,    45,
      45,    45,    45,    14,    15,    16,    17,    18,    21,    12,
      76,    47,    74,    74,    74,    73,    22,    23,    32,    33,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    48,
      51,    48,    48,    48,    46,    50,     4,     5,     4,     5,
       6,     7,     8,     9,    14,    15,    16,    17,    18,    61,
      73,    48,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    11,    73,    11,    63,    31,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    48,
      64,    51,    64,    73,    73,    12,    12,    26,    73,    12,
      50,    64,    48,    31,    12,    11,    73,    64,    12
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 63 "trabalho.y"
    { cout << "#include <iostream>\n"
                                     "#include <string.h>\n"
                                     "#include <stdio.h>\n\n"
                                     "using namespace std;\n\n"
                                     "#define TRUE 1\n"
                                     "#define FALSE 0\n\n" << (yyvsp[(1) - (1)]).c << "\n" << endl; }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (4)]).c + geraCodigoDeclaracaoVarTemp() + "\nint main() {\n" + (yyvsp[(3) - (4)]).c + "\treturn 0;\n}\n"; }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 73 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 74 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 75 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 82 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 84 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 85 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 10:

/* Line 1455 of yacc.c  */
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

/* Line 1455 of yacc.c  */
#line 105 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (3)]).v + "$" + (yyvsp[(3) - (3)]).v; }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (1)]).v + "$"; }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 131 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 132 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 134 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (3)]).c + (yyvsp[(2) - (3)]).c + (yyvsp[(3) - (3)]).c; }
    break;

  case 32:

/* Line 1455 of yacc.c  */
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

/* Line 1455 of yacc.c  */
#line 173 "trabalho.y"
    {
              (yyval).v = "";
              (yyval).c = "\tputs("+ (yyvsp[(3) - (4)]).v +");\n";
            }
    break;

  case 36:

/* Line 1455 of yacc.c  */
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

/* Line 1455 of yacc.c  */
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

/* Line 1455 of yacc.c  */
#line 229 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "+", (yyvsp[(3) - (3)]) ); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 230 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "-", (yyvsp[(3) - (3)]) ); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 231 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "*", (yyvsp[(3) - (3)]) ); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 232 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "/", (yyvsp[(3) - (3)]) ); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 233 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "%", (yyvsp[(3) - (3)]) ); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 234 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<", (yyvsp[(3) - (3)]) ); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 235 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">", (yyvsp[(3) - (3)]) ); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 236 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">=", (yyvsp[(3) - (3)]) );}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 237 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<=", (yyvsp[(3) - (3)]) );}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 238 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "==", (yyvsp[(3) - (3)]) );}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 239 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "!=", (yyvsp[(3) - (3)]) );}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 240 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "&&", (yyvsp[(3) - (3)]) );}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 241 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "||", (yyvsp[(3) - (3)]) );}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 247 "trabalho.y"
    { 
    (yyval).c = (yyvsp[(1) - (1)]).c;
    (yyval).v = (yyvsp[(1) - (1)]).v;
    (yyval).t = buscaTipoVar( (yyvsp[(1) - (1)]).v );
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 253 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 254 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 255 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 256 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;



/* Line 1455 of yacc.c  */
#line 1980 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 301 "trabalho.y"

#include "lex.yy.c"

struct Resultado {
  string opr, a, b, r;
} resultado[] = {
  { "+", "int", "int", "int" },
  { "+", "int", "double", "double" },
  { "+", "double", "int", "double" },
  { "+", "double", "double", "double" },
  { "+", "char", "char", "string" },
  { "+", "char", "string", "string" },
  { "+", "string", "char", "string" },
  { "+", "string", "string", "string" },
  { "-", "int", "int", "int" },
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

  if( s1.t != "string" && s3.t != "string" ) {
    ss.c = s1.c + s3.c + "\t" + ss.v + " = " + s1.v + " " + op + " " + s3.v + ";\n";  
  } else {
    string strA = s1.v, strB = s3.v;
    string conversoes = "";

    if( s1.t == "char" ) {
      strA = criaTemp( "string" );
      conversoes += strA + "[0] = " + s1.v + ";\n" + "\t" + strA + "[1] = 0;\n"; 
    }

    if( s3.t == "char" ) {
      strB = criaTemp( "string" );
      conversoes += "\t" + strB + "[0] = " + s3.v + ";\n" + "\t" + strB + "[1] = 0;\n"; 
    }

    ss.c = s1.c + s3.c + conversoes + "\tstrncpy(" + ss.v + ", " + strA + ", 256);\n" + "\tstrcat(" + ss.v + ", " + strB + ");\n";
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
    aux += "int _t_boolean_" + toStr( i ) + ";\n";

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





