/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float TemperatureInitial,TemperatureFinal,Energy,M;
	
	printf("请输入水量（单位：千克）：");
	scanf("%f",&M);
	
	printf("请输入初始温度（单位：摄氏度）：");
	scanf("%f",&TemperatureInitial);
	
	printf("请输入目标温度（单位：摄氏度）：");
	scanf("%f",&TemperatureFinal);
	
	Energy = M * (TemperatureFinal - TemperatureInitial ) * 4184;
	
	printf("需要的能量：%.4f焦耳\n",Energy);
	
	return 0;
}