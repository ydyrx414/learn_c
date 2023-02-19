/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,sum;
	
	printf("请输入正整数k：");
	scanf("%d",&k);
	
	n = 1;//从1开始 
	sum = 0;//开始时和为0 
	while(n <= k){
		sum = sum + (n * n);
		n++;
	}
	//输出结果
	printf("1 * 1 + ....... + %d * %d = %d\n",k,k,sum); 
	
	return 0;
}