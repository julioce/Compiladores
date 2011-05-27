DELIM         [\t\n ]
NUMERO        [0-9]
LETRA         [A-Za-z_]

ASPAS         "\""
PLICS         "\'"

VALUE_INTEGER {NUMERO}+
VALUE_DOUBLE  {NUMERO}+("."{NUMERO}*)?
VALUE_CHAR    ({PLICS}){LETRA}({PLICS})
VALUE_STRING  ({ASPAS})([^'"\n]|[\\][\"]|[\\][\'])*({ASPAS})
VALUE_BOOLEAN (([Tt][Rr][Uu][Ee])|([Ff][Aa][Ll][Ss][Ee]))
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

AND           [Aa][Nn][Dd]
OR            [Oo][Rr]
NOT           [Nn][Oo][Tt]

IF            [Ii][Ff]
ELSE          [Ee][Ll][Ss][Ee]
FOR           [Ff][Oo][Rr]
WHILE         [Ww][Hh][Ii][Ll][Ee]
PRINT         [Pp][Rr][Ii][Nn][Tt]
 
%%

{DELIM}   {}

{VALUE_INTEGER} { return _VALUE_INTEGER; }
{VALUE_DOUBLE}  { return _VALUE_DOUBLE; }
{VALUE_CHAR}    { return _VALUE_CHAR; }
{VALUE_STRING}  { return _VALUE_STRING; }
{VALUE_BOOLEAN} { return _VALUE_BOOLEAN; }

{BEGIN}         { return _BEGIN; }
{DO}            { return _DO; }
{END}           { return _END; }

{VAR}           { return _VAR; }
{INTEGER}       { return _INTEGER; }
{DOUBLE}        { return _DOUBLE; }
{CHAR}          { return _CHAR; }
{STRING}        { return _STRING; }
{BOOLEAN}       { return _BOOLEAN; }
{FUNCTION}      { return _FUNCTION; }

{AND}           { return _AND; }
{OR}            { return _OR; }
{NOT}           { return _NOT; }

{IF}            { return _IF; }
{ELSE}          { return _ELSE; }
{FOR}           { return _FOR; }
{WHILE}         { return _WHILE; } 
{PRINT}         { return _PRINT; }

"="             { return _ATRIBUICAO; }
"<="            { return _MENORIGUAL; }
">="            { return _MAIORIGUAL; }
"=="            { return _IGUAL; }
"!="            { return _DIFERENTE; }

{ID}            { return _ID; }

.               { return *yytext; }

%%

 


