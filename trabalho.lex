/*Grupo
  Júlio César Machado Bueno - 106033507
  Jonas Tomaz Alves - 106089655
  Débora Ribeiro Nobre - 107390677
*/

DELIM         [\t ]
LINHA         [\n]
NUMERO        [0-9]
LETRA         [A-Za-z_]

ASPAS         "\""
PLICS         "\'"

TRUE          [Tt][Rr][Uu][Ee]
FALSE         [Ff][Aa][Ll][Ss][Ee]
VALUE_NULL    [Nn][Uu][Ll][Ll]
VALUE_INTEGER {NUMERO}+
VALUE_DOUBLE  {NUMERO}+("."{NUMERO}+)?
VALUE_CHAR    {PLICS}.{PLICS}
VALUE_STRING  {ASPAS}([^'"\n]|[\\][\"]|[\\][\'])*{ASPAS}
ID            {LETRA}({LETRA}|{NUMERO})*

BEGIN         [Bb][Ee][Gg][Ii][Nn]
DO            [Dd][Oo]
END           [Ee][Nn][Dd]

VAR           [Vv][Aa][Rr]
INTEGER       [Ii][Nn][Tt][Ee][Gg][Ee][Rr]
DOUBLE        [Dd][Oo][Uu][Bb][Ll][Ee]
CHAR          [Cc][Hh][Aa][Rr]  
STRING        [Ss][Tt][Rr][Ii][Nn][Gg]
BOOLEAN       [Bb][Oo][Oo][Ll][Ee][Aa][Nn]
FUNCTION      [Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]
ARRAY         [Aa][Rr][Rr][Aa][Yy]

AND           [Aa][Nn][Dd]
OR            [Oo][Rr]
NOT           [Nn][Oo][Tt]

IF            [Ii][Ff]
ELSE          [Ee][Ll][Ss][Ee]
FOR           [Ff][Oo][Rr]
WHILE         [Ww][Hh][Ii][Ll][Ee]
PRINT         [Pp][Rr][Ii][Nn][Tt]
READ          [Rr][Ee][Aa][Dd]
 
%%

{DELIM}         {}

{LINHA}         { nlinha++; }

{TRUE}          { yylval = Atributos( "1", "", "bool" ); return _TRUE; }
{FALSE}         { yylval = Atributos( "0", "", "bool" ); return _FALSE; }
{VALUE_NULL}    { yylval = Atributos( "null", "", "" ); return _TRUE; }
{VALUE_INTEGER} { yylval = Atributos( yytext, "", "int" ); return _VALUE_INTEGER; }
{VALUE_DOUBLE}  { yylval = Atributos( yytext, "", "double" ); return _VALUE_DOUBLE; }
{VALUE_CHAR}    { yylval = Atributos( yytext, "", "char" ); return _VALUE_CHAR; }
{VALUE_STRING}  { yylval = Atributos( yytext, "", "string" ); return _VALUE_STRING; }

{BEGIN}         { return _BEGIN; }
{DO}            { return _DO; }
{END}           { return _END; }

{VAR}           { return _VAR; }
{INTEGER}       { yylval = Atributos( "integer", "", "int" ); return _INTEGER; }
{DOUBLE}        { yylval = Atributos( "double", "", "double" ); return _DOUBLE; }
{CHAR}          { yylval = Atributos( "char", "", "char" ); return _CHAR; }
{STRING}        { yylval = Atributos( "string", "", "string" ); return _STRING; }
{BOOLEAN}       { yylval = Atributos( "boolean", "", "bool" ); return _BOOLEAN; }
{FUNCTION}      { return _FUNCTION; }
{ARRAY}         { return _ARRAY; }

{AND}           { return _AND; }
{OR}            { return _OR; }
{NOT}           { return _NOT; }

{IF}            { return _IF; }
{ELSE}          { return _ELSE; }
{FOR}           { return _FOR; }
{WHILE}         { return _WHILE; } 
{PRINT}         { return _PRINT; }
{READ}          { return _READ; }

"="             { return _ATRIBUICAO; }
"<="            { return _MENORIGUAL; }
"=<"            { return _MENORIGUAL; }
">="            { return _MAIORIGUAL; }
"=>"            { return _MAIORIGUAL; }
"=="            { return _IGUAL; }
"!="            { return _DIFERENTE; }
"=!"            { return _DIFERENTE; }

{ID}            { yylval = Atributos( string("_") + yytext, "", "" ); return _ID; }

.               { return *yytext; }

%%

 


