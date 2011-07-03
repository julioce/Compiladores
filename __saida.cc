#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

int _inteiro;
int _t_boolean_1;

int main() {
_inteiro = 0;
	_t_boolean_1 = _inteiro;
	if( !_t_boolean_1 ) goto label_else_2;
	puts("Estou no If");
	goto label_fim_1;
	label_else_2:
	puts("Estou no Else");
	label_fim_1:
	return 0;
}



