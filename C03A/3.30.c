/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char** argv)
{
	int k,n = -1;//输入的正整数
	double sum =1;//初始和为0 
	int item;//分母 
	
	printf("请输入正整数:");
	scanf("%d",&n);
	
	//检测输入是否合理 
	if(n<0){
		printf("输入错误！\n"); 
		exit(0); 
	}
	
	for(k=1;k <= n;k++){
		item = k * (k+1) * (k+2);
		sum = sum + (1.0 / item);
	}
	printf("数列的和：%.20Lf\n",sum);
	
	return 0;
}