/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#define PI 3.14
int main(int argc, char** argv)
{
	float Radius,Height,Area,Volume;
	
	printf("请输入圆柱的半径:");
	scanf("%f",&Radius);
	
	printf("请输入圆柱的高度:");
	scanf("%f",&Height);
	
	Area = PI * Radius * Radius;
	Volume = Area * Height;
	
	printf("底面积:%.4f平方米\n",Area);
	printf("体积:%.4f立方米\n",Volume); 
	return 0;
}