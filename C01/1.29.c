/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float Years,MoneyInitial,AnnualInterestRate,MoneyTotal;
	
	printf("�����������ʣ�") ;
	scanf("%f",&AnnualInterestRate);
	printf("���������") ;
	scanf("%f",&MoneyInitial);
	printf("��������������") ;
	scanf("%f",&Years);
	
	MoneyTotal = MoneyInitial * pow(1 + (AnnualInterestRate / 100 / 12),Years * 12);
	
	printf("�����ܽ�%.2fԪ\n",MoneyTotal);
		
	return 0;
}