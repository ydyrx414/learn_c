/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Celsius,Fahrenheit;
	
	Celsius = 50.0;
	Fahrenheit = ((9 * Celsius) / 5) + 32;
	
	printf("摄氏温度%.1f转换为华氏摄氏度是:%.1f\n",Celsius,Fahrenheit);
	
	printf("请输入摄氏温度:");
	scanf("%f",&Celsius);
	
	Fahrenheit = ((9 * Celsius) / 5) + 32;
	
	printf("摄氏温度%.1f转换为华氏摄氏度是:%.1f\n",Celsius,Fahrenheit);
	
	return 0;
}