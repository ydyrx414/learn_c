/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char** argv)
{
	int Number,Number1,Number2,Answer;
	double Ratio = 9.0 / RAND_MAX;
	
	srand( time(NULL) );
	Number1 = (int)( Ratio * rand() );
	Number2 = (int)( Ratio * rand() );
	
	printf("%d + %d = ",Number1,Number2);
	scanf("%d",&Answer);
	
	if(Answer == Number1 + Number2){
			printf("��ϲ�����ˣ�\n");
	}
	else{
		printf("��ȷ���ǣ�%d\n",Number1 + Number2);
	}
	

		 
	return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	int Number1, Number2; //����������
	int CorrectAnwer; //������������ĺ� 
	int AnswerOfStudent; //���ѧ���ش�Ĵ� 
	double Ratio;	//���ű��� 
	
	//�����������һλ����(0-9)������� 
	Ratio = 9.0 / RAND_MAX; //���ű��� 
	srand( time(0) );
	Number1 = (int)( rand() * Ratio );
	Number2 = (int)( rand() * Ratio );
	CorrectAnwer = Number1 + Number2;
	
	//��ʾ�������ѧ��������ʾѧ�������
	printf( "%d + %d = ", Number1, Number2 );
	scanf( "%d", &AnswerOfStudent );
	
	//�������ˣ���ʾ"��ϲ������^:^"�����������ȷ��
	if ( AnswerOfStudent == CorrectAnwer )
	{
		printf( "��ϲ������^:^\n" );
		
	}
	else
	{
		printf( "��ȷ���ǣ�%d\n", CorrectAnwer );
	} 
}
 */ 