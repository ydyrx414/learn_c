/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int  br(void);
int  ic(void);
int main(int argc, char** argv)
{
	br();
	printf("3");
	ic();	
	return 0;
}

int br(void){
	printf("1");
	return 0;
}

int ic(void){
	printf("2");
	return 0;
}