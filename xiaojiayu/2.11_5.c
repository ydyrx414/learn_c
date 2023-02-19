/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a,b;
	
	a = 5;
	b = 2;
	b = a;
	a = b;
	
	printf("%d %d",b,a);
	return 0;
}