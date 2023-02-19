/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char** argv)
{
	int n = -1;//输入的正整数
	int k,sum = 0;//初始和为0 
	
	printf("请输入正整数:");
	scanf("%d",&n);
	
	//检测输入是否合理 
	if(n<0){
		printf("输入错误！\n"); 
		exit(0); 
	}
	
	for(k=1;k <= n;k++){
		sum = sum + (k * (k + 1));
	}
	printf("数列的和：%d\n",sum);
	
	return 0;
}