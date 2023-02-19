/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int sum,num,num1,num2,num3;
	
	printf("请输入0-999之间的一个整数：");
	scanf("%d",&num);
	
	num3 = num % 10;
	num2 = (num / 10) % 10;
	num1 = (num / 10) / 10;
	sum = num3 + num2 + num1;
	
	printf("各位数字之和为：%d\n",sum); 
	
	return 0;
}