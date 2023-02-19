/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n,k,sum;
	
	//输入上限n 
	n = 0;//防止乱输入 
	printf("请输入正整数n:");
	scanf("%d",&n);
	
	if(n <1){
		printf("输入错误！");
		exit(0);
	}
	
	//循环求和
	k = 1;//k从1开始 
	sum = 0;//开始时合为0 
	while( k <= n){
		sum += k;
		printf("1....%d的累积和为：%d\n",k,sum);
		k++;
	}
	 return 0;
}