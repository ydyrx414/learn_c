/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Feet,Meters;
	
	printf("������Ӣ����:");
	scanf("%f",&Feet);
	
	Meters = Feet * 0.305;
	
	printf("%.2fӢ����%.2f��\n",Feet,Meters);
	
	return 0;
}