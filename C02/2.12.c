/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill = 1;//�ж��Ƿ���� 
	
	while(ContinueWill){
		PAN_Number();
		
		printf("�Ƿ�������������·ݵ�нˮ��������1��������0��");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
			
	}	
		
	return 0;
}
void PAN_Number(void)
{
	double  Monthlypay,SalaryBase,Profit,SalaryDraw;
	//MonthlypayΪ��н��SalaryBaseΪ��н��ProfitΪ��������SalaryDrawΪ��� 
	
	//�����û��������� 
	printf("��������н�ĵ�н��");
	scanf("%Lf",&SalaryBase);
	
	printf("����������������");
	scanf("%Lf",&Profit);
	
	//�ж����� 
	if(Profit <= 1000){
		SalaryDraw = 0;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("��нΪ%.2LfԪ����нΪ%.2LfԪ�����Ϊ%.2LfԪ\n",Monthlypay,SalaryBase,SalaryDraw);
		
	}
	else if( 1000 < Profit && Profit <= 2000){
		SalaryDraw = Profit * 0.1;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("��нΪ%.2LfԪ����нΪ%.2LfԪ�����Ϊ%.2LfԪ\n",Monthlypay,SalaryBase,SalaryDraw);
	}
	else if(2000 < Profit && Profit <= 5000){
		SalaryDraw = Profit * 0.15;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("��нΪ%.2LfԪ����нΪ%.2LfԪ�����Ϊ%.2LfԪ\n",Monthlypay,SalaryBase,SalaryDraw);
	}
	else if(5000 < Profit && Profit <= 10000){
		SalaryDraw = Profit * 0.2;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("��нΪ%.2LfԪ����нΪ%.2LfԪ�����Ϊ%.2LfԪ\n",Monthlypay,SalaryBase,SalaryDraw);
	}
	else if(10000 < Profit){
		SalaryDraw = Profit * 0.25;
		Monthlypay = SalaryBase + SalaryDraw;
		printf("��нΪ%.2LfԪ����нΪ%.2LfԪ�����Ϊ%.2Lf\n",Monthlypay,SalaryBase,SalaryDraw);
	}
}