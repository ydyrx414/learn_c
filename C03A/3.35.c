/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
	int k; //循环变量
	double PI_P; //前一步计算出来的PI的近似值 
	double PI_C; //当前步计算出来的PI的近似值 
	
	PI_P = 2.0;//把括号外的2当作第0步计算出来的近似值 
	k = 2; //k从2开始 
	while(1) { 
		PI_C = PI_P * k / (k - 1) * k / (k + 1); //第k步得到的近似值 
		printf( "k = %-6d  PI = %.6Lf\n", k, PI_C );
		
		if ( fabs(PI_C - PI_P ) < 0.00001 ) break;
		
		k += 2; //分子增长的步长是2 
		PI_P = PI_C; //把最近一次计算出来的近似值作为前一步的 
	}

	return 0;
}