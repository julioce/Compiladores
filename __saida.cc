#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

int _inteiro;
char _estringue_inicio[256];
char _estringue_fim[256];
char _estringue_final[256];
char _xar;
int _t_boolean_1;
char _t_string_1[256];
char _t_string_2[256];
char _t_string_3[256];

int main() {
	_xar = '!';
	_inteiro = 99;
	strncpy(_estringue_inicio, "Início ->", 256);
	strncpy(_estringue_fim, "...<- Final", 256);
	_t_boolean_1 = _inteiro;
	if( !_t_boolean_1 ) goto label_else_2;
	puts("Estou no If");
	goto label_fim_1;
	label_else_2:
	puts("Estou no Else");
	label_fim_1:
	strncpy(_t_string_1, _estringue_inicio, 256);
	strcat(_t_string_1, _estringue_fim);
	_t_string_3[0] = _xar;
	_t_string_3[1] = 0;
	strncpy(_t_string_2, _t_string_1, 256);
	strcat(_t_string_2, _t_string_3);
	strncpy(_estringue_final, _t_string_2, 256);
	puts(_estringue_final);
	return 0;
}


