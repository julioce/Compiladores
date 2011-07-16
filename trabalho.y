%{
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
string buscaTipoVar( string nome );
string tipoOperacao( string opr, string tipoA, string tipoB );
string geraCodigoDeclaracaoVarTemp();
string geraCodigoDeclaracaoVarLocal();

void adicionaCodigoDeclaracaoVarLocal( string codigo );
void yyerror( const char* st );
void erroSemantico( string erro );
void geraCodigoOperador(Atributos& ss, Atributos s1, string op, Atributos s3);
void insereVar( string nome, string tipo );

map< string, string > ts;

#define YYSTYPE Atributos
%}

%token _VALUE_NULL _TRUE _FALSE _VALUE_INTEGER _VALUE_DOUBLE _VALUE_CHAR _VALUE_STRING
%token _BEGIN _DO _END
%token _VAR _INTEGER _DOUBLE _CHAR _STRING _BOOLEAN _FUNCTION _ARRAY 
%token _AND _OR _NOT
%token _IF _ELSE _FOR _WHILE _PRINT _READ
%token _ATRIBUICAO _MENORIGUAL _MAIORIGUAL _IGUAL _DIFERENTE 
%token _ID

%left _OR
%left _AND
%nonassoc '<' '>' _MENORIGUAL _MAIORIGUAL _IGUAL _DIFERENTE
%left '+' '-'
%left '*' '/' '%'

%start PROGRAMA

%%
/*=========================
Bloco principal do programa:
==========================*/
PROGRAMA : BLOCO_PRINCIPAL { cout << "#include <iostream>\n"
                                     "#include <string.h>\n"
                                     "#include <stdio.h>\n\n"
                                     "using namespace std;\n\n" << $1.c << "\n" << endl; }
         ; 
BLOCO_PRINCIPAL : DECLARACOES_GLOBAIS _BEGIN CMDS _END
                { $$.c = $1.c + geraCodigoDeclaracaoVarTemp() + geraCodigoDeclaracaoVarLocal() + "\nint main() {\n" + $3.c + "\treturn 0;\n}"; }
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
                 string lista = $1.v;
                 string tipo = $3.t;
                 $$.c = "";
    
                 for( size_t pos = lista.find( "$" ); pos != string::npos; pos = lista.find( "$" ) ) { 
                   string variavel = lista.substr( 0, pos );
                   
                   if(tipo == "string"){
                     $$.c += "char " + variavel + "[256];\n"; 
                     insereVar( variavel, tipo );
                   }else if(tipo == "bool"){
                     $$.c += "int " + variavel + ";\n";
                     insereVar( variavel, tipo ); 
                   }else if(tipo == "array"){
                     $$.c += $3.c + " " + variavel + $3.v + ";\n"; 
                     insereVar( variavel, $3.c );
                   }else{
                     $$.c += tipo + " " + variavel + ";\n";
                     insereVar( variavel, tipo ); 
                   }
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
CMDS : CMDS CMD { $$.v = ""; $$.c = $1.c + $2.c; }
     | { $$.v = ""; $$.c = ""; }
     ; 
CMD : _DO CMDS _END { $$.v = ""; $$.c = $1.c + $2.c + $3.c; }
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
          {
            $1.t = buscaTipoVar( $1.v );
            $$.t = ""; 
            $$.v = "";
            
            $$.c = $3.c;

            if( ($1.t == $3.t && $1.t != "string") || ($1.t == "double" && $3.t == "int") ){
              $$.c += "\t" + $3.c + $1.v + " = " + $3.v + ";\n";
              
            }else if( $1.t == "string" && $3.t == "string" ){
              $$.c += "\tstrncpy(" + $1.v + ", " + $3.v + ", 256);\n";
              
            }else if( $1.t == "string" && $3.t == "char" ){
              $$.c += "\t" + $3.c + $1.v + "[0] = " + $3.v + ";\n" + $1.v + "[1] = 0;\n";
              
            }else{
              erroSemantico( "Não é possível atribuir " + $3.t + " à " + $1.t );
              
            }
          }
          | _ID '[' _VALUE_INTEGER ']' _ATRIBUICAO E 
          {
            $1.t = buscaTipoVar( $1.v );
            $$.t = ""; 
            $$.v = "";
            
            $$.c = $6.c;
            if( $1.t == $6.t ){
              $$.c += "\t" + $6.c + $1.v + "[" + $3.v + "] = " + $6.v + ";\n";
              
            }else if( $1.t == "string" && $6.t == "char" ){
              $$.c += "\t" + $6.c + $1.v + "[" + $3.v + "] = " + $3.v + ";\n" + $1.v + "[1] = 0;\n";
              
            }else{
              erroSemantico( "Não é possível atribuir " + $6.t + " à " + $1.t );
            }
          } 
          | _ID '[' _VALUE_INTEGER ']' '[' _VALUE_INTEGER ']' _ATRIBUICAO E  
          {
            $1.t = buscaTipoVar( $1.v );
            $$.t = ""; 
            $$.v = "";
            
            $$.c = $9.c;
            if( $1.t == $9.t ){
              $$.c += "\t" + $9.c + $1.v + "[" + $3.v + "][" + $6.v + "] = " + $9.v + ";\n";
              
            }else if( $1.t == "string" && $9.t == "char" ){
              $$.c += "\t" + $9.c + $1.v + "[" + $3.v + "][" + $6.v + "] = " + $3.v + ";\n" + $1.v + "[1] = 0;\n";
              
            }else{
              erroSemantico( "Não é possível atribuir " + $9.t + " à " + $1.t );
            }
          }
          ; 
          
CMD_ATRIB_LOCAL : _ID _ATRIBUICAO _VALUE_INTEGER
                {
                  if( ts.find( $1.v ) == ts.end() ){
                    
                    $1.t = "int";
                    $$.t = ""; 
                    $$.v = "";
                    
                    $$.c = $3.c;
                        
                    string varTemp = criaTemp( $1.t );
                    adicionaCodigoDeclaracaoVarLocal( "int " + $1.v + ";\n" );
                    insereVar( $1.v, $1.t );
                    
                  }
                  $$.c += "\t" + $1.v + " = " + $3.v + ";\n";
                }
                ;

/*============================
Comandos de Entrada e Saída:
============================*/
CMD_SAIDA : _PRINT '(' E ')' 
            {
              $$.v = "";
              if( $3.t == "int" ){
              	$$.c += "\tprintf(\"%i\", " + $3.v + ");\n";
              }else if( $3.t == "double" ){
              	$$.c += "\tprintf(\"%f\", " + $3.v + ");\n";
              }else if( $3.t == "string" ){
              	$$.c += $3.c + "\tprintf(\"%s\", " + $3.v + ");\n";
              }else if( $3.t == "char" ){
              	$$.c += $3.c + "\tprintf(\"%c\", " + $3.v + ");\n";
              }
            }
            ;
CMD_ENTRADA : _READ '(' _ID ')' 
            {
              $$.v = "";
              $$.c += "\tscanf(\"%d\", &" + $3.v + ");\n\tgetchar();\n";
            }
            ;

/*============================
Comando de Controle:
============================*/
CMD_IF_ELSE : _IF '(' E ')' _DO CMDS _END
            {
              string varTeste = criaTemp( "bool" );
              string labelFim = criaLabel( "label_fim" );
              $$.v = "";
              $$.c = $3.c + 
                "\t" + varTeste + " = !" + $3.v + ";\n" 
                "\tif( " + varTeste + " ) goto " + labelFim + ";\n" +
                $6.c +
                "\t" + labelFim +":\n"; 
 
            }
            | _IF '(' E ')' _DO CMDS _ELSE CMDS _END
            {
              string varTeste = criaTemp( "bool" );
              string labelFim = criaLabel( "label_fim" );
              string labelElse = criaLabel( "label_else" );
              $$.v = "";
              $$.c = $3.c + 
                "\t" + varTeste + " = !" + $3.v + ";\n" 
                "\tif( " + varTeste + " ) goto " + labelElse +";\n" +
                $6.c +
                "\tgoto " + labelFim + ";\n\t" +
                labelElse + ":\n" + 
                $8.c +  
                "\t" + labelFim + ":\n"; 
            }
            ;

/*============================
Comando de Iteração:
============================*/
CMD_FOR : _FOR '(' CMD_ATRIB_LOCAL ';' E ')' _DO CMDS _END
        {
          string varTeste = criaTemp( "bool" );
          string labelFim = criaLabel( "label_fim" );
          string labelTeste = criaLabel( "label_teste" );
          
          $$.v = "";
          $$.c = $3.c + "\t" + labelTeste + ":\n" + $5.c + 
          "\t" + varTeste + " = !" + $5.v + ";\n" + 
          "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
          $8.c +
          "\tgoto " + labelTeste + ";\n" + 
          "\t" + labelFim + ":\n"; 
        } 
        ;
CMD_WHILE : _WHILE '(' E ')' _DO CMDS _END
          {
            string varTeste = criaTemp( "bool" );
            string labelFim = criaLabel( "label_fim" );
            string labelTeste = criaLabel( "label_teste" );
          
            $$.v = "";
            $$.c = "\t" + labelTeste + ":\n" + $3.c + 
            "\t" + varTeste + " = !" + $3.v + ";\n" + 
            "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
            $6.c +
            "\tgoto " + labelTeste + ";\n" + 
            "\t" + labelFim + ":\n"; 
          }
          ; 
CMD_DO_WHILE : _DO CMDS _WHILE '(' E ')' _END
             {
               string varTeste = criaTemp( "bool" );
               string labelFim = criaLabel( "label_fim" );
               string labelTeste = criaLabel( "label_teste" );
          
               $$.v = "";
               $$.c = "\t" + labelTeste + ":\n" + $5.c + 
               "\t" + varTeste + " = !" + $5.v + ";\n" + 
               "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
               $3.c +
               "\tgoto " + labelTeste + ";\n" + 
               "\t" + labelFim + ":\n"; 
            }
            ; 

/*============================
Comando de chamada de Função:
============================*/
CMD_FUNCTION : _ID
             | _ID '(' LISTA_E ')'
             ;

/*============================
Operações:
============================*/
E : E '+' E         { geraCodigoOperador( $$, $1, "+", $3 ); }
  | E '-' E         { geraCodigoOperador( $$, $1, "-", $3 ); }
  | E '*' E         { geraCodigoOperador( $$, $1, "*", $3 ); }
  | E '/' E         { geraCodigoOperador( $$, $1, "/", $3 ); }
  | E '%' E         { geraCodigoOperador( $$, $1, "%", $3 ); }
  | E '<' E         { geraCodigoOperador( $$, $1, "<", $3 ); }
  | E '>' E         { geraCodigoOperador( $$, $1, ">", $3 ); }
  | E _MAIORIGUAL E { geraCodigoOperador( $$, $1, ">=", $3 );}
  | E _MENORIGUAL E { geraCodigoOperador( $$, $1, "<=", $3 );}
  | E _IGUAL E      { geraCodigoOperador( $$, $1, "==", $3 );}
  | E _DIFERENTE E  { geraCodigoOperador( $$, $1, "!=", $3 );}
  | E _AND E        { geraCodigoOperador( $$, $1, "&&", $3 );}
  | E _OR E         { geraCodigoOperador( $$, $1, "||", $3 );}
  | F
  ; 


F : _ID 
  { 
    $$.c = $1.c;
    $$.v = $1.v;
    $$.t = buscaTipoVar( $1.v );
  }
  | VALUE { $$ = $1; }
  | '(' E ')' { $$ = $2; }
  | _NOT F { $$.v = $1.v + $2.v; }
  | '-' F { $$.v = $1.v + $2.v; }
  | '+' F { $$.v = $1.v + $2.v; }
  ; 


/*=================================
Bloco de Tipos, Constantes e Array:
=================================*/
VALUE : _VALUE_INTEGER  
      | _VALUE_DOUBLE 
      | _VALUE_CHAR 
      | _VALUE_STRING
      | _TRUE
      | _FALSE
      | _VALUE_NULL
      ;
TIPOS : _INTEGER 
      | _DOUBLE 
      | _CHAR 
      | _STRING 
      | _BOOLEAN 
      | _ARRAY '[' _VALUE_INTEGER ']'  _INTEGER { $$.t = "array"; $$.v = "[" + $3.v + "]"; $$.c = "int"; }
      | _ARRAY '[' _VALUE_INTEGER ']'  _DOUBLE  { $$.t = "array"; $$.v = "[" + $3.v + "]"; $$.c = "double"; }
      | _ARRAY '[' _VALUE_INTEGER ']'  _CHAR    { $$.t = "array"; $$.v = "[" + $3.v + "]"; $$.c = "char"; }
      | _ARRAY '[' _VALUE_INTEGER ']'  _STRING  { $$.t = "array"; $$.v = "[" + $3.v + "]"; $$.c = "char"; }
      | _ARRAY '[' _VALUE_INTEGER ']' '[' _VALUE_INTEGER ']' _INTEGER { $$.t = "array"; $$.v = "[" + $3.v + "][" + $6.v + "]"; $$.c = "int"; }
      | _ARRAY '[' _VALUE_INTEGER ']' '[' _VALUE_INTEGER ']' _DOUBLE  { $$.t = "array"; $$.v = "[" + $3.v + "][" + $6.v + "]"; $$.c = "double"; }
      | _ARRAY '[' _VALUE_INTEGER ']' '[' _VALUE_INTEGER ']' _CHAR    { $$.t = "array"; $$.v = "[" + $3.v + "][" + $6.v + "]"; $$.c = "char"; }
      | _ARRAY '[' _VALUE_INTEGER ']' '[' _VALUE_INTEGER ']' _STRING  { $$.t = "array"; $$.v = "[" + $3.v + "][" + $6.v + "]"; $$.c = "char"; }
      ;

%%
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
string delcaracaoVarLocal = "";

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

void adicionaCodigoDeclaracaoVarLocal( string codigo ) {
  delcaracaoVarLocal += codigo;
}

string geraCodigoDeclaracaoVarLocal() {
  return delcaracaoVarLocal;
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




