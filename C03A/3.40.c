/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float km;//���� 
	int mile;//Ӣ�� 
	
	printf("Ӣ��  ����\n");
	
	for(mile=1;mile <= 10;mile++){
		km = mile * 1.609;
		printf(" %2d   %-.3f\n",mile,km);
	}
	
	return 0;
}