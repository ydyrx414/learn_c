/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(int argc, char** argv)
{
	double Radius,Perimeter,Area;//定义半径,周长，面积 
		
	Radius = 0;//提前赋值，用来检测用户输入是否在范围之内 
	
	//获取用户输入的半径 
	printf("请输入圆的半径：");
	scanf("%Lf",&Radius);
	
	//判断用户输入是否合理 ,
	if(Radius <= 0 ){
		printf("输入错误！半径要大于0！");
		exit(0);
	} 
	
	Perimeter = 2 * PI * Radius;
	Area = PI * Radius * Radius;
	
	printf("圆的周长：%Lf\n",Perimeter);
	printf("圆的面积：%Lf\n",Area);
	
	return 0;
}