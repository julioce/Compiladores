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

%token _ID _INTEIRO _STRING _DO _END
%token _PRINT _IF _ELSE

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
       ;
/*Comandos de Saida*/
CMD_SAIDA : _PRINT '(' _STRING ')'
          ;
/*Comandos de Controle*/
CMD_IF_ELSE : _IF '(' _STRING ')' _DO CMDS _END
       |  _IF '(' _STRING ')' _DO CMDS _ELSE CMDS _END
       ;

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




