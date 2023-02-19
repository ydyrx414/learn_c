/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a[6];//存放数字 
	int k;//循环变量
	int n=6;//数组长度
	int temp;//中间变量
	 
	printf("输入6个整数，空格分开，回车结束：\n");
	for(k=0;k<6;k++){
		scanf("%d",&a[k]);
	} 
	
	printf("逆序存放数据的结果：");
	for(k=0;k<=((n-1)/2);k++){
		temp = a[k];
		a[k] = a[n-1-k];
		a[n-1-k] = temp;
		
	} 
	for(k=0;k<n;k++){
		printf("%d ",a[k]);
	}	
	return 0;
}