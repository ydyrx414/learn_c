/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Pounds,Kilograms;
	
	printf("���������:");
	scanf("%f",&Pounds);
	
	Kilograms = Pounds * 0.454;
	
	printf("%.3f����%.3fǧ��\n",Pounds,Kilograms);
	return 0;
}