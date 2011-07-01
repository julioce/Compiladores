all: __saida.cc
	more __saida.cc
	g++ __saida.cc
	./a.out

__saida.cc: trabalho entrada
	./trabalho < entrada > __saida.cc

lex.yy.c: trabalho.lex
	lex trabalho.lex

y.tab.c: trabalho.y
	yacc trabalho.y

trabalho: lex.yy.c y.tab.c
	g++ -o trabalho y.tab.c -lfl
