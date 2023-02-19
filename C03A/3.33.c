/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,denominator,numerator,temp;//循环变量 
	double sum;//存放和 
	
	//获取输入 
	printf("请输入正整数n:");
	scanf("%d",&n);
	
	denominator = 1;
	numerator = 2;
	sum = 2.0;//初始为0 
	for(k=2;k<=n;k++){//从n到1的循环 
		temp = denominator;
		denominator = numerator;
		numerator = temp + numerator; 
		sum = sum + 1.0 * numerator / denominator;
	}
	
	printf("数列的和：%.20Lf\n",sum);
	
	return 0;
}