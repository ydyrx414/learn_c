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
	int Number=1;
	
	
	while(Number){
		PAN_Number();
		 
		//��ʾ�Ƿ���� 
		Number = 0;
		printf("�Ƿ�������⣿������1��������0��");
		scanf("%d",&Number);
		
	}
		return 0;
}

void PAN_Number(void){
	//�����������������ĺͣ��û��Ļش� ,�Ƿ�������� 
	int RandNumber1,RandNumber2,UserAnswer,Sum,Number;
	double Ratio;
	 
	//�������������	
 	Ratio = 9.0 / RAND_MAX;//���ű��� 
	srand( time(0) * 1000);
	

	//�������������������� 
	RandNumber1 = (int)( rand() * Ratio );
	RandNumber2 = (int)( Ratio * rand());
	Sum = RandNumber1 + RandNumber2;
		
	//�û������ 
	printf("%d + %d = ",RandNumber1,RandNumber2);
	scanf("%d",&UserAnswer);
		
		
	//�ж��Ƿ���ȷ
	if(UserAnswer == Sum)
	printf("��ϲ�����ˣ�\n");
	
	else printf("��ȷ���ǣ�%d\n",Sum);
}