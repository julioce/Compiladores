DELIM   [\t\n ]
NUMERO  [0-9]
LETRA   [A-Za-z_]

ASPAS  "\""
PLICS  "\'"
STRING  ({ASPAS}|{PLICS})([^'"\n]|[\\][\"]|[\\][\'])*({ASPAS}|{PLICS})

INTEIRO {NUMERO}+("."{NUMERO}*)?
ID      {LETRA}({LETRA}|{NUMERO})*


DO      [Dd][Oo]
END     [Ee][Nn][Dd]

IF      [Ii][Ff]
ELSE    [Ee][Ll][Ss][Ee]

PRINT   [Pp][Rr][Ii][Nn][Tt]
 
%%

{DELIM}   {}

{DO}      { return _DO; }
{END}     { return _END; }

{IF}      { return _IF; }
{ELSE}    { return _ELSE; }

{PRINT}   { return _PRINT; }

{STRING}  { return _STRING; }
{INTEIRO} { return _INTEIRO; }
{ID}      { return _ID; }

.         { return *yytext; }

%%

 


