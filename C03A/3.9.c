/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill = 1;//�ж��Ƿ����
	
	while(ContinueWill){
		PAN_Number();
		
		//ѯ���Ƿ����
		printf("�Ƿ�������⣿������1��������0:");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break; 
	} 
	
	return 0;
}



void PAN_Number(void)
{
	double a, b, c; //һԪ���η��̵�ϵ�� 
	double d, r1, r2; //�б�ʽ���� 
	
	//���뷽�̵�ϵ��
	printf( "������һԪ���η��̵�ϵ��a��b��c����֮���ÿո�ֿ���" );
	scanf( "%Lf%Lf%Lf", &a, &b, &c );
	
	//���㲢����б�ʽ
	d = b * b - 4 * a * c;
	printf( "�б�ʽ = %Lf\n", d ); 
	
	//�����б�ʽ���㲢�����
	if ( d > 0 ) 
	{
		d = sqrt( d ); //�б�ʽ��ƽ���� 
		r1 = (-b + d) / ( 2 * a );
		r2 = (-b - d) / ( 2 * a );
		printf( "���̵��������ǣ�%Lf, %Lf\n", r1, r2 );
	}
	else if( d == 0 )
	{
		r1 = -b / ( 2 * a );
		printf( "����ֻ��һ������%Lf\n", r1 );
	}
	else
	{
		printf( "����û�и�\n" );
	}
	
}
