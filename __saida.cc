#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

int _inteiro;
double _dobou_1;
double _dobou_2;
bool _buleano;
char _estringue_inicio[256];
char _estringue_fim[256];
char _estringue_final[256];
char _estringue_status[256];
char _xar;
bool _t_boolean_1;
bool _t_boolean_2;
bool _t_boolean_3;
bool _t_boolean_4;
bool _t_boolean_5;
bool _t_boolean_6;
char _t_string_1[256];
char _t_string_2[256];
char _t_string_3[256];
char _t_string_4[256];
char _t_string_5[256];
char _t_string_6[256];
char _t_string_7[256];
char _t_string_8[256];
char _t_string_9[256];
char _t_string_10[256];
char _t_string_11[256];
char _t_string_12[256];
char _t_string_13[256];
char _t_string_14[256];
char _t_string_15[256];
char _t_string_16[256];
char _t_string_17[256];
char _t_string_18[256];
char _t_string_19[256];
char _t_string_20[256];

int main() {
	_inteiro = 1;
	_dobou_1 = 9.99;
	_dobou_2 = 9.99;
	_buleano = TRUE;
	strncpy(_estringue_inicio, "Início ...", 256);
	strncpy(_estringue_fim, "... Final", 256);
	_xar = '!';
	_t_boolean_1 = _inteiro && _buleano;
	_t_boolean_6 = _t_boolean_1;
	if( !_t_boolean_6 ) goto label_else_6;
	puts("Estou no If");
	_t_boolean_2 = _dobou_1 == _dobou_2;
	_t_boolean_5 = _t_boolean_2;
	if( !_t_boolean_5 ) goto label_else_4;
	sprintf(_t_string_3, "%lf", _dobou_1);
	strncpy(_t_string_2, "dobou_1 = ", 256);
	strncpy(_t_string_1, _t_string_2, 256);
	strcat(_t_string_1, _t_string_3);
	strncpy(_t_string_5, _t_string_1, 256);
	strcat(_t_string_5, " e é dobou_2 = ");
	strncpy(_t_string_4, _t_string_5, 256);
	sprintf(_t_string_8, "%lf", _dobou_2);
	strncpy(_t_string_7, _t_string_4, 256);
	strncpy(_t_string_6, _t_string_7, 256);
	strcat(_t_string_6, _t_string_8);
	strncpy(_t_string_10, _t_string_6, 256);
	strcat(_t_string_10, ". Logo eles são iguais!");
	strncpy(_t_string_9, _t_string_10, 256);
	strncpy(_estringue_status, _t_string_9, 256);
	goto label_fim_3;
	label_else_4:
	_t_boolean_3 = _dobou_1 > _dobou_2;
	_t_boolean_4 = _t_boolean_3;
	if( !_t_boolean_4 ) goto label_else_2;
	sprintf(_t_string_13, "%lf", _dobou_1);
	strncpy(_t_string_12, "dobou_1 = ", 256);
	strncpy(_t_string_11, _t_string_12, 256);
	strcat(_t_string_11, _t_string_13);
	strncpy(_t_string_15, _t_string_11, 256);
	strcat(_t_string_15, " e é maior que dobou_2!");
	strncpy(_t_string_14, _t_string_15, 256);
	strncpy(_estringue_status, _t_string_14, 256);
	goto label_fim_1;
	label_else_2:
	sprintf(_t_string_18, "%lf", _dobou_2);
	strncpy(_t_string_17, "dobou_2 = ", 256);
	strncpy(_t_string_16, _t_string_17, 256);
	strcat(_t_string_16, _t_string_18);
	strncpy(_t_string_20, _t_string_16, 256);
	strcat(_t_string_20, " e é maior que dobou_1!");
	strncpy(_t_string_19, _t_string_20, 256);
	strncpy(_estringue_status, _t_string_19, 256);
	label_fim_1:
	label_fim_3:
	puts(_estringue_status);
	goto label_fim_5;
	label_else_6:
	puts("Estou no Else");
	label_fim_5:
	return 0;
}


