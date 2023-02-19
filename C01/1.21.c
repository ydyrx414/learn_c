/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Feet,Meters;
	
	printf("请输入英尺数:");
	scanf("%f",&Feet);
	
	Meters = Feet * 0.305;
	
	printf("%.2f英尺是%.2f米\n",Feet,Meters);
	
	return 0;
}