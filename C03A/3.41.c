/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#define PI 3.14
#include <math.h>
int main(int argc, char** argv)
{
	int n;//�Ƕ�
	float x;//���� 

	printf("�Ƕ�   sin      cos\n");
	for(n=0;n <= 360;n = n+10){
		x = n * (PI / 180);
		printf("%3d  %7.4f  %7.4f\n",n,sin(x),cos(x));
	}

	
	 
	return 0;
}