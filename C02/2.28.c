/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Pan_Guess(int Number);

int main(int argc, char** argv)
{
	int RandNumber;//�ֱ��ʾʯͷ������ 
	int UserNumber;//�û�������� 
	
	//����û����������Ƿ���� 
	UserNumber = 0;
	
	printf("������1.2.3��3-ʯͷ��2-������1-����:");
	scanf("%d",&UserNumber);
	
	if(UserNumber < 1 || UserNumber > 3){
		printf("������󣡳��������");
		exit(0);
	}
	//������������� 
	srand(time(0));
 	RandNumber = 1 + (int)( 2.0 / RAND_MAX * rand() ) ;
	
	//�����ȭ��� 
	printf("������");
	Pan_Guess(RandNumber);
	printf("����");
	Pan_Guess(UserNumber); 
	printf("\n"); 
	
	//�ж��Ƿ�ʤ�� 
	if( UserNumber	 == RandNumber ) {
		printf( "^:^ƽ��^:^\n" );	
	}
	else if( UserNumber	 > RandNumber ){
		printf( "^:^Ӯ��^:^\n" );	
	}
	else if( UserNumber	 == 1 && RandNumber == 3 ){
		printf( "^:^Ӯ��^:^\n" );	
	}
	else printf( "^:^����!^:^\n" );
	
	return 0;
}

void Pan_Guess(int Number){
	if(Number == 3)
	printf("ʯͷ");
	else if (Number == 2)
	printf("����");
	else printf("��");
}