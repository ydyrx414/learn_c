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
	int Times[99]={0};
	double Ratio = 98.0 / RAND_MAX;
	int k;//循环变量 
	int number;//生成的随机数 
	
	srand( time(NULL)*1000);
	
	for(k=0;k<200;k++){
		number = 1 + (int)(Ratio * rand());
		Times[number-1]++;
	}
	
	printf("1-99之间的每个数出现的次数：\n");
	for(k=1;k<=99;k++){
		printf("[%2d]: %d\t",k,Times[k-1]);
		if(k % 5==0){
			printf("\n");
		}
	}
	
	
	
	
	return 0;
}