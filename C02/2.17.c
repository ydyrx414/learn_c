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
	//定义变量，半径，高，底面积，体积 
	float Radius,Height,Area,Volume;
	
	//提前赋值，检测用户输入是否合理 
	Radius = 0;
	Height = 0;	
	
	//获取用户的输入
	printf("请输入圆柱的半径（单位米）：");
	scanf("%f",&Radius);
	
	printf("请输入圆柱的高度（单位米）：");
	scanf("%f",&Height);
	
	if(Radius <= 0 || Height <= 0){
		printf("半径和高度必须大于0！\n");
		exit(0);
	} 
	else{
		Area = PI * Radius * Radius;
		Volume = Area * Height;
		
		printf("底面积：%.4f平方米\n",Area);
		printf("体积：%.4f立方米\n",Volume);
	}
	
	
	 
	return 0;
}