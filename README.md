### -=-=-=-=-=- Compilador Linguagem Aline -=-=-=-=-=-

### 1 - Motivação:
    Criar um compilador e a sua respectiva linguagem para a Disciplina de Compiladroes 1 do curso de Ciência da Computação - UFRJ.



### 2 - Descrição:
    O compilador irá ler um programa especificado no arquivo de entrada em Aline e gerará código em C (com algumas restrições - C-assembly).
    Este código C-Assembly é um código C que utiliza uma semâtica próxima ao Assembly.
    Em seguida código em C será compilado pelo g++ produzindo um executável.Considere a seguinte expressão a ser traduzida:
    
    c = a * b + 1;
    
    Em um pseudo-assembly:
    LOADF a, AX
    LOADF b, BX
    MULF AX, BX
    SUMF AX, 1
    MOVF AX, c
    
    Em código de três endereços temos:
    +---+----+---+---+
    | * | t1 | a | b | 
    +---+----+---+---+

    +---+----+----+---+
    | + | t2 | t1 | 1 | 
    +---+----+----+---+

    +---+---+----+---+
    | = | c | t2 |   | 
    +---+---+----+---+

    Em C-Assembly
    t1 = a*b;
    t2 = t1+1;
    c = t2;

    a) Blocos

    b) Comandos estruturados com o conceito de blocos:
        IF com ELSE opcional
        FOR 
        WHILE
        DO-WHILE

    c) Funções
    Chamada de função com parâmetros contendo expressões. Ex: f(x+1)
    Parâmetros de funções com checagem de tipos e número de parâmetros
    Funções podem ter variáveis locais
    Funções têm valor de retorno ou void.

    d) Tipos de dados:
        int
        double
        char
        bool
        string

    e) Vetores uni-dimensionais 

    f) Expressões relacionais, lógicos e aritmétics com os operadores básicos:
        > >= < <= == !=
        not and or
        + - * / %
        + - unários
        Parênteses para trocar a precedência 

    g) Entrada e saída padrão (para o console, cin e cout por exemplo).

    h) Comando de atribuição para variáveis simples, strings e vetores com verificação de tipos.
    
    
### 3 - Linguagem:
    Dado que os requisitos do trabalho implicavam que uma linguagem fosse criada. Foi partido que a linguagem teria as seguintes características:
        * Características que me agradasse como programador. Definições pessoais de fato.
        * Fosse levemente prolixa como Ruby ou Python, no sentido que blocos e todos os comandos fossem referenciados por palavras e não caracteres sem contexto imediato.
        * Tivesse declarações de variáveis como C e Pascal. Esta característica está mais ligada ao requisito do trabalho. (Ver item 2h)
        * Não possuisse sintaxe complexa para atividades comuns. Em exemplo, a concatenação de uma variável inteira com uma string é significativamente mais fácil, sintaxicamente, em Ruby ou PHP do que em C.
        * Possuisse um curva de aprendizado rápida pela similaridade com outras linguagens.
        
        
        
### 4 - Requisitos:
    É necessário que a máquina possua Lex/Flex e Bison.
    Este compilador só foi testado no seguintes OSs:
        * OS X Snow Leopard
        * Fedora 15
    Para os demais OS deve-se verificar os requisitos Lex/Flex e Bison assim como realizar as devidas adaptações de enconding e ambientes.
    
    
    
### 5 - Uso:
    Todo o processo de verificação sintática, semântica, exibição de código C-Assembly gerado e execução do programa é transparente ao usuário. Ele se encontra no arquivo makefile. Bastando executarmos no diretório desejado onde se encontra os arquivos do compilador:
	`$ make`
	
	No makefile está especificado o nome e extenção do arquivo de entrada. Você pode facilmente modifica-los ao se desejo.
	Após a geraçào
    Caso haja alguma problema na execução do makefile recomenda-se:
        * A execução serial de cada comando do makefile individualmente como debug.
        * Consulta ao arquivo de entrada.
	
		
