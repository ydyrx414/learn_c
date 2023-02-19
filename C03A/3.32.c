/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int k;//循环变量 
	double sum;//存放和 
	
	//获取输入 
	printf("请输入正整数n:");
	scanf("%d",&k);
	
	sum = 0.0;//初始为0 
	for(;k>0;k--){//从n到1的循环 
		sum = sum + (k / (2.0 * k - 1.0));
	}
	
	printf("数列的和：%.20Lf\n",sum);
	
	return 0;
}