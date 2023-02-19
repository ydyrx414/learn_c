/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float a,v,length;
	
	printf("请输入飞机起飞速度：");
	scanf("%f",&v);
	printf("请输入飞机起飞加速度：");
	scanf("%f",&a);
	
	length = pow(v,2) / (2 * a);
	
	printf("需要的飞机跑道长度：%.4f米\n",length);	
	
	return 0;
}