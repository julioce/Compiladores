#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

char _str1[256];
int t1;
int t2;

int main() {
	t1 = 1 == 2;
t2 = t1;
	if( !t2 ) goto label_fim_1;
	puts("Hello World!");
	label_fim_1:
	return 0;
}



