/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
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
	
	//�����û��������� 
	printf("��������н�ĵ�н��");
	scanf("%Lf",&SalaryBase);
	
	printf("����������������");
	scanf("%Lf",&Profit);
	
	Monthlypay = GetSalaryDraw(Profit) + SalaryBase;
	printf("��нΪ%.2LfԪ����нΪ%.2LfԪ�����Ϊ%.2LfԪ\n",Monthlypay,SalaryBase,GetSalaryDraw(Profit));
	
	return 0;
}