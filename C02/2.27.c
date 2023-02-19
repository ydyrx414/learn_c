/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int RandNumber; 
	int UserNumber; 
	
	UserNumber = -1;
	printf( "猜正反面,正面输入1,反面输入 0:" ); 
	scanf( "%d", &UserNumber );
	if( UserNumber != 1 && UserNumber != 0 ) {
		printf( "输入错误!程序结束！\n" ); 
		exit(0);
	}
	
	srand( time(0) );  
	RandNumber = rand();
	
	if( UserNumber == (RandNumber > RAND_MAX/2) ) {
		printf( "^:^恭喜你猜对了!^:^\n" );	
	}
	else printf( "^:^很遗憾!你猜错了！^:^\n" );	

	return 0;
}