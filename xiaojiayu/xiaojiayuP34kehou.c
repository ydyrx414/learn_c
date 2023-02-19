
/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

float ADD(float x,float y);

int main(int argc, char** argv)
{
	float a,b,c;
	
	printf("输入：");
	scanf("%f,%f",&a,&b);
	
	printf("%f",ADD(a,b));
		
	return 0;
}

float ADD(float x,float y){
	float z;
	z = x + y;
	return z;
}