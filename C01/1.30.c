/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
double PAN_Area(double S){
	double Area;
 
 	Area = ((sqrt(3) * 3) / 2) * pow(S,2);
 	
 	return Area;
}

int main(int argc, char** argv)
{
 	double S;
 	
	printf("请输入正六边形的边长：");
	scanf("%Lf",&S);
	
	printf("正六边形的面积：%Lf",PAN_Area(S)); 	
	return 0;
}