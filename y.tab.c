#ifndef lint
static char const 
yyrcsid[] = "$FreeBSD: src/usr.bin/yacc/skeleton.c,v 1.28 2000/01/17 02:04:06 bde Exp $";
#endif
#include <stdlib.h>
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYLEX yylex()
#define YYEMPTY -1
#define yyclearin (yychar=(YYEMPTY))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING() (yyerrflag!=0)
static int yygrowstack();
#define YYPREFIX "yy"
#line 2 "trabalho.y"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int yyparse();
int yylex();
void yyerror( const char* st );
string toStr( int n );
int toInt( string n );


struct Atributos {
  string e, d;
};

#define YYSTYPE Atributos
#line 36 "y.tab.c"
#define YYERRCODE 256
#define _VALUE_INTEGER 257
#define _VALUE_DOUBLE 258
#define _VALUE_CHAR 259
#define _VALUE_STRING 260
#define _VALUE_BOOLEAN 261
#define _DO 262
#define _END 263
#define _VAR 264
#define _INTEGER 265
#define _DOUBLE 266
#define _CHAR 267
#define _STRING 268
#define _BOOLEAN 269
#define _FUNCTION 270
#define _AND 271
#define _OR 272
#define _NOT 273
#define _IF 274
#define _ELSE 275
#define _PRINT 276
#define _ATRIBUICAO 277
#define _MENORIGUAL 278
#define _MAIORIGUAL 279
#define _IGUAL 280
#define _DIFERENTE 281
#define _ID 282
#define BLOCO 283
const short yylhs[] = {                                        -1,
    0,    1,    2,    2,    2,    4,    6,    6,    7,    8,
    8,    5,    5,   10,   10,   11,   11,    3,    3,   12,
   12,   12,   13,   14,   15,   15,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   17,   17,   17,   17,   17,   17,   18,   18,   18,   18,
   18,    9,    9,    9,    9,    9,
};
const short yylen[] = {                                         2,
    1,    4,    2,    2,    0,    2,    3,    0,    3,    3,
    1,    6,    9,    3,    2,    3,    1,    2,    0,    1,
    1,    1,    3,    4,    7,    9,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    1,
    1,    1,    3,    2,    2,    2,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,
};
const short yydefred[] = {                                      0,
    0,    0,    0,    1,    0,    0,    0,    0,    6,    0,
    0,    0,   19,    3,    4,    0,    0,    0,    0,    0,
    0,   10,    7,   52,   53,   54,   55,   56,    9,    0,
    0,    0,    2,    0,    0,    0,   18,   20,   21,   22,
    0,    0,    0,    0,    0,    0,    0,    0,   12,   16,
    0,   47,   48,   49,   50,   51,    0,   41,    0,    0,
    0,    0,   40,   42,    0,    0,   15,    0,    0,   44,
   46,   45,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   24,   14,    0,
   43,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   29,   30,   31,   19,   13,    0,   25,   19,    0,
   26,
};
const short yydgoto[] = {                                       3,
    4,    5,   21,    6,    7,    9,   10,   11,   29,   49,
   32,   37,   38,   39,   40,   62,   63,   64,
};
const short yysindex[] = {                                   -224,
 -273, -258,    0,    0, -236, -224, -224,    4,    0,   -6,
  -27,    2,    0,    0,    0, -273, -273, -158, -158, -273,
 -204,    0,    0,    0,    0,    0,    0,    0,    0,    3,
   24,   50,    0,   25,   57, -177,    0,    0,    0,    0,
 -246, -273,   45,   21, -155,   21,   53, -149,    0,    0,
 -158,    0,    0,    0,    0,    0,   21,    0,   21,   21,
   21,  -37,    0,    0,   94,  -15,    0,   77,   78,    0,
    0,    0,  -26,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   21, -124,    0,    0, -246,
    0,    7,   -4,   37,   37,   37,   37,   37,   37,   51,
   51,    0,    0,    0,    0,    0, -262,    0,    0, -134,
    0,
};
const short yyrindex[] = {                                   -123,
 -207,    0,    0,    0,    0, -123, -123,   85,    0,    0,
    0,    0,    0,    0,    0,    0, -207,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  103,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -180,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   58,  156,   72,   86,  100,  114,  128,  142,   30,
   44,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
const short yygindex[] = {                                      0,
    0,  126,  -28,  -39,    0,  129,  -13,  131,  -16,   55,
  107,    0,    0,    0,    0,   40,   71,    0,
};
#define YYTABLESIZE 438
const short yytable[] = {                                      86,
  108,   48,   30,   87,   84,   82,   31,   83,    8,   85,
   86,   34,  109,   35,   91,   84,   82,    1,   83,   36,
   85,   86,   80,   12,   81,   13,   84,   82,   31,   83,
   18,   85,   86,   80,   69,   81,   47,   84,   82,    1,
   83,   20,   85,   86,   80,    2,   81,   16,   84,   82,
   48,   83,   17,   85,    8,   80,    8,   81,   33,   19,
   61,   41,    8,   59,   44,   60,   80,   42,   81,   34,
   27,   35,   27,   86,   27,    8,  107,   36,   84,   82,
  110,   83,   23,   85,   28,   66,   28,   86,   28,   27,
   43,   27,   84,   23,   23,   23,   45,   85,   38,   46,
   73,   23,   51,   28,   65,   28,   24,   25,   26,   27,
   28,   67,   34,   92,   93,   94,   95,   96,   97,   98,
   99,  100,  101,  102,  103,  104,   35,   70,  111,   71,
   72,   14,   15,   68,   88,   89,   90,  105,    5,   34,
   36,   35,   11,   17,  106,   23,   22,   36,   50,    0,
    0,    0,    0,    0,   37,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   32,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   33,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   39,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   74,   75,    0,    0,    0,    0,    0,
   76,   77,   78,   79,   74,   75,    0,    0,    0,    0,
    0,   76,   77,   78,   79,   74,   75,    0,    0,    0,
    0,    0,   76,   77,   78,   79,   74,    0,    0,    0,
    0,    0,    0,   76,   77,   78,   79,   52,   53,   54,
   55,   56,    0,    0,   76,   77,   78,   79,    0,    0,
    0,    0,   27,   57,    0,    0,    0,    0,    0,    0,
   27,   27,   58,   27,   27,   27,   28,   27,   27,   27,
   27,   27,    0,    0,   28,   28,    0,   28,   28,   28,
   38,   28,   28,   28,   28,   28,    0,    0,   38,   38,
    0,   38,   38,   38,   34,    0,    0,    0,    0,   38,
    0,    0,   34,   34,    0,   34,   34,   34,   35,    0,
    0,    0,    0,   34,    0,    0,   35,   35,    0,   35,
   35,   35,   36,    0,    0,    0,    0,   35,    0,    0,
   36,   36,    0,   36,   36,   36,   37,    0,    0,    0,
    0,   36,    0,    0,   37,   37,    0,   37,   37,   37,
   32,    0,    0,    0,    0,   37,    0,    0,   32,   32,
    0,   32,   32,   32,   33,    0,    0,    0,    0,   32,
    0,    0,   33,   33,    0,   33,   33,   33,   39,    0,
    0,    0,    0,   33,    0,    0,    0,   39,    0,   39,
   39,   39,    0,    0,    0,    0,    0,   39,
};
const short yycheck[] = {                                      37,
  263,   41,   19,   41,   42,   43,   20,   45,  282,   47,
   37,  274,  275,  276,   41,   42,   43,  264,   45,  282,
   47,   37,   60,  282,   62,  262,   42,   43,   42,   45,
   58,   47,   37,   60,   51,   62,  283,   42,   43,  264,
   45,   40,   47,   37,   60,  270,   62,   44,   42,   43,
   90,   45,   59,   47,  262,   60,  264,   62,  263,   58,
   40,   59,  270,   43,   40,   45,   60,   44,   62,  274,
   41,  276,   43,   37,   45,  283,  105,  282,   42,   43,
  109,   45,  263,   47,   41,   46,   43,   37,   45,   60,
   41,   62,   42,  274,  275,  276,   40,   47,   41,  277,
   61,  282,   58,   60,  260,   62,  265,  266,  267,  268,
  269,   59,   41,   74,   75,   76,   77,   78,   79,   80,
   81,   82,   83,   84,   85,   86,   41,   57,  263,   59,
   60,    6,    7,  283,   41,   59,   59,  262,  262,  274,
   41,  276,   58,   41,   90,   17,   16,  282,   42,   -1,
   -1,   -1,   -1,   -1,   41,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   41,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   41,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   41,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  271,  272,   -1,   -1,   -1,   -1,   -1,
  278,  279,  280,  281,  271,  272,   -1,   -1,   -1,   -1,
   -1,  278,  279,  280,  281,  271,  272,   -1,   -1,   -1,
   -1,   -1,  278,  279,  280,  281,  271,   -1,   -1,   -1,
   -1,   -1,   -1,  278,  279,  280,  281,  257,  258,  259,
  260,  261,   -1,   -1,  278,  279,  280,  281,   -1,   -1,
   -1,   -1,  263,  273,   -1,   -1,   -1,   -1,   -1,   -1,
  271,  272,  282,  274,  275,  276,  263,  278,  279,  280,
  281,  282,   -1,   -1,  271,  272,   -1,  274,  275,  276,
  263,  278,  279,  280,  281,  282,   -1,   -1,  271,  272,
   -1,  274,  275,  276,  263,   -1,   -1,   -1,   -1,  282,
   -1,   -1,  271,  272,   -1,  274,  275,  276,  263,   -1,
   -1,   -1,   -1,  282,   -1,   -1,  271,  272,   -1,  274,
  275,  276,  263,   -1,   -1,   -1,   -1,  282,   -1,   -1,
  271,  272,   -1,  274,  275,  276,  263,   -1,   -1,   -1,
   -1,  282,   -1,   -1,  271,  272,   -1,  274,  275,  276,
  263,   -1,   -1,   -1,   -1,  282,   -1,   -1,  271,  272,
   -1,  274,  275,  276,  263,   -1,   -1,   -1,   -1,  282,
   -1,   -1,  271,  272,   -1,  274,  275,  276,  263,   -1,
   -1,   -1,   -1,  282,   -1,   -1,   -1,  272,   -1,  274,
  275,  276,   -1,   -1,   -1,   -1,   -1,  282,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 283
#if YYDEBUG
const char * const yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'","'<'",0,"'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,"_VALUE_INTEGER","_VALUE_DOUBLE","_VALUE_CHAR","_VALUE_STRING",
"_VALUE_BOOLEAN","_DO","_END","_VAR","_INTEGER","_DOUBLE","_CHAR","_STRING",
"_BOOLEAN","_FUNCTION","_AND","_OR","_NOT","_IF","_ELSE","_PRINT","_ATRIBUICAO",
"_MENORIGUAL","_MAIORIGUAL","_IGUAL","_DIFERENTE","_ID","BLOCO",
};
const char * const yyrule[] = {
"$accept : PROGRAMA",
"PROGRAMA : BLOCO_PRINCIPAL",
"BLOCO_PRINCIPAL : DECLARACOES_GLOBAIS _DO CMDS _END",
"DECLARACOES_GLOBAIS : VAR DECLARACOES_GLOBAIS",
"DECLARACOES_GLOBAIS : FUN DECLARACOES_GLOBAIS",
"DECLARACOES_GLOBAIS :",
"VAR : _VAR DECLARACOES_VARS",
"DECLARACOES_VARS : DECLARACAO_VAR ';' DECLARACOES_VARS",
"DECLARACOES_VARS :",
"DECLARACAO_VAR : LISTA_IDS ':' TIPOS",
"LISTA_IDS : _ID ',' LISTA_IDS",
"LISTA_IDS : _ID",
"FUN : _FUNCTION _ID ':' TIPOS ';' CORPO",
"FUN : _FUNCTION _ID '(' PARAMS ')' ':' TIPOS ';' CORPO",
"CORPO : VAR BLOCO ';'",
"CORPO : BLOCO ';'",
"PARAMS : DECLARACAO_VAR ',' PARAMS",
"PARAMS : DECLARACAO_VAR",
"CMDS : CMDS CMD",
"CMDS :",
"CMD : CMD_ATRIB",
"CMD : CMD_SAIDA",
"CMD : CMD_IF_ELSE",
"CMD_ATRIB : _ID _ATRIBUICAO E",
"CMD_SAIDA : _PRINT '(' _VALUE_STRING ')'",
"CMD_IF_ELSE : _IF '(' E ')' _DO CMDS _END",
"CMD_IF_ELSE : _IF '(' E ')' _DO CMDS _ELSE CMDS _END",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : E '%' E",
"E : E '<' E",
"E : E '>' E",
"E : E _MENORIGUAL E",
"E : E _MAIORIGUAL E",
"E : E _IGUAL E",
"E : E _DIFERENTE E",
"E : E _AND E",
"E : E _OR E",
"E : F",
"F : _ID",
"F : VALUE",
"F : '(' E ')'",
"F : _NOT F",
"F : '-' F",
"F : '+' F",
"VALUE : _VALUE_INTEGER",
"VALUE : _VALUE_DOUBLE",
"VALUE : _VALUE_CHAR",
"VALUE : _VALUE_STRING",
"VALUE : _VALUE_BOOLEAN",
"TIPOS : _INTEGER",
"TIPOS : _DOUBLE",
"TIPOS : _CHAR",
"TIPOS : _STRING",
"TIPOS : _BOOLEAN",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH 10000
#endif
#endif
#define YYINITSTACKSIZE 200
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short *yyss;
short *yysslim;
YYSTYPE *yyvs;
int yystacksize;
#line 157 "trabalho.y"
#include "lex.yy.c"

void yyerror( const char* st )
{
  cout << "Erro sintatico: " << st << endl
       << "Proximo a: " << yytext << endl;
}

string toStr( int n ) {
  stringstream temp;
  
  temp << n;

  return temp.str();
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




#line 368 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack()
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;
    i = yyssp - yyss;
    newss = yyss ? (short *)realloc(yyss, newsize * sizeof *newss) :
      (short *)malloc(newsize * sizeof *newss);
    if (newss == NULL)
        return -1;
    yyss = newss;
    yyssp = newss + i;
    newvs = yyvs ? (YYSTYPE *)realloc(yyvs, newsize * sizeof *newvs) :
      (YYSTYPE *)malloc(newsize * sizeof *newvs);
    if (newvs == NULL)
        return -1;
    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab

#ifndef YYPARSE_PARAM
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG void
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif	/* ANSI-C/C++ */
#else	/* YYPARSE_PARAM */
#ifndef YYPARSE_PARAM_TYPE
#define YYPARSE_PARAM_TYPE void *
#endif
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG YYPARSE_PARAM_TYPE YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL YYPARSE_PARAM_TYPE YYPARSE_PARAM;
#endif	/* ANSI-C/C++ */
#endif	/* ! YYPARSE_PARAM */

int
yyparse (YYPARSE_PARAM_ARG)
    YYPARSE_PARAM_DECL
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate])) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#if defined(lint) || defined(__GNUC__)
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#if defined(lint) || defined(__GNUC__)
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 42 "trabalho.y"
{ cout << "\nSintaxe OK!" << endl; }
break;
case 2:
#line 45 "trabalho.y"
{ cout << "\nBloco principal OK!" << endl; }
break;
case 3:
#line 48 "trabalho.y"
{ cout << "\nDeclaração de Var OK!" << endl; }
break;
case 4:
#line 49 "trabalho.y"
{ cout << "\nDeclaração de Fun OK!" << endl; }
break;
#line 579 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
