/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Celsius,Fahrenheit;
	
	Celsius = 50.0;
	Fahrenheit = ((9 * Celsius) / 5) + 32;
	
	printf("�����¶�%.1fת��Ϊ�������϶���:%.1f\n",Celsius,Fahrenheit);
	
	printf("�����������¶�:");
	scanf("%f",&Celsius);
	
	Fahrenheit = ((9 * Celsius) / 5) + 32;
	
	printf("�����¶�%.1fת��Ϊ�������϶���:%.1f\n",Celsius,Fahrenheit);
	
	return 0;
}