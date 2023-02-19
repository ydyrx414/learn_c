/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j; //行列标号
	int n; //行数 
	
	printf( "请输入行数：" );
	scanf( "%d", &n );
	
	for(i=1;i<=n;i++){
		//输出空格
		for(j = i - 1;j>0;j--){
			printf(" ");
		} 
		//输出星号
		for(j=n;j>0;j--){
			printf("**");
		}
		printf("\n"); 
		
		
	}
	
	return 0;
}