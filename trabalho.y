%{
/*Grupo
  Júlio César Machado Bueno - 106033507
  Jonas Tomaz Alves - 106089655
  Débora Ribeiro Nobre - 107390677
*/

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int yyparse();
int yylex();
void yyerror( const char* st );
string toStr( int n );
int toInt( string n );
string criaTemp();
string geraCodigoDeclaracaoVarTemp();

struct Atributos {
  string v, c;

  Atributos(): v(""), c("") {}
  Atributos(string v, string c): v(v), c(c) {} 
};

void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3);

#define YYSTYPE Atributos
%}

%token _VALUE_INTEGER _VALUE_DOUBLE _VALUE_CHAR _VALUE_STRING _VALUE_BOOLEAN
%token _BEGIN _DO _END
%token _VAR _INTEGER _DOUBLE _CHAR _STRING _BOOLEAN _FUNCTION _ARRAY _OF
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
PROGRAMA : BLOCO_PRINCIPAL { cout << "\nSintaxe OK!\n\n"
                                     "========Arquivo Gerado========\n"
                                     "#include <iostream>\n\n"
                                     "using namespace std;\n\n" << $1.c << "\n\n" << endl; }
         ; 
BLOCO_PRINCIPAL : DECLARACOES_GLOBAIS _BEGIN { $$.c = "\nint main() {\n\treturn 0;\n}\n"; }
                  CMDS _END
                  { $$.c = $1.c + geraCodigoDeclaracaoVarTemp() + $2.c + $3.c;}
                ; 
DECLARACOES_GLOBAIS : VAR DECLARACOES_GLOBAIS { $$.c = $1.c + $2.c; }
                    | FUN DECLARACOES_GLOBAIS { $$.c = $1.c + $2.c; }
                    | { $$.v = ""; $$.c = ""; }
                    ; 


/*================================
Bloco de declarações de variáveis:
================================*/                  
VAR : _VAR DECLARACOES_VARS _END { $$ = $2; }
    ; 
DECLARACOES_VARS : DECLARACAO_VAR DECLARACOES_VARS { $$.c = $1.c + $2.c; }
                 | { $$.v = ""; $$.c = ""; }
                 ; 
DECLARACAO_VAR : LISTA_IDS ':' TIPOS
                 { 
                 string lista = $$.v;
                 $$.c = "";
    
                 for( size_t pos = lista.find( "$" ); pos != string::npos; pos = lista.find( "$" ) ) { 
                   $$.c += $3.v + " " + lista.substr( 0, pos ) + ";\n"; 
                   lista = lista.substr( pos+1 );
                 }
               }
               ; 
LISTA_IDS : _ID ',' LISTA_IDS { $$.v = $1.v + "$" + $3.v; }
          | _ID { $$.v = $1.v + "$"; }
          ; 


/*==============================
Bloco de declarações de funções:
==============================*/
FUN : _FUNCTION _ID ':' TIPOS CORPO 
    | _FUNCTION _ID '(' PARAMS ')' ':' TIPOS CORPO
    | _FUNCTION _ID '(' PARAMS ')' CORPO
    ; 
CORPO : VAR CMDS _END
      | CMDS _END
      ; 
PARAMS : DECLARACAO_VAR ',' PARAMS
       | DECLARACAO_VAR
       ; 
LISTA_E : E ',' LISTA_E
        | E
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
    | CMD_FUNCTION
    ; 

/*============================
Comandos de Atribuição:
============================*/
CMD_ATRIB : _ID _ATRIBUICAO E
          | _ID '[' E ']' _ATRIBUICAO E  
          | _ID '[' E ']' '[' E ']' _ATRIBUICAO E  
          ; 

/*============================
Comandos de Entrada e Saida:
============================*/
CMD_SAIDA : _PRINT '(' E ')' ; 
CMD_ENTRADA : _READ '(' E ')'; 

/*============================
Comando de Controle:
============================*/
CMD_IF_ELSE : _IF '(' E ')' _DO CMDS _END
            | _IF '(' E ')' _DO CMDS _ELSE CMDS _END
            ;

/*============================
Comando de Iteração:
============================*/
CMD_FOR : _FOR '(' CMD_ATRIB ';' E ';' E ')' _DO CMDS _END ;
CMD_WHILE : _WHILE '(' E ')' _DO CMDS _END ; 
CMD_DO_WHILE : _DO CMDS _WHILE '(' E ')' _END ;

/*============================
Comando de chamada de Função:
============================*/
CMD_FUNCTION : _ID
             | _ID '(' LISTA_E ')'
             ;

/*============================
Operações:
============================*/
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


/*=================================
Bloco de Tipos, Constantes e Array:
=================================*/
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
      | _ARRAY TIPO_ARRAY _OF _INTEGER
      | _ARRAY TIPO_ARRAY _OF _DOUBLE
      | _ARRAY TIPO_ARRAY _OF _CHAR
      | _ARRAY TIPO_ARRAY _OF _STRING
      | _ARRAY TIPO_ARRAY _OF _BOOLEAN
      | _ARRAY TIPO_ARRAY TIPO_ARRAY _OF _INTEGER
      | _ARRAY TIPO_ARRAY TIPO_ARRAY _OF _DOUBLE
      | _ARRAY TIPO_ARRAY TIPO_ARRAY _OF _CHAR
      | _ARRAY TIPO_ARRAY TIPO_ARRAY _OF _STRING
      | _ARRAY TIPO_ARRAY TIPO_ARRAY _OF _BOOLEAN
      ;
TIPO_ARRAY : ARRAY_INTEGER
           | ARRAY_DOUBLE
           | ARRAY_CHAR
           | ARRAY_STRING
           | ARRAY_BOOLEAN
           ;
ARRAY_INTEGER : '[' _VALUE_INTEGER ':' _VALUE_INTEGER ']';
ARRAY_DOUBLE :  '[' _VALUE_DOUBLE  ':' _VALUE_DOUBLE  ']';
ARRAY_CHAR :    '['  _VALUE_CHAR   ':'  _VALUE_CHAR   ']';
ARRAY_STRING :  '[' _VALUE_STRING  ':'  _VALUE_STRING ']';
ARRAY_BOOLEAN : '[' _VALUE_BOOLEAN ':' _VALUE_BOOLEAN ']';

%%
#include "lex.yy.c"

int n_temp = 0;

void yyerror( const char* st ){
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

string criaTemp() {
  return "t" + toStr( ++n_temp );
}

string geraCodigoDeclaracaoVarTemp() {
  string aux = "";
  
  for( int i = 1; i <= n_temp; i++ )
    aux += "int t" + toStr( i ) + ";\n";

  return aux;
}

void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3) {
  ss.v = criaTemp();
  ss.c = s1.c + s3.c + 
  ss.v + " = " + s1.v + " " + op + " " + s3.v + ";\n";  
}

int main( int argc, char* argv[] )
{
  yyparse();
}




