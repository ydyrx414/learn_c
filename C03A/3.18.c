/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#define PI 3.14
#include <math.h>

void PAN_Count(void);

int main(int argc, char** argv)
{
	//�ж��Ƿ���� 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_Count ();
		
		ContinueWill = 0;
		printf("�������㣿������1��������0:");
		scanf("%d",&ContinueWill);

	}
	printf("***ллʹ�ñ�����***\n");
	return 0;
}

void PAN_Count(void)
{
	float X_Point,Y_Point;//���������� 
	float X_Center,Y_Center;//Բ�ĵ����� 
	float Radius;//Բ�İ뾶 
	float Distance;//�㵽Բ�ĵľ��� 
	
	//��ȡ����
	printf("������Բ�İ뾶��"); 
	scanf("%f",&Radius);
	
	printf("������Բ�ĵ�x��y���꣨�ÿո�ֿ���:");
	scanf("%f %f",&X_Center,&Y_Center);
	
	printf("��������x��y���꣨�ÿո�ֿ���:");
	scanf("%f %f",&X_Point,&Y_Point);
	
	//������� 
	Distance = sqrt(pow(X_Center-X_Point,2) + pow(Y_Center-Y_Point,2));
	
	//�жϾ���Ͱ뾶�Ĵ�С
	if(Radius > Distance) printf("����Բ�ڣ�\n");
	else printf("�㲻��Բ�ڣ�\n");
}