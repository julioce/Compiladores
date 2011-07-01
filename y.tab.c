/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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

map< string, string > ts;

int yyparse();
int yylex();
int toInt( string n );
string toStr( int n );
string criaTemp();
string criaLabel( string prefixo );
string geraCodigoDeclaracaoVarTemp();
string buscaTipoVar( string nome );
string tipoOperacao( string opr, string tipoA, string tipoB );

void yyerror( const char* st );
void erroSemantico( string erro );
void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3);
void insereVar( string nome, string tipo );

#define YYSTYPE Atributos


/* Line 189 of yacc.c  */
#line 114 "y.tab.c"

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
     _VALUE_TRUE = 259,
     _VALUE_FALSE = 260,
     _VALUE_INTEGER = 261,
     _VALUE_DOUBLE = 262,
     _VALUE_CHAR = 263,
     _VALUE_STRING = 264,
     _VALUE_BOOLEAN = 265,
     _BEGIN = 266,
     _DO = 267,
     _END = 268,
     _VAR = 269,
     _INTEGER = 270,
     _DOUBLE = 271,
     _CHAR = 272,
     _STRING = 273,
     _BOOLEAN = 274,
     _FUNCTION = 275,
     _ARRAY = 276,
     _OF = 277,
     _AND = 278,
     _OR = 279,
     _NOT = 280,
     _IF = 281,
     _ELSE = 282,
     _FOR = 283,
     _WHILE = 284,
     _PRINT = 285,
     _READ = 286,
     _ATRIBUICAO = 287,
     _MENORIGUAL = 288,
     _MAIORIGUAL = 289,
     _IGUAL = 290,
     _DIFERENTE = 291,
     _ID = 292
   };
#endif
/* Tokens.  */
#define _VALUE_NULL 258
#define _VALUE_TRUE 259
#define _VALUE_FALSE 260
#define _VALUE_INTEGER 261
#define _VALUE_DOUBLE 262
#define _VALUE_CHAR 263
#define _VALUE_STRING 264
#define _VALUE_BOOLEAN 265
#define _BEGIN 266
#define _DO 267
#define _END 268
#define _VAR 269
#define _INTEGER 270
#define _DOUBLE 271
#define _CHAR 272
#define _STRING 273
#define _BOOLEAN 274
#define _FUNCTION 275
#define _ARRAY 276
#define _OF 277
#define _AND 278
#define _OR 279
#define _NOT 280
#define _IF 281
#define _ELSE 282
#define _FOR 283
#define _WHILE 284
#define _PRINT 285
#define _READ 286
#define _ATRIBUICAO 287
#define _MENORIGUAL 288
#define _MAIORIGUAL 289
#define _IGUAL 290
#define _DIFERENTE 291
#define _ID 292




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
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      48,    49,    42,    40,    47,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    52,
      38,     2,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    45,     2,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    13,    16,    17,    21,    24,
      25,    29,    33,    35,    41,    50,    57,    61,    64,    68,
      70,    74,    76,    79,    80,    84,    86,    88,    90,    92,
      94,    96,    98,   100,   104,   111,   121,   126,   131,   139,
     149,   161,   169,   177,   179,   184,   188,   192,   196,   200,
     204,   208,   212,   216,   220,   224,   228,   232,   236,   238,
     240,   242,   246,   249,   252,   255,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   280,   285,   290,   295,
     300,   306,   312,   318,   324,   330,   332,   334,   336,   338,
     340,   346,   352,   358,   364
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    11,    65,    13,    -1,
      57,    56,    -1,    61,    56,    -1,    -1,    14,    58,    13,
      -1,    59,    58,    -1,    -1,    60,    46,    78,    -1,    37,
      47,    60,    -1,    37,    -1,    20,    37,    46,    78,    62,
      -1,    20,    37,    48,    63,    49,    46,    78,    62,    -1,
      20,    37,    48,    63,    49,    62,    -1,    57,    65,    13,
      -1,    65,    13,    -1,    59,    47,    63,    -1,    59,    -1,
      75,    47,    64,    -1,    75,    -1,    65,    66,    -1,    -1,
      12,    65,    13,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      37,    32,    75,    -1,    37,    50,    75,    51,    32,    75,
      -1,    37,    50,    75,    51,    50,    75,    51,    32,    75,
      -1,    30,    48,    75,    49,    -1,    31,    48,    75,    49,
      -1,    26,    48,    75,    49,    12,    65,    13,    -1,    26,
      48,    75,    49,    12,    65,    27,    65,    13,    -1,    28,
      48,    67,    52,    75,    52,    75,    49,    12,    65,    13,
      -1,    29,    48,    75,    49,    12,    65,    13,    -1,    12,
      65,    29,    48,    75,    49,    13,    -1,    37,    -1,    37,
      48,    64,    49,    -1,    75,    40,    75,    -1,    75,    41,
      75,    -1,    75,    42,    75,    -1,    75,    43,    75,    -1,
      75,    44,    75,    -1,    75,    38,    75,    -1,    75,    39,
      75,    -1,    75,    34,    75,    -1,    75,    33,    75,    -1,
      75,    35,    75,    -1,    75,    36,    75,    -1,    75,    23,
      75,    -1,    75,    24,    75,    -1,    76,    -1,    37,    -1,
      77,    -1,    48,    75,    49,    -1,    25,    76,    -1,    41,
      76,    -1,    40,    76,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    15,    -1,    16,    -1,    17,
      -1,    18,    -1,    19,    -1,    21,    79,    22,    15,    -1,
      21,    79,    22,    16,    -1,    21,    79,    22,    17,    -1,
      21,    79,    22,    18,    -1,    21,    79,    22,    19,    -1,
      21,    79,    79,    22,    15,    -1,    21,    79,    79,    22,
      16,    -1,    21,    79,    79,    22,    17,    -1,    21,    79,
      79,    22,    18,    -1,    21,    79,    79,    22,    19,    -1,
      80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,
      50,     6,    46,     6,    51,    -1,    50,     7,    46,     7,
      51,    -1,    50,     8,    46,     8,    51,    -1,    50,     9,
      46,     9,    51,    -1,    50,    10,    46,    10,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    69,    72,    73,    74,    81,    83,    84,
      86,   103,   104,   111,   112,   113,   115,   116,   118,   119,
     121,   122,   129,   130,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   146,   156,   157,   163,   167,   172,   185,
     206,   207,   208,   213,   214,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   237,
     242,   243,   244,   245,   246,   253,   254,   255,   256,   257,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   275,   276,   277,   278,   279,
     281,   282,   283,   284,   285
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_VALUE_NULL", "_VALUE_TRUE",
  "_VALUE_FALSE", "_VALUE_INTEGER", "_VALUE_DOUBLE", "_VALUE_CHAR",
  "_VALUE_STRING", "_VALUE_BOOLEAN", "_BEGIN", "_DO", "_END", "_VAR",
  "_INTEGER", "_DOUBLE", "_CHAR", "_STRING", "_BOOLEAN", "_FUNCTION",
  "_ARRAY", "_OF", "_AND", "_OR", "_NOT", "_IF", "_ELSE", "_FOR", "_WHILE",
  "_PRINT", "_READ", "_ATRIBUICAO", "_MENORIGUAL", "_MAIORIGUAL", "_IGUAL",
  "_DIFERENTE", "_ID", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "':'", "','", "'('", "')'", "'['", "']'", "';'", "$accept",
  "PROGRAMA", "BLOCO_PRINCIPAL", "DECLARACOES_GLOBAIS", "VAR",
  "DECLARACOES_VARS", "DECLARACAO_VAR", "LISTA_IDS", "FUN", "CORPO",
  "PARAMS", "LISTA_E", "CMDS", "CMD", "CMD_ATRIB", "CMD_SAIDA",
  "CMD_ENTRADA", "CMD_IF_ELSE", "CMD_FOR", "CMD_WHILE", "CMD_DO_WHILE",
  "CMD_FUNCTION", "E", "F", "VALUE", "TIPOS", "TIPO_ARRAY",
  "ARRAY_INTEGER", "ARRAY_DOUBLE", "ARRAY_CHAR", "ARRAY_STRING",
  "ARRAY_BOOLEAN", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,    60,    62,
      43,    45,    42,    47,    37,    94,    58,    44,    40,    41,
      91,    93,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    56,    57,    58,    58,
      59,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    69,    70,    70,
      71,    72,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      80,    81,    82,    83,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     2,     2,     0,     3,     2,     0,
       3,     3,     1,     5,     8,     6,     3,     2,     3,     1,
       3,     1,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     6,     9,     4,     4,     7,     9,
      11,     7,     7,     1,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       5,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       5,     5,     5,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     9,     0,     0,     2,     0,     6,     6,    12,     0,
       9,     0,     0,     1,    23,     4,     5,     0,     7,     8,
       0,     0,     0,     0,    11,    70,    71,    72,    73,    74,
       0,    10,    23,    19,     0,    23,     3,     0,     0,     0,
       0,     0,    43,    22,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,    85,    86,    87,    88,    89,    23,
      13,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    18,     0,    15,    24,     0,    65,    66,    67,
      68,    69,     0,    59,     0,     0,     0,     0,    58,    60,
       0,     0,     0,     0,     0,    33,     0,    21,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
      16,    23,     0,    62,    64,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    37,    44,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    14,     0,
      61,    56,    57,    53,    52,    54,    55,    50,    51,    45,
      46,    47,    48,    49,    23,     0,    23,    20,     0,     0,
      90,    91,    92,    93,    94,     0,     0,     0,     0,    34,
       0,    42,    38,    23,     0,    41,     0,     0,     0,     0,
      39,    23,    35,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     9,    10,    11,     7,    60,
      34,   106,    61,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   107,    98,    99,    31,    53,    54,    55,    56,
      57,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int16 yypact[] =
{
       5,   -11,     1,    60,   -66,    11,     5,     5,    12,    49,
     -11,    43,   -31,   -66,   -66,   -66,   -66,   -11,   -66,   -66,
      69,    69,   -11,    24,   -66,   -66,   -66,   -66,   -66,   -66,
      46,   -66,    99,    65,    67,   -66,   -66,    70,    85,    88,
      90,    91,    -9,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,    98,    -4,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   311,   -11,     2,   321,     3,    80,     3,     3,     3,
       3,     3,     3,    94,   107,   110,   111,   112,   193,   123,
     331,   -66,   -66,    69,   -66,   -66,   113,   -66,   -66,   -66,
     -66,   -66,     3,   -66,     3,     3,     3,   131,   -66,   -66,
      -8,    82,   158,   180,   202,   392,   114,   370,    86,   162,
     169,   170,   168,   173,   -66,   -66,   -66,   -66,   -66,   215,
     -66,    99,     3,   -66,   -66,   -66,   224,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     172,     3,   174,   -66,   -66,   -66,     3,    -1,   134,   137,
     138,   139,   144,   -66,   -66,   -66,   -66,   -66,   -66,   246,
     -66,   418,   406,   430,   430,   430,   430,   430,   430,    37,
      37,   -66,   -66,   -66,   -66,    59,   -66,   -66,     3,     3,
     -66,   -66,   -66,   -66,   -66,    22,   301,     3,   341,   392,
     108,   -66,   -66,   -66,   268,   -66,   185,   351,   194,     3,
     -66,   -66,   392,   361,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   -66,    50,   -30,   195,   -15,   210,   -66,   -43,
     166,    93,   -14,   -66,   183,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -64,   -65,   -66,    -7,   197,   -66,   -66,   -66,
     -66,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      23,    97,    59,   102,   103,   104,   105,    33,   108,    87,
      88,    89,    90,    91,    32,    21,     1,    22,    78,     1,
      84,    64,    14,    70,    70,     2,     8,   123,    92,   124,
     125,   178,   126,    59,   176,   191,    35,    36,    12,    71,
      93,    72,    72,    94,    95,    80,    52,    33,    83,   179,
      37,    96,    38,    39,    40,    41,    15,    16,   159,    17,
      13,    42,    18,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   121,   175,   158,   137,
     138,   139,   127,   128,    25,    26,    27,    28,    29,    20,
      30,    59,   129,   130,   131,   132,    52,   133,   134,   135,
     136,   137,   138,   139,    73,    74,    75,    76,    77,   127,
     128,   187,    62,     1,   189,   190,    63,   100,    65,   129,
     130,   131,   132,   194,   133,   134,   135,   136,   137,   138,
     139,   127,   128,    66,   141,   202,    67,   147,    68,    69,
     109,   129,   130,   131,   132,   119,   133,   134,   135,   136,
     137,   138,   139,   110,   127,   128,   111,   112,   113,   196,
     186,   122,   188,   145,   129,   130,   131,   132,   148,   133,
     134,   135,   136,   137,   138,   139,   149,   151,   150,   197,
     140,   127,   128,   152,   174,   180,   176,   203,   181,   182,
     183,   129,   130,   131,   132,   184,   133,   134,   135,   136,
     137,   138,   139,   127,   128,    19,   201,   142,   114,   115,
     116,   117,   118,   129,   130,   131,   132,   199,   133,   134,
     135,   136,   137,   138,   139,   127,   128,    24,    82,   143,
     153,   154,   155,   156,   157,   129,   130,   131,   132,   177,
     133,   134,   135,   136,   137,   138,   139,   127,   128,   101,
      79,   144,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   127,
     128,     0,     0,   160,     0,     0,     0,     0,     0,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   127,   128,     0,     0,   185,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     137,   138,   139,    35,   192,     0,     0,   198,     0,     0,
       0,     0,     0,    35,    81,     0,     0,    37,   193,    38,
      39,    40,    41,    35,    85,     0,     0,    37,    42,    38,
      39,    40,    41,    35,   120,     0,     0,    37,    42,    38,
      86,    40,    41,    35,   195,     0,     0,    37,    42,    38,
      39,    40,    41,    35,   200,     0,     0,    37,    42,    38,
      39,    40,    41,    35,   204,     0,     0,    37,    42,    38,
      39,    40,    41,     0,     0,     0,     0,    37,    42,    38,
      39,    40,    41,   127,   128,     0,     0,     0,    42,     0,
       0,     0,     0,   129,   130,   131,   132,     0,   133,   134,
     135,   136,   137,   138,   139,   127,   128,   146,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   127,
     133,   134,   135,   136,   137,   138,   139,     0,     0,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     137,   138,   139,    -1,    -1,    -1,    -1,     0,    -1,    -1,
     135,   136,   137,   138,   139
};

static const yytype_int16 yycheck[] =
{
      14,    65,    32,    67,    68,    69,    70,    22,    72,     6,
       7,     8,     9,    10,    21,    46,    14,    48,    22,    14,
      63,    35,    11,    32,    32,    20,    37,    92,    25,    94,
      95,    32,    96,    63,    12,    13,    12,    13,    37,    48,
      37,    50,    50,    40,    41,    59,    50,    62,    46,    50,
      26,    48,    28,    29,    30,    31,     6,     7,   122,    47,
       0,    37,    13,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    83,   141,   121,    42,
      43,    44,    23,    24,    15,    16,    17,    18,    19,    46,
      21,   121,    33,    34,    35,    36,    50,    38,    39,    40,
      41,    42,    43,    44,     6,     7,     8,     9,    10,    23,
      24,    52,    47,    14,   178,   179,    49,    37,    48,    33,
      34,    35,    36,   187,    38,    39,    40,    41,    42,    43,
      44,    23,    24,    48,    52,   199,    48,    51,    48,    48,
      46,    33,    34,    35,    36,    22,    38,    39,    40,    41,
      42,    43,    44,    46,    23,    24,    46,    46,    46,    51,
     174,    48,   176,    49,    33,    34,    35,    36,     6,    38,
      39,    40,    41,    42,    43,    44,     7,     9,     8,   193,
      49,    23,    24,    10,    12,    51,    12,   201,    51,    51,
      51,    33,    34,    35,    36,    51,    38,    39,    40,    41,
      42,    43,    44,    23,    24,    10,    12,    49,    15,    16,
      17,    18,    19,    33,    34,    35,    36,    32,    38,    39,
      40,    41,    42,    43,    44,    23,    24,    17,    62,    49,
      15,    16,    17,    18,    19,    33,    34,    35,    36,   146,
      38,    39,    40,    41,    42,    43,    44,    23,    24,    66,
      53,    49,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    23,
      24,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    23,    24,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    12,    13,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    26,    27,    28,
      29,    30,    31,    12,    13,    -1,    -1,    26,    37,    28,
      29,    30,    31,    12,    13,    -1,    -1,    26,    37,    28,
      29,    30,    31,    12,    13,    -1,    -1,    26,    37,    28,
      29,    30,    31,    12,    13,    -1,    -1,    26,    37,    28,
      29,    30,    31,    12,    13,    -1,    -1,    26,    37,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    26,    37,    28,
      29,    30,    31,    23,    24,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    23,    24,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    23,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    20,    54,    55,    56,    57,    61,    37,    58,
      59,    60,    37,     0,    11,    56,    56,    47,    13,    58,
      46,    46,    48,    65,    60,    15,    16,    17,    18,    19,
      21,    78,    78,    59,    63,    12,    13,    26,    28,    29,
      30,    31,    37,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    50,    79,    80,    81,    82,    83,    84,    57,
      62,    65,    47,    49,    65,    48,    48,    48,    48,    48,
      32,    48,    50,     6,     7,     8,     9,    10,    22,    79,
      65,    13,    63,    46,    62,    13,    29,     6,     7,     8,
       9,    10,    25,    37,    40,    41,    48,    75,    76,    77,
      37,    67,    75,    75,    75,    75,    64,    75,    75,    46,
      46,    46,    46,    46,    15,    16,    17,    18,    19,    22,
      13,    78,    48,    76,    76,    76,    75,    23,    24,    33,
      34,    35,    36,    38,    39,    40,    41,    42,    43,    44,
      49,    52,    49,    49,    49,    49,    47,    51,     6,     7,
       8,     9,    10,    15,    16,    17,    18,    19,    62,    75,
      49,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    12,    75,    12,    64,    32,    50,
      51,    51,    51,    51,    51,    49,    65,    52,    65,    75,
      75,    13,    13,    27,    75,    13,    51,    65,    49,    32,
      13,    12,    75,    65,    13
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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

/* Line 1464 of yacc.c  */
#line 62 "trabalho.y"
    { cout << "#include <iostream>\n"
                                     "#include <string.h>\n"
                                     "#include <stdio.h>\n\n"
                                     "using namespace std;\n\n"
                                     "#define TRUE 1\n"
                                     "#define FALSE 0\n\n" << (yyvsp[(1) - (1)]).c << "\n\n" << endl; }
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 70 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (4)]).c + geraCodigoDeclaracaoVarTemp() + "\nint main() {\n" + (yyvsp[(3) - (4)]).c + "\treturn 0;\n}\n"; }
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 72 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 73 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 74 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 81 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 83 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 84 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 87 "trabalho.y"
    { 
                 string lista = (yyvsp[(1) - (3)]).v;
                 string tipo = (yyvsp[(3) - (3)]).t;
                 (yyval).c = "";
    
                 for( size_t pos = lista.find( "$" ); pos != string::npos; pos = lista.find( "$" ) ) { 
                   string variavel = lista.substr( 0, pos );
                   if(tipo == "char "){
                     (yyval).c += tipo + variavel + "[256];\n"; 
                   }else{
                     (yyval).c += tipo + variavel + ";\n"; 
                   }
                   lista = lista.substr( pos+1 );
                 }
               }
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 103 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (3)]).v + "$" + (yyvsp[(3) - (3)]).v; }
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 104 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (1)]).v + "$"; }
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 129 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 130 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 132 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (3)]).c + (yyvsp[(2) - (3)]).c + (yyvsp[(3) - (3)]).c; }
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 147 "trabalho.y"
    {
            (yyval).v = (yyvsp[(1) - (3)]).v;
            string tipo = (yyvsp[(3) - (3)]).t;
            if(tipo == "string"){
              (yyval).c = "strncpy(" + (yyvsp[(1) - (3)]).v + ", " + (yyvsp[(3) - (3)]).v + ", 256);\n";
            }else{
              (yyval).c = (yyvsp[(3) - (3)]).c + (yyvsp[(1) - (3)]).v + " = " + (yyvsp[(3) - (3)]).v + ";\n";
            }
          }
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 164 "trabalho.y"
    { (yyval).v = "";
              (yyval).c = "\tputs("+ (yyvsp[(3) - (4)]).v +");\n";
            }
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 173 "trabalho.y"
    {
              string varTeste = criaTemp();
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

  case 39:

/* Line 1464 of yacc.c  */
#line 186 "trabalho.y"
    {
              string varTeste = criaTemp();
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

  case 45:

/* Line 1464 of yacc.c  */
#line 220 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "+", (yyvsp[(3) - (3)]) ); }
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 221 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "-", (yyvsp[(3) - (3)]) ); }
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 222 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "*", (yyvsp[(3) - (3)]) ); }
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 223 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "/", (yyvsp[(3) - (3)]) ); }
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 224 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "%", (yyvsp[(3) - (3)]) ); }
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 225 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<", (yyvsp[(3) - (3)]) ); }
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 226 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">", (yyvsp[(3) - (3)]) ); }
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 227 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">=", (yyvsp[(3) - (3)]) );}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 228 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<=", (yyvsp[(3) - (3)]) );}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 229 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "==", (yyvsp[(3) - (3)]) );}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 230 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "!=", (yyvsp[(3) - (3)]) );}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 231 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "&&", (yyvsp[(3) - (3)]) );}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 232 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "||", (yyvsp[(3) - (3)]) );}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 238 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (1)]).c;
    (yyval).v = (yyvsp[(1) - (1)]).v;
    (yyval).t = buscaTipoVar( (yyvsp[(1) - (1)]).v );
  }
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 243 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 244 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 245 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 246 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 253 "trabalho.y"
    { (yyvsp[(1) - (1)]).t = "int"; (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 254 "trabalho.y"
    { (yyvsp[(1) - (1)]).t = "double"; (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 255 "trabalho.y"
    { (yyvsp[(1) - (1)]).t = "char"; (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 256 "trabalho.y"
    { (yyvsp[(1) - (1)]).t = "string"; (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 257 "trabalho.y"
    { (yyvsp[(1) - (1)]).t = "boolean"; (yyval) = (yyvsp[(1) - (1)]); }
    break;



/* Line 1464 of yacc.c  */
#line 2014 "y.tab.c"
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



/* Line 1684 of yacc.c  */
#line 287 "trabalho.y"

#include "lex.yy.c"

struct Resultado {
  string opr, a, b, r;
} resultado[] = {
  { "+", "int ", "int ", "int " },
  { "+", "int ", "double ", "double " },
  { "+", "double ", "int ", "double " },
  { "+", "double ", "double ", "double " },
  { "+", "char ", "char ", "string " },
  { "+", "char ", "string ", "string " },
  { "+", "string ", "char ", "string " },
  { "+", "string ", "string ", "string " },
  { "-", "int ", "int ", "int" },
  { "", "", "", "" }
};

int n_temp = 0;
int n_label = 0;

void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3) {
  ss.v = criaTemp();
  ss.c = "\t" + s1.c + s3.c + 
  ss.v + " = " + s1.v + " " + op + " " + s3.v + ";\n";  
}

void yyerror( const char* st ){
  cout << "Erro sintatico: " << st << endl
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

string criaTemp() {
  return "_t" + toStr( ++n_temp );
}

string criaLabel( string prefixo ) {
  return prefixo + toStr( ++n_label );
}

string geraCodigoDeclaracaoVarTemp() {
  string aux = "";
  
  for( int i = 1; i <= n_temp; i++ )
    aux += "int _t" + toStr( i ) + ";\n";

  return aux;
}

string tipoOperacao( string opr, string tipoA, string tipoB ) {
  for( int i = 0; resultado[i].opr != ""; i++ ) {
    if( resultado[i].opr == opr && resultado[i].a == tipoA && resultado[i].b == tipoB )
      return resultado[i].r;
  }

  erroSemantico( "O operador '" + opr + "' não está definido " + "para os tipos " + tipoA + " e " + tipoB );
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





