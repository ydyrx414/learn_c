/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Pounds,Kilograms;
	
	printf("请输入磅数:");
	scanf("%f",&Pounds);
	
	Kilograms = Pounds * 0.454;
	
	printf("%.3f磅是%.3f千克\n",Pounds,Kilograms);
	return 0;
}