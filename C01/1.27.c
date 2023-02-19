/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int v,t;
	double twc,V;
	
	printf("请输入大于41或小于-58的华氏摄氏度：");
	scanf("%d",&t);
	printf("请输入2以上的风速：");
	scanf("%d",&v);
	
	V = pow(v,0.16);
	
	twc=35.74 + 0.6215 * t - 35.75 * V + 0.42757 * t * V;
	
	printf("风寒温度为：%.4Lf\n",twc);
	
	return 0;
}