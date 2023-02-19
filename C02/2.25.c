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
	float X_Point,Y_Point;//输入点的坐标 
	float X_Center,Y_Center;//圆心的坐标 
	float Radius;//圆的半径 
	float Distance;//点到圆心的距离 
	
	//获取输入
	printf("请输入圆的半径："); 
	scanf("%f",&Radius);
	
	printf("请输入圆心的x和y坐标（用空格分开）:");
	scanf("%f %f",&X_Center,&Y_Center);
	
	printf("请输入点的x和y坐标（用空格分开）:");
	scanf("%f %f",&X_Point,&Y_Point);
	
	//计算距离 
	Distance = sqrt(pow(X_Center-X_Point,2) + pow(Y_Center-Y_Point,2));
	
	//判断距离和半径的大小
	if(Radius > Distance) printf("点在圆内！\n");
	else printf("点不在圆内！\n");
	
	 
	return 0;
}