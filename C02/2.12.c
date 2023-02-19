/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill = 1;//判断是否继续 
	
	while(ContinueWill){
		PAN_Number();
		
		printf("是否继续计算其他月份的薪水？是输入1，否输入0：");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
			
	}	
		
	return 0;
}
void PAN_Number(void)
{
	double  Monthlypay,SalaryBase,Profit,SalaryDraw;
	//Monthlypay为月薪，SalaryBase为底薪，Profit为销售利润，SalaryDraw为提成 
	
	//存入用户输入数据 
	printf("请输入月薪的底薪：");
	scanf("%Lf",&SalaryBase);
	
	printf("请输入月销售利润：");
	scanf("%Lf",&Profit);
	
	//判断条件 
	if(Profit <= 1000){
		SalaryDraw = 0;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("月薪为%.2Lf元，底薪为%.2Lf元，提成为%.2Lf元\n",Monthlypay,SalaryBase,SalaryDraw);
		
	}
	else if( 1000 < Profit && Profit <= 2000){
		SalaryDraw = Profit * 0.1;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("月薪为%.2Lf元，底薪为%.2Lf元，提成为%.2Lf元\n",Monthlypay,SalaryBase,SalaryDraw);
	}
	else if(2000 < Profit && Profit <= 5000){
		SalaryDraw = Profit * 0.15;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("月薪为%.2Lf元，底薪为%.2Lf元，提成为%.2Lf元\n",Monthlypay,SalaryBase,SalaryDraw);
	}
	else if(5000 < Profit && Profit <= 10000){
		SalaryDraw = Profit * 0.2;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("月薪为%.2Lf元，底薪为%.2Lf元，提成为%.2Lf元\n",Monthlypay,SalaryBase,SalaryDraw);
	}
	else if(10000 < Profit){
		SalaryDraw = Profit * 0.25;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("月薪为%.2Lf元，底薪为%.2Lf元，提成为%.2Lf\n",Monthlypay,SalaryBase,SalaryDraw);
	}
}