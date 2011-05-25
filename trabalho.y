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

%token _ID _INTEIRO _DOUBLE _BOOLEAN _STRING _DO _END
%token _PRINT _IF _ELSE
%token _MENORIGUAL _MAIORIGUAL _IGUAL _DIFERENTE
%token _AND _OR

%left _AND
%left _OR
%nonassoc '<' '>' _MENORIGUAL _MAIORIGUAL _IGUAL _DIFERENTE
%left '+' '-'
%left '*' '/'
%right '^'

%start PROGRAMA

%%
/*
Bloco principal do programa no formato:
do
 <qualquer coisa>
end
*/
PROGRAMA : BLOCO_PRINCIPAL { cout << "\nSintaxe OK!" << endl; }
         ;
BLOCO_PRINCIPAL : _DO CMDS _END
                ; 


/*Comandos de:
Associação de Identificadores,
Comandos de Saida
Comandos de Controle
*/
CMDS : CMDS CMD
     |
     ;
CMD : CMD_ID
    | CMD_SAIDA
    | CMD_IF_ELSE
    ;


/*Comandos de Identificadores*/
CMD_ID : _ID '=' _STRING
       | _ID '=' _INTEIRO
       | _ID '=' _DOUBLE
       | _ID '=' _BOOLEAN
       ;
/*Comandos de Saida*/
CMD_SAIDA : _PRINT '(' _STRING ')'
          ;
/*Comandos de Controle*/
CMD_IF_ELSE : _IF '(' CMD_EVAL ')' _DO CMDS _END
            | _IF '(' CMD_EVAL ')' _DO CMDS _ELSE CMDS _END
            ;
CMD_EVAL : _ID
         | _BOOLEAN
         | _ID CMD_CPR _ID
         | _INTEIRO CMD_CPR _INTEIRO
         | _DOUBLE CMD_CPR _DOUBLE
         | _ID CMD_CPR _INTEIRO
         | _INTEIRO CMD_CPR _ID
         | _ID CMD_CPR _DOUBLE
         | _DOUBLE CMD_CPR _ID
         | _INTEIRO CMD_CPR _DOUBLE
         | _DOUBLE CMD_CPR _INTEIRO
         | _ID _IGUAL _STRING
         | _ID _DIFERENTE _STRING
         ;
CMD_CPR : '<'
        | '>' 
        | _MENORIGUAL
        | _MAIORIGUAL
        | _IGUAL 
        | _DIFERENTE

%%
#include "lex.yy.c"

void yyerror( const char* st )
{
  cout << "Erro sintatico: " << st << endl;
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




