/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	int Times[99]={0};
	double Ratio = 98.0 / RAND_MAX;
	int k;//ѭ������ 
	int number;//���ɵ������ 
	
	srand( time(NULL)*1000);
	
	for(k=0;k<200;k++){
		number = 1 + (int)(Ratio * rand());
		Times[number-1]++;
	}
	
	printf("1-99֮���ÿ�������ֵĴ�����\n");
	for(k=1;k<=99;k++){
		printf("[%2d]: %d\t",k,Times[k-1]);
		if(k % 5==0){
			printf("\n");
		}
	}
	
	
	
	
	return 0;
}