/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int kg;//���� 
	float pound;//�� 
	
	printf("����  ��\n");
	
	for(kg=1;kg <= 10;kg++){
		pound = kg * 2.2;
		printf(" %2d   %-.1f\n",kg,pound);
	}
	
	return 0;
}