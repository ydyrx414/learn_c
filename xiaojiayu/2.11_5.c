/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a,b;
	
	a = 5;
	b = 2;
	b = a;
	a = b;
	
	printf("%d %d",b,a);
	return 0;
}