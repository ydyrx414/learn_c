/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
double Salary = -1; //��н���� 
	double Insurance;  //����һ��
	double InsuranceRatio = 0.19;  //����һ����� 19% 
	double Threshold = 3500; //������
	double NeedTax; //Ӧ��˰��
	double TaxRatio; //˰��
	double Deduct; //����۳���
	double Tax; // ��˰
	
	Salary = -1;//��ǰ��ֵ��� 
	
	printf("������������н(Ԫ)��");
	scanf("%Lf",&Salary);
	
	if(Salary < 0){
		 printf("�������\n"); 
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
	
	printf( "����һ�� %.2Lf,Ӧ��˰�� %.2Lf,�������õ�˰ %.2Lf\n", Insurance, NeedTax, Tax ); 
	
	return 0;
}