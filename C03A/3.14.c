/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void PAN_Count(void);

int main(int argc , char**argv){
	//�ж��Ƿ���� 
	int ContinueWill = 1;
 	
 	while(ContinueWill){
	 	PAN_Count();
	 	
 		printf("�������㣿������1��������0");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
	 }
}

void PAN_Count(void)
{
	//����������뾶���ߣ����������� 
	float Radius,Height,Area,Volume;
	
	//��ǰ��ֵ������û������Ƿ���� 
	Radius = 0;
	Height = 0;	
	
	//��ȡ�û�������
	printf("������Բ���İ뾶����λ�ף���");
	scanf("%f",&Radius);
	
	printf("������Բ���ĸ߶ȣ���λ�ף���");
	scanf("%f",&Height);
	
	if(Radius <= 0 || Height <= 0){
		printf("�뾶�͸߶ȱ������0��\n");
		exit(0);
	} 
	else{
		Area = PI * Radius * Radius;
		Volume = Area * Height;
		
		printf("�������%.4fƽ����\n",Area);
		printf("�����%.4f������\n",Volume);
	}
}