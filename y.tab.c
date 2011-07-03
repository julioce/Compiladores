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
#line 219 "y.tab.c"

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
#define YYLAST   493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNRULES -- Number of states.  */
#define YYNSTATES  214

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
      94,    96,    98,   100,   104,   111,   121,   126,   131,   139,
     149,   161,   169,   177,   179,   184,   188,   192,   196,   200,
     204,   208,   212,   216,   220,   224,   228,   232,   236,   238,
     240,   242,   246,   249,   252,   255,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   282,   287,   292,
     297,   302,   308,   314,   320,   326,   332,   334,   336,   338,
     340,   342,   348,   354,   360,   366,   372,   378,   384
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    55,    10,    64,    12,    -1,
      56,    55,    -1,    60,    55,    -1,    -1,    13,    57,    12,
      -1,    58,    57,    -1,    -1,    59,    45,    77,    -1,    36,
      46,    59,    -1,    36,    -1,    19,    36,    45,    77,    61,
      -1,    19,    36,    47,    62,    48,    45,    77,    61,    -1,
      19,    36,    47,    62,    48,    61,    -1,    56,    64,    12,
      -1,    64,    12,    -1,    58,    46,    62,    -1,    58,    -1,
      74,    46,    63,    -1,    74,    -1,    64,    65,    -1,    -1,
      11,    64,    12,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      36,    31,    74,    -1,    36,    49,    74,    50,    31,    74,
      -1,    36,    49,    74,    50,    49,    74,    50,    31,    74,
      -1,    29,    47,    74,    48,    -1,    30,    47,    74,    48,
      -1,    25,    47,    74,    48,    11,    64,    12,    -1,    25,
      47,    74,    48,    11,    64,    26,    64,    12,    -1,    27,
      47,    66,    51,    74,    51,    74,    48,    11,    64,    12,
      -1,    28,    47,    74,    48,    11,    64,    12,    -1,    11,
      64,    28,    47,    74,    48,    12,    -1,    36,    -1,    36,
      47,    63,    48,    -1,    74,    39,    74,    -1,    74,    40,
      74,    -1,    74,    41,    74,    -1,    74,    42,    74,    -1,
      74,    43,    74,    -1,    74,    37,    74,    -1,    74,    38,
      74,    -1,    74,    33,    74,    -1,    74,    32,    74,    -1,
      74,    34,    74,    -1,    74,    35,    74,    -1,    74,    22,
      74,    -1,    74,    23,    74,    -1,    75,    -1,    36,    -1,
      76,    -1,    47,    74,    48,    -1,    24,    75,    -1,    40,
      75,    -1,    39,    75,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,     4,    -1,     5,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    20,    78,    21,
      14,    -1,    20,    78,    21,    15,    -1,    20,    78,    21,
      16,    -1,    20,    78,    21,    17,    -1,    20,    78,    21,
      18,    -1,    20,    78,    78,    21,    14,    -1,    20,    78,
      78,    21,    15,    -1,    20,    78,    78,    21,    16,    -1,
      20,    78,    78,    21,    17,    -1,    20,    78,    78,    21,
      18,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    49,     6,    45,     6,    50,    -1,    49,     7,
      45,     7,    50,    -1,    49,     8,    45,     8,    50,    -1,
      49,     9,    45,     9,    50,    -1,    49,     4,    45,     4,
      50,    -1,    49,     4,    45,     5,    50,    -1,    49,     5,
      45,     4,    50,    -1,    49,     5,    45,     5,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    69,    72,    73,    74,    81,    83,    84,
      86,   104,   105,   112,   113,   114,   116,   117,   119,   120,
     122,   123,   130,   131,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   147,   163,   164,   170,   174,   179,   192,
     213,   214,   215,   220,   221,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   244,
     250,   251,   252,   253,   254,   261,   262,   263,   264,   265,
     266,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   284,   285,   286,   287,
     288,   290,   291,   292,   293,   294,   295,   296,   297
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
  "CMDS", "CMD", "CMD_ATRIB", "CMD_SAIDA", "CMD_ENTRADA", "CMD_IF_ELSE",
  "CMD_FOR", "CMD_WHILE", "CMD_DO_WHILE", "CMD_FUNCTION", "E", "F",
  "VALUE", "TIPOS", "TIPO_ARRAY", "ARRAY_INTEGER", "ARRAY_DOUBLE",
  "ARRAY_CHAR", "ARRAY_STRING", "ARRAY_BOOLEAN", 0
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
      65,    65,    65,    66,    66,    66,    67,    68,    69,    69,
      70,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    79,    80,    81,    82,    83,    83,    83,    83
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
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       1,     5,     5,     5,     5,     5,     5,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     9,     0,     0,     2,     0,     6,     6,    12,     0,
       9,     0,     0,     1,    23,     4,     5,     0,     7,     8,
       0,     0,     0,     0,    11,    71,    72,    73,    74,    75,
       0,    10,    23,    19,     0,    23,     3,     0,     0,     0,
       0,     0,    43,    22,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,    86,    87,    88,    89,    90,    23,
      13,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    18,     0,    15,    24,     0,    69,    70,
      65,    66,    67,    68,     0,    59,     0,     0,     0,     0,
      58,    60,     0,     0,     0,     0,     0,    33,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,     0,    16,    23,     0,    62,    64,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    37,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    14,     0,    61,    56,    57,    53,
      52,    54,    55,    50,    51,    45,    46,    47,    48,    49,
      23,     0,    23,    20,     0,     0,    95,    96,    97,    98,
      91,    92,    93,    94,     0,     0,     0,     0,    34,     0,
      42,    38,    23,     0,    41,     0,     0,     0,     0,    39,
      23,    35,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     9,    10,    11,     7,    60,
      34,   108,    61,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   109,   100,   101,    31,    53,    54,    55,    56,
      57,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
      24,   -22,   -17,    32,   -80,    38,    24,    24,    10,    72,
     -22,    48,    -1,   -80,   -80,   -80,   -80,   -22,   -80,   -80,
      35,    35,   -22,   321,   -80,   -80,   -80,   -80,   -80,   -80,
      50,   -80,    99,    67,    68,   -80,   -80,    70,    80,    98,
     100,   101,   -19,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,    83,   -11,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   331,   -22,    -4,   341,    18,    79,    18,    18,    18,
      18,    18,    18,    95,   104,   105,   110,   120,   122,    93,
     149,   351,   -80,   -80,    35,   -80,   -80,   124,   -80,   -80,
     -80,   -80,   -80,   -80,    18,   -80,    18,    18,    18,   141,
     -80,   -80,   -20,    92,   168,   190,   212,   412,   129,   390,
      96,    31,    55,   166,   178,   179,   177,   -80,   -80,   -80,
     -80,   -80,   108,   -80,    99,    18,   -80,   -80,   -80,   234,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      18,    18,    18,   181,    18,   182,   -80,   -80,   -80,    18,
     -18,   144,   145,   147,   148,   154,   164,   165,   167,   -80,
     -80,   -80,   -80,   -80,   -80,   256,   -80,   438,   426,   450,
     450,   450,   450,   450,   450,    21,    21,   -80,   -80,   -80,
     -80,    63,   -80,   -80,    18,    18,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,    28,   311,    18,   361,   412,   119,
     -80,   -80,   -80,   278,   -80,   187,   371,   188,    18,   -80,
     -80,   412,   381,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,    76,   -30,   209,   -15,   203,   -80,   -43,
     159,    77,   -14,   -80,   170,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -64,   -79,   -80,    -5,   184,   -80,   -80,   -80,
     -80,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      23,    99,    59,   104,   105,   106,   107,    33,   110,     1,
      79,    70,    70,   184,     8,   126,    32,   127,   128,    12,
      85,    64,    88,    89,    90,    91,    92,    93,    71,    72,
      72,   185,    13,    59,   129,   151,   152,     1,    52,   182,
     200,    84,    94,     2,    21,    81,    22,    33,    14,    25,
      26,    27,    28,    29,    95,    30,    17,    96,    97,   153,
     154,   165,   140,   141,   142,    98,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   124,
     181,   164,    15,    16,    18,   130,   131,    73,    74,    75,
      76,    77,    78,    20,    59,   132,   133,   134,   135,    52,
     136,   137,   138,   139,   140,   141,   142,   117,   118,   119,
     120,   121,     1,    62,   196,   102,    63,    65,   130,   131,
     198,   199,   159,   160,   161,   162,   163,    66,   132,   133,
     134,   135,   203,   136,   137,   138,   139,   140,   141,   142,
     111,   130,   131,   144,   211,    67,   150,    68,    69,   112,
     113,   132,   133,   134,   135,   114,   136,   137,   138,   139,
     140,   141,   142,   130,   131,   115,   195,   116,   197,   205,
     122,   125,   155,   132,   133,   134,   135,   148,   136,   137,
     138,   139,   140,   141,   142,   156,   158,   157,   206,   143,
     130,   131,   180,   182,   186,   187,   212,   188,   189,   210,
     132,   133,   134,   135,   190,   136,   137,   138,   139,   140,
     141,   142,   130,   131,   191,   192,   145,   193,   208,    19,
      24,    83,   132,   133,   134,   135,   183,   136,   137,   138,
     139,   140,   141,   142,   130,   131,   103,    80,   146,     0,
       0,     0,     0,     0,   132,   133,   134,   135,     0,   136,
     137,   138,   139,   140,   141,   142,   130,   131,     0,     0,
     147,     0,     0,     0,     0,     0,   132,   133,   134,   135,
       0,   136,   137,   138,   139,   140,   141,   142,   130,   131,
       0,     0,   166,     0,     0,     0,     0,     0,   132,   133,
     134,   135,     0,   136,   137,   138,   139,   140,   141,   142,
     130,   131,     0,     0,   194,     0,     0,     0,     0,     0,
     132,   133,   134,   135,     0,   136,   137,   138,   139,   140,
     141,   142,    35,   201,     0,     0,   207,     0,     0,     0,
       0,     0,    35,    36,     0,     0,    37,   202,    38,    39,
      40,    41,    35,    82,     0,     0,    37,    42,    38,    39,
      40,    41,    35,    86,     0,     0,    37,    42,    38,    39,
      40,    41,    35,   123,     0,     0,    37,    42,    38,    87,
      40,    41,    35,   204,     0,     0,    37,    42,    38,    39,
      40,    41,    35,   209,     0,     0,    37,    42,    38,    39,
      40,    41,    35,   213,     0,     0,    37,    42,    38,    39,
      40,    41,     0,     0,     0,     0,    37,    42,    38,    39,
      40,    41,   130,   131,     0,     0,     0,    42,     0,     0,
       0,     0,   132,   133,   134,   135,     0,   136,   137,   138,
     139,   140,   141,   142,   130,   131,   149,     0,     0,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   130,   136,
     137,   138,   139,   140,   141,   142,     0,     0,   132,   133,
     134,   135,     0,   136,   137,   138,   139,   140,   141,   142,
     132,   133,   134,   135,     0,   136,   137,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,     0,    -1,    -1,   138,
     139,   140,   141,   142
};

static const yytype_int16 yycheck[] =
{
      14,    65,    32,    67,    68,    69,    70,    22,    72,    13,
      21,    31,    31,    31,    36,    94,    21,    96,    97,    36,
      63,    35,     4,     5,     6,     7,     8,     9,    47,    49,
      49,    49,     0,    63,    98,     4,     5,    13,    49,    11,
      12,    45,    24,    19,    45,    59,    47,    62,    10,    14,
      15,    16,    17,    18,    36,    20,    46,    39,    40,     4,
       5,   125,    41,    42,    43,    47,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,    84,
     144,   124,     6,     7,    12,    22,    23,     4,     5,     6,
       7,     8,     9,    45,   124,    32,    33,    34,    35,    49,
      37,    38,    39,    40,    41,    42,    43,    14,    15,    16,
      17,    18,    13,    46,    51,    36,    48,    47,    22,    23,
     184,   185,    14,    15,    16,    17,    18,    47,    32,    33,
      34,    35,   196,    37,    38,    39,    40,    41,    42,    43,
      45,    22,    23,    51,   208,    47,    50,    47,    47,    45,
      45,    32,    33,    34,    35,    45,    37,    38,    39,    40,
      41,    42,    43,    22,    23,    45,   180,    45,   182,    50,
      21,    47,     6,    32,    33,    34,    35,    48,    37,    38,
      39,    40,    41,    42,    43,     7,     9,     8,   202,    48,
      22,    23,    11,    11,    50,    50,   210,    50,    50,    11,
      32,    33,    34,    35,    50,    37,    38,    39,    40,    41,
      42,    43,    22,    23,    50,    50,    48,    50,    31,    10,
      17,    62,    32,    33,    34,    35,   149,    37,    38,    39,
      40,    41,    42,    43,    22,    23,    66,    53,    48,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    22,    23,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    22,    23,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      22,    23,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    11,    12,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    25,    26,    27,    28,
      29,    30,    11,    12,    -1,    -1,    25,    36,    27,    28,
      29,    30,    11,    12,    -1,    -1,    25,    36,    27,    28,
      29,    30,    11,    12,    -1,    -1,    25,    36,    27,    28,
      29,    30,    11,    12,    -1,    -1,    25,    36,    27,    28,
      29,    30,    11,    12,    -1,    -1,    25,    36,    27,    28,
      29,    30,    11,    12,    -1,    -1,    25,    36,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    25,    36,    27,    28,
      29,    30,    22,    23,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    22,    23,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    22,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    19,    53,    54,    55,    56,    60,    36,    57,
      58,    59,    36,     0,    10,    55,    55,    46,    12,    57,
      45,    45,    47,    64,    59,    14,    15,    16,    17,    18,
      20,    77,    77,    58,    62,    11,    12,    25,    27,    28,
      29,    30,    36,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    49,    78,    79,    80,    81,    82,    83,    56,
      61,    64,    46,    48,    64,    47,    47,    47,    47,    47,
      31,    47,    49,     4,     5,     6,     7,     8,     9,    21,
      78,    64,    12,    62,    45,    61,    12,    28,     4,     5,
       6,     7,     8,     9,    24,    36,    39,    40,    47,    74,
      75,    76,    36,    66,    74,    74,    74,    74,    63,    74,
      74,    45,    45,    45,    45,    45,    45,    14,    15,    16,
      17,    18,    21,    12,    77,    47,    75,    75,    75,    74,
      22,    23,    32,    33,    34,    35,    37,    38,    39,    40,
      41,    42,    43,    48,    51,    48,    48,    48,    48,    46,
      50,     4,     5,     4,     5,     6,     7,     8,     9,    14,
      15,    16,    17,    18,    61,    74,    48,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      11,    74,    11,    63,    31,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    48,    64,    51,    64,    74,    74,
      12,    12,    26,    74,    12,    50,    64,    48,    31,    12,
      11,    74,    64,    12
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
#line 62 "trabalho.y"
    { cout << "#include <iostream>\n"
                                     "#include <string.h>\n"
                                     "#include <stdio.h>\n\n"
                                     "using namespace std;\n\n"
                                     "#define TRUE 1\n"
                                     "#define FALSE 0\n\n" << (yyvsp[(1) - (1)]).c << "\n\n" << endl; }
    break;

  case 3:
#line 70 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (4)]).c + geraCodigoDeclaracaoVarTemp() + "\nint main() {\n" + (yyvsp[(3) - (4)]).c + "\treturn 0;\n}\n"; }
    break;

  case 4:
#line 72 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 5:
#line 73 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 6:
#line 74 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 7:
#line 81 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 8:
#line 83 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 9:
#line 84 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 10:
#line 87 "trabalho.y"
    { 
                 string lista = (yyvsp[(1) - (3)]).v;
                 string tipo = (yyvsp[(3) - (3)]).t;
                 (yyval).c = "";
    
                 for( size_t pos = lista.find( "$" ); pos != string::npos; pos = lista.find( "$" ) ) { 
                   string variavel = lista.substr( 0, pos );
                   if(tipo == "char"){
                     (yyval).c += tipo + " " + variavel + "[256];\n"; 
                   }else{
                     (yyval).c += tipo + " " + variavel + ";\n"; 
                   }
                   insereVar( variavel, tipo );
                   lista = lista.substr( pos+1 );
                 }
               }
    break;

  case 11:
#line 104 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (3)]).v + "$" + (yyvsp[(3) - (3)]).v; }
    break;

  case 12:
#line 105 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (1)]).v + "$"; }
    break;

  case 22:
#line 130 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 23:
#line 131 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 24:
#line 133 "trabalho.y"
    { (yyval).v = ""; (yyval).c = (yyvsp[(1) - (3)]).c + (yyvsp[(2) - (3)]).c + (yyvsp[(3) - (3)]).c; }
    break;

  case 33:
#line 148 "trabalho.y"
    {
          	(yyvsp[(1) - (3)]).t = buscaTipoVar( (yyvsp[(1) - (3)]).v );
            (yyval).t = ""; 
            (yyval).v = "";

            if( ((yyvsp[(1) - (3)]).t == (yyvsp[(3) - (3)]).t && (yyvsp[(1) - (3)]).t != "string") || ((yyvsp[(1) - (3)]).t == "double" && (yyvsp[(3) - (3)]).t == "int") ){
              (yyval).c = (yyvsp[(3) - (3)]).c + (yyvsp[(1) - (3)]).v + " = " + (yyvsp[(3) - (3)]).v + ";\n";
            }else if( (yyvsp[(1) - (3)]).t == "string" && (yyvsp[(3) - (3)]).t == "string" ){
              (yyval).c = "strncpy(" + (yyvsp[(1) - (3)]).v + ", " + (yyvsp[(3) - (3)]).v + ", 256);\n";
            }else if( (yyvsp[(1) - (3)]).t == "string" && (yyvsp[(3) - (3)]).t == "char" ){
              (yyval).c = (yyvsp[(3) - (3)]).c + (yyvsp[(1) - (3)]).v + "[0] = " + (yyvsp[(3) - (3)]).v + ";\n" + (yyvsp[(1) - (3)]).v + "[1] = 0;\n";
            }else{
              erroSemantico( "Não é possível atribuir " + (yyvsp[(3) - (3)]).t + " à " + (yyvsp[(1) - (3)]).t );
            }
          }
    break;

  case 36:
#line 171 "trabalho.y"
    { (yyval).v = "";
              (yyval).c = "\tputs("+ (yyvsp[(3) - (4)]).v +");\n";
            }
    break;

  case 38:
#line 180 "trabalho.y"
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

  case 39:
#line 193 "trabalho.y"
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

  case 45:
#line 227 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "+", (yyvsp[(3) - (3)]) ); }
    break;

  case 46:
#line 228 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "-", (yyvsp[(3) - (3)]) ); }
    break;

  case 47:
#line 229 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "*", (yyvsp[(3) - (3)]) ); }
    break;

  case 48:
#line 230 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "/", (yyvsp[(3) - (3)]) ); }
    break;

  case 49:
#line 231 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "%", (yyvsp[(3) - (3)]) ); }
    break;

  case 50:
#line 232 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<", (yyvsp[(3) - (3)]) ); }
    break;

  case 51:
#line 233 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">", (yyvsp[(3) - (3)]) ); }
    break;

  case 52:
#line 234 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), ">=", (yyvsp[(3) - (3)]) );}
    break;

  case 53:
#line 235 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "<=", (yyvsp[(3) - (3)]) );}
    break;

  case 54:
#line 236 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "==", (yyvsp[(3) - (3)]) );}
    break;

  case 55:
#line 237 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "!=", (yyvsp[(3) - (3)]) );}
    break;

  case 56:
#line 238 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "&&", (yyvsp[(3) - (3)]) );}
    break;

  case 57:
#line 239 "trabalho.y"
    { geraCodigoOperador( (yyval), (yyvsp[(1) - (3)]), "||", (yyvsp[(3) - (3)]) );}
    break;

  case 59:
#line 245 "trabalho.y"
    { 
  	(yyval).c = (yyvsp[(1) - (1)]).c;
    (yyval).v = (yyvsp[(1) - (1)]).v;
    (yyval).t = buscaTipoVar( (yyvsp[(1) - (1)]).v );
  }
    break;

  case 61:
#line 251 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 62:
#line 252 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 63:
#line 253 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;

  case 64:
#line 254 "trabalho.y"
    { (yyval).v = (yyvsp[(1) - (2)]).v + (yyvsp[(2) - (2)]).v; }
    break;


/* Line 1267 of yacc.c.  */
#line 1905 "y.tab.c"
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


#line 299 "trabalho.y"

#include "lex.yy.c"

struct Resultado {
  string opr, a, b, r;
} resultado[] = {
  { "+", "int ", "int ", "int" },
  { "+", "int ", "double ", "double" },
  { "+", "double ", "int ", "double" },
  { "+", "double ", "double ", "double" },
  { "+", "char ", "char ", "string" },
  { "+", "char ", "string ", "string" },
  { "+", "string ", "char ", "string" },
  { "+", "string ", "string ", "string" },
  { "-", "int ", "int ", "int" },
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

void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3) {
  ss.t = tipoOperacao( op, s1.t, s3.t ); 
  ss.v = criaTemp( ss.t );

  if( s1.t != "string" && s3.t != "string" )
    ss.c = s1.c + s3.c + "\t" + ss.v + " = " + s1.v + " " + op + " " + s3.v + ";\n";  
  else {
    string strA = s1.v, strB = s3.v, conversoes = "";

    if( s1.t == "char" ) {
      strA = criaTemp( "string" );
      conversoes += "\t" + strA + "[0] = " + s1.v + ";\n" + "\t" + strA + "[1] = 0;\n"; 
    }

    if( s3.t == "char" ) {
      strB = criaTemp( "string" );
      conversoes += "\t" + strB + "[0] = " + s3.v + ";\n" + "\t" + strB + "[1] = 0;\n"; 
    }

    ss.c = s1.c + s3.c + conversoes + "\tstrncpy( " + ss.v + ", " + strA + ",256 );\n" + "\tstrcat( " + ss.v + ", " + strB + " );\n";
  } 
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

string criaTemp( string tipo ) {
  if( tipo == "int" )
    return "_t_int_" + toStr( ++n_temp.tipo_int );
  else if( tipo == "char" )
    return "_t_char_" + toStr( ++n_temp.tipo_char );
  else if( tipo == "double" )
    return "_t_double_" + toStr( ++n_temp.tipo_double );
  else if( tipo == "string" )
    return "_t_string_" + toStr( ++n_temp.tipo_string );
  else if( tipo == "bool" )
    return "_t_boolean_" + toStr( ++n_temp.tipo_bool );
  else
    erroSemantico( "Bug interno do Compilador." );

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





