/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int sign=1;//表示正负号
	int k=1;//第几项 
	double item;//终止循环条件
	double sum=0;//总和 
	 
	while(1){
		item = 1.0 / k;
		if(item < 0.001) break;	
		sum = sum + (sign * item);
		sign = -1 * sign;
		printf("前%d项数列的和 = %Lf\n",k,sum);
		k++;
		
		
	}
	
		
	return 0;
}