
/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

float ADD(float x,float y);

int main(int argc, char** argv)
{
	float a,b,c;
	
	printf("���룺");
	scanf("%f,%f",&a,&b);
	
	printf("%f",ADD(a,b));
		
	return 0;
}

float ADD(float x,float y){
	float z;
	z = x + y;
	return z;
}