/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float a[10];
	int k;
	float sum,deviation;
	
	printf("输入10个实数，空格分开，回车结束：\n");
	for(k=0;k<10;k++){
		scanf("%f",&a[k]);
	}
	
	sum=0.0;
	for(k=0;k<10;k++){
		sum+=a[k];
	}
	printf("平均分：%.2f ",sum/10.0);
	
	deviation=0.0;
	for(k=0;k<10;k++){
		deviation+=((a[k]-(sum/10.0)) * (a[k]-(sum/10.0))) / 9;
	}
	printf(" 标准方差：%.2f\n",sqrt(deviation));
	
	
	return 0;
}