/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	double Height,Weight,BMI;//定义变量分别为身高体重BIM 
	
	//获取输入的身高体重 
	printf("请输入身高（米）:");
	scanf("%Lf",&Height);
	
	printf("请输入体重（公斤）:");
	scanf("%Lf",&Weight); 
	
	//计算BMI 
	BMI =  Weight / (Height * Height); 
	
	//对计算的BMI进行判断 
	if(BMI < 18.5) printf("超轻：请加强锻炼和营养！");
	
	else if(BMI >= 18.5 && 25.0 > BMI ) printf("标准：请继续保持！\n");
	else if(BMI < 30.0 && BMI >= 25.0) printf("超重：请加强锻炼！\n"); 
	else if(BMI > 30.0) printf("肥胖：怎么说呢？！\n"); 
	
	
	
	return 0;
}