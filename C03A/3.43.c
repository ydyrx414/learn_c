/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, j; //行列标号
	int n; //行数 
	int SpaceNumber; //第i行前的空格个数
	int StarNumber; //第i行前的*个数 
	
	printf( "请输入行数：" );
	scanf( "%d", &n );
	
	for ( i = 1; i <= n; i++ ){ //行 
		//输出第i行的空格
		SpaceNumber = n - i;
		for( j = 0; j < SpaceNumber; j++ ){
			printf( " " );
		}
		
		//输出第i行的* 
		StarNumber = 2 * i - 1;
		for( j = 0; j < StarNumber; j++ ){
			printf( "*" );
		}

		printf( "\n" );
	}
}

