/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill=1;//�ж��Ƿ����
	
	while(ContinueWill){
		PAN_Number();
			
		//ѯ���Ƿ����
		ContinueWill = 0;
		printf("�Ƿ�������⣿������1��������0��");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break; 
	}
	 
	return 0;
}

void PAN_Number(void){
	int RandNumber1,RandNumber2;//���������
	int Difference;//������Ĳ� 
	int UserAnswer;//�û��ش� 
	int ContinueWill;//�ж��Ƿ����
	double Ratio;//��������� 
	int temp;
	
	//������������� 
	srand( time(0) * 1000);
	Ratio = 9.0 / RAND_MAX;

	//���������
	RandNumber1 = (int)(Ratio * rand()); 
	RandNumber2 = (int)(Ratio * rand());
	
	//ȷ��������С��
	if(RandNumber1 < RandNumber2){
		temp = RandNumber1;
		RandNumber1 = RandNumber2;
		RandNumber2 = temp;
	} 
	
	 
	//��ʾ���⣬�û��ش� 
	printf("%d - %d = ",RandNumber1,RandNumber2);
	scanf("%d",&UserAnswer);
	
	Difference = RandNumber1 - RandNumber2;
	
	//�ж��Ƿ���ȷ 
	if(UserAnswer == Difference) printf("��ϲ�����ˣ�\n");
	
	else printf("��ȷ���ǣ�%d\n",Difference);
}