/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n,k;
	double sum;
	
	printf("请输入正整数n：");
	scanf("%d",&n);
	
	for(k = 1,sum = 0;k <= n;k++){		
		sum += sqrt(k);
	}
	
	printf("数列的和为：%.10Lf\n",sum); 
	
	return 0;
}