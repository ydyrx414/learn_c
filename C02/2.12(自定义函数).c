/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

double GetSalaryDraw(double Profit){
	double SalaryBase,SalaryDraw;
	
	if(Profit <= 1000){
		SalaryDraw = 0;
	
	}
	else if( 1000 < Profit && Profit <= 2000){
		SalaryDraw = Profit * 0.1;

	}
	else if(2000 < Profit && Profit <= 5000){
		SalaryDraw = Profit * 0.15;

	}
	else if(5000 < Profit && Profit <= 10000){
		SalaryDraw = Profit * 0.2;
	
	}
	else if(10000 < Profit){
		SalaryDraw = Profit * 0.25;

	}

	return SalaryDraw;
}

int main(int argc, char** argv)
{
	double Monthlypay,SalaryBase,Profit,SalaryDraw;
	
	//存入用户输入数据 
	printf("请输入月薪的底薪：");
	scanf("%Lf",&SalaryBase);
	
	printf("请输入月销售利润：");
	scanf("%Lf",&Profit);
	
	Monthlypay = GetSalaryDraw(Profit) + SalaryBase;
	printf("月薪为%.2Lf元，底薪为%.2Lf元，提成为%.2Lf元\n",Monthlypay,SalaryBase,GetSalaryDraw(Profit));
	
	return 0;
}