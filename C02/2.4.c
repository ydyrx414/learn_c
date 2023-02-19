/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float x,y;
	
	printf("请输入x（实数）：");
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