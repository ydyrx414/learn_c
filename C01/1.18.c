/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float miles,velocity;
	int minures;
	
	minures = 50;
	miles = 10;
	velocity = miles / (minures/60.0);
	
	printf("跑步时速：%.2f公里/小时\n",velocity);
	
	printf("用时:%d分钟, 里程:%.3f公里，跑步速度:%.2f公里/小时\n", minures, miles, velocity);
	
	printf("输入跑步时间:(分钟)【整数】");
	scanf("&d",&minures);
	fflush(stdin); 
	printf("输入跑步里程:(公里)【实数】");
	scanf("%f",&miles);
	
	velocity = miles / (minures/60.0);
	printf("跑步速度:%.2f\n",velocity);
	return 0;
}