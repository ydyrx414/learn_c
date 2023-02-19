/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float Years,MoneyInitial,AnnualInterestRate,MoneyTotal;
	
	printf("请输入年利率：") ;
	scanf("%f",&AnnualInterestRate);
	printf("请输入存款金额：") ;
	scanf("%f",&MoneyInitial);
	printf("请输入存款年数：") ;
	scanf("%f",&Years);
	
	MoneyTotal = MoneyInitial * pow(1 + (AnnualInterestRate / 100 / 12),Years * 12);
	
	printf("到期总金额：%.2f元\n",MoneyTotal);
		
	return 0;
}