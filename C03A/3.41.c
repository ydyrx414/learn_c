/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#define PI 3.14
#include <math.h>
int main(int argc, char** argv)
{
	int n;//角度
	float x;//弧度 

	printf("角度   sin      cos\n");
	for(n=0;n <= 360;n = n+10){
		x = n * (PI / 180);
		printf("%3d  %7.4f  %7.4f\n",n,sin(x),cos(x));
	}

	
	 
	return 0;
}