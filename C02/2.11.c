/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	double a,b,c,d,r,r1,r2;
	
	printf("������һԪ���η��̵�ϵ����a��b��c����֮���ÿո�ֿ���");
	scanf("%Lf %Lf %Lf",&a,&b,&c);
	
	d = pow(b,2) - 4 * a * c;
	
	if(d > 0){
		r1 = ((-b + sqrt(d)) / (2 * a)); 
		r2 = ((-b - sqrt(d)) / (2 * a));
		
		printf("�б�ʽ = %Lf\n",d);
		printf("��������������%Lf,%Lf\n",r1,r2);
	}
	else if(d == 0){
		r = (-b / (2 * a)); 
		
		printf("�б�ʽ = %Lf\n",d);
		printf("������һ������%Lf\n", r );
	}
	else if(d < 0){
		printf("�б�ʽ = %Lf\n",d);
		printf("����û�и�\n"); 
	}
			
	return 0;
}
/*
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
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
	
	return 0;
}
*/