/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int main(int argc, char** argv)
{
	//�����������������ĺͣ��û��Ļش� ,�Ƿ�������� 
	int RandNumber1,RandNumber2,UserAnswer,Sum,Number;
	double Ratio;
	 
	//�������������	
 	Ratio = 9.0 / RAND_MAX;//���ű��� 
	srand( time(0) * 1000);
	
	while(1){
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
		
		else printf("��ȷ���ǣ�%d\n",RandNumber1 + RandNumber2);
		 
		//��ʾ�Ƿ���� 
		Number = 0;
		printf("�Ƿ�������⣿������1��������0��");
		scanf("%d",&Number);
		
		if( !Number ) break;
		
	} 	
	return 0;
}