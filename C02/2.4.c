/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float x,y;
	
	printf("������x��ʵ������");
	scanf("%f",&x);
	
	if(1 <= x && x <= 2){
		y = x + 2;
		printf("y = x + 2 = %f\n",y);
	}
	else {
		y = x + 1;
		printf("y = x + 1 = %f\n",y);
	}
	return 0;
}