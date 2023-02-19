/************************
名称：01.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

//自定义函数，返回值为输入数据两倍 
int change(int a){
 	int  c;
	c = a * 2;
	return c; 
}

//主函数调用 
int main(int argc, char** argv)
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	int y = change(x);
	printf("The double of this number is:%d\n",y);
	 
	return 0;
}