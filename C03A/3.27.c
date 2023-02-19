/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,Product;
		
	printf("请输入正整数n：");
	scanf("%d",&n);
	
	for(Product	= 1,k = 1; k <= n;k++){
		Product  *= k;
		printf( "%3d! = %d\n", k, Product );
	}
	
	return 0;
}