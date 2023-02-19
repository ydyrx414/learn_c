/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char** argv)
{
	double x,y;
	int NumberOfHits;
	int k;
	
	srand( time( 0 ) );//设置随机数种子 
	
	NumberOfHits = 0; //初始值为0 
	
	for(k = 0; k < 10000000; k++ ){
		//生成[-1,1]的实数值随机数 
		x = 2.0 * rand() / RAND_MAX - 1.0;
		y = 2.0 * rand() / RAND_MAX - 1.0;
		
		if ( ( x * x + y * y ) <= 1.0 )	NumberOfHits++;
	}
	
	printf( "PI的近似值：%.20Lf\n", NumberOfHits * 4.0 / 10000000 ); 
	
	return 0;
}