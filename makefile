all: __saida.cc
	clear
	more __saida.cc
	../gabarito/gabarito < ./__saida.cc
	g++ __saida.cc
	./a.out

__saida.cc: trabalho entrada.l
	./trabalho.l < entrada > __saida.cc

lex.yy.c: trabalho.lex
	lex trabalho.lex

y.tab.c: trabalho.y
	yacc trabalho.y -v

trabalho: lex.yy.c y.tab.c
	g++ -o trabalho y.tab.c -lfl
