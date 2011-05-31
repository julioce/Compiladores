%{
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
%}

%token _VALUE_INTEGER _VALUE_DOUBLE _VALUE_CHAR _VALUE_STRING _VALUE_BOOLEAN
%token _BEGIN _DO _END
%token _VAR _INTEGER _DOUBLE _CHAR _STRING _BOOLEAN _FUNCTION
%token _AND _OR _NOT
%token _IF _ELSE _FOR _WHILE _PRINT _READ
%token _ATRIBUICAO _MENORIGUAL _MAIORIGUAL _IGUAL _DIFERENTE 
%token _ID

%left _OR
%left _AND
%nonassoc '<' '>' _MENORIGUAL _MAIORIGUAL _IGUAL _DIFERENTE
%left '+' '-'
%left '*' '/' '%' '^'

%start PROGRAMA

%%
/*=========================
Bloco principal do programa:
==========================*/
PROGRAMA : BLOCO_PRINCIPAL { cout << "\nSintaxe OK!" << endl; }
         ; 
BLOCO_PRINCIPAL : DECLARACOES_GLOBAIS _BEGIN CMDS _END
                ; 
DECLARACOES_GLOBAIS : VAR DECLARACOES_GLOBAIS
                    | FUN DECLARACOES_GLOBAIS
                    |
                    ; 


/*================================
Bloco de declarações de variáveis:
================================*/                  
VAR : _VAR DECLARACOES_VARS _END
    ; 
DECLARACOES_VARS : DECLARACAO_VAR DECLARACOES_VARS
                 |
                 ; 
DECLARACAO_VAR : LISTA_IDS ':' TIPOS
               ; 
LISTA_IDS : _ID ',' LISTA_IDS
          | _ID
          ; 


/*==============================
Bloco de declarações de funções:
==============================*/
FUN : _FUNCTION _ID ':' TIPOS CORPO 
    | _FUNCTION _ID '(' PARAMS ')' ':' TIPOS CORPO
    ; 
CORPO : VAR CMDS _END
      | CMDS _END
      ; 
PARAMS : DECLARACAO_VAR ',' PARAMS
       | DECLARACAO_VAR
       ; 


/*============================
Bloco de Comandos e operações:
============================*/
CMDS : CMDS CMD
     |
     ; 
CMD : _DO CMDS _END
    | CMD_ATRIB 
    | CMD_SAIDA
    | CMD_ENTRADA
    | CMD_IF_ELSE
    | CMD_FOR
    | CMD_WHILE
    | CMD_DO_WHILE
    ; 
    
/*Comandos de Atribuição*/
CMD_ATRIB : _ID _ATRIBUICAO E
          ; 
/*Comandos de Entrada e Saida*/
CMD_SAIDA : _PRINT '(' E ')'
          ; 
CMD_ENTRADA : _READ '(' E ')'
          ; 
/*Comando de Controle*/
CMD_IF_ELSE : _IF '(' E ')' _DO CMDS _END
            | _IF '(' E ')' _DO CMDS _ELSE CMDS _END
            ;
/*Comando de Iteração*/
CMD_FOR : _FOR '(' CMD_ATRIB ';' E ';' E ')' _DO CMDS _END
        ;
CMD_WHILE : _WHILE '(' E ')' _DO CMDS _END
          ; 
CMD_DO_WHILE : _DO CMDS _WHILE '(' E ')' _END
          ; 
/*Operações*/
E : E '+' E
  | E '-' E
  | E '*' E
  | E '/' E
  | E '%' E
  | E '^' E
  | E '<' E
  | E '>' E
  | E _MENORIGUAL E
  | E _MAIORIGUAL E
  | E _IGUAL E
  | E _DIFERENTE E
  | E _AND E
  | E _OR E
  | F
  ;
F : _ID
  | VALUE
  | '(' E ')'
  | _NOT F
  | '-' F
  | '+' F
  ; 


/*==========================
Bloco de Tipos e Constantes:
==========================*/
VALUE : _VALUE_INTEGER 
      | _VALUE_DOUBLE
      | _VALUE_CHAR
      | _VALUE_STRING
      | _VALUE_BOOLEAN
      ;
TIPOS : _INTEGER
      | _DOUBLE
      | _CHAR
      | _STRING
      | _BOOLEAN
      ;

%%
#include "lex.yy.c"

void yyerror( const char* st )
{
  cout << "Erro sintatico: " << st << endl
       << "Erro anterior ao token: " << yytext << endl;
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




