/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int k; //循环变量，1-n中的整数
	int factorial; //存放 k!
	double sum; //累计和 e的近似值 
	double item; //第k项的值 
		
	sum = 1.0;//初始和 
	k = 1;//循环变量 
	factorial = 1;//第一项的阶层为1 
	item = 1.0;//第一项的值 
	while(item > 0.0000001){
		sum += item;//每一项和相加 
		k++;
		factorial *= k;//k!
		item = 1.0 / factorial;//第k项的值 
	} 
	
	printf("e = %.10Lf\n",sum);
	
	return 0;
}