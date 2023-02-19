/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int i,n;
	int sum=1;
	
	printf("输入：");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum * i;
	}
	
	printf("%d",sum);
	
	return 0;
}