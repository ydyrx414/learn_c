/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/

#include <stdio.h>
#include <stdlib.h>

void PAN_Count(void);

int main(int argc, char** argv)
{
	//判断是否继续 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_Count();
		
		//判断是否继续 
		ContinueWill = 0;
		printf("继续计算？是输入1，否输入0:");
		scanf("%d",&ContinueWill);
	}

	printf("****谢谢使用本程序****\n");

	return 0;
}

void PAN_Count(void)
{
double Salary = -1; //工薪收入 
	double Insurance;  //三险一金
	double InsuranceRatio = 0.19;  //三险一金比例 19% 
	double Threshold = 3500; //起征点
	double NeedTax; //应纳税额
	double TaxRatio; //税率
	double Deduct; //速算扣除数
	double Tax; // 个税
	
	Salary = -1;//提前赋值检测 
	
	printf("请输入您的月薪(元)：");
	scanf("%Lf",&Salary);
	
	if(Salary < 0){
		 printf("输入错误！\n"); 
		 exit(0);
	}
	
	Insurance = Salary * InsuranceRatio; 
	NeedTax = Salary - Insurance - Threshold; 
	
	
	if ( NeedTax <= 1500 ) {
		TaxRatio = 0.03;
		Deduct = 0.0;
	} 
	else if ( NeedTax <= 4500 ) {
		TaxRatio = 0.10;
		Deduct = 105.0;
	} 
	else if ( NeedTax <= 9000 ) {
		TaxRatio = 0.20;
		Deduct = 555.0;
	} 
	else if ( NeedTax <= 35000 ) {
		TaxRatio = 0.25;
		Deduct = 1005.0;
	} 
	else if ( NeedTax <= 55000 ) {
		TaxRatio = 0.30;
		Deduct = 2755.0;
	} 
	else if ( NeedTax <= 80000 ) {
		TaxRatio = 0.35;
		Deduct = 5505.0;
	} 
	else {
		TaxRatio = 0.45;
		Deduct = 13505.0;
	} 
	
	Tax = NeedTax * TaxRatio - Deduct;
	
	printf( "三险一金 %.2Lf,应纳税额 %.2Lf,个人所得的税 %.2Lf\n", Insurance, NeedTax, Tax ); 
	
}