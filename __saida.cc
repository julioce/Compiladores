#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

int _inteiro;
string _estringue[256];
int _t1;
int _t2;

int main() {
	_t1 = 0 * 5;
_inteiro = _t1;
_estringue = "Estou no If";
	_t2 = _inteiro;
	if( !_t2 ) goto label_fim1;
	printf("%s", _estringue);
	label_fim1:
	return 0;
}



