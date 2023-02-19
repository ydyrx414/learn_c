/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char** argv)
{
	int i,j,k;
	int n;
		
	n=10; 
	printf( "请输入行数(最多九行)：" );
	scanf( "%d", &n );
	
	if(n>9){
		printf("输入错误！\n");
		exit(0);
		
	} 
	for(i=1;i<=n;i++){
		for(k=n-i;k>0;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
		
	return 0;
}