/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PrintNumber(int Number);
void PrintColor(int Number);

int main(int argc, char** argv)
{
	int Card[52];
	int k,temp;//ѭ���������м���� 
	int UserDraw;//�û��������� 
	double Ratio = 51.0 / RAND_MAX;
	int RandNumber1,RandNumber2;//ϴ�����ɵ�������� 
	int MachineDraw;//������������ 
	int ContinueNumble=1;//�ж��Ƿ���� 
	int win=0,fail=0;//��Ӯ���� 
	int GamesNumber=0;//�ܾ��� 
	
	srand(time(NULL)*1000);
	
	//��ӦԪ�ظ�ֵ 
	for(k=0;k<52;k++){
		Card[k]=k;
	}
	
		
	while(ContinueNumble){
		//ϴ�� 
		for(k=0;k<1000;k++){
			RandNumber1= (int)(Ratio * rand());
			RandNumber2= (int)(Ratio * rand());
			temp = Card[RandNumber1];
			Card[RandNumber1] = Card[RandNumber2];
			Card[RandNumber1] = temp;
		} 
		//�û����� 
		printf("������1-52֮������֣���һ���ƣ���");
		scanf("%d",&UserDraw);	
	
		//�������� 	
		MachineDraw = (int)((50.0 / RAND_MAX) * rand());
			
		if(MachineDraw>=UserDraw){
			MachineDraw++;
		}
		//��ʾ˫������ 
		printf("�������ǣ�");
		PrintColor( UserDraw / 13 );  
		PrintNumber( UserDraw % 13 ); 
		printf("\n");
		
		printf("����������ǣ�");
		PrintColor( MachineDraw / 13 );  
		PrintNumber( MachineDraw % 13 ); 
		printf("\n");
		//�Ƚ� 
		if(Card[UserDraw]>Card[MachineDraw]){
			printf("��ϲ��Ӯ�ˣ�\n");
			win++;
		}
		else {
			printf("���ź�������һ�ΰɣ�\n"); 
			fail++;
		}
		GamesNumber++;
		
		//ѯ���Ƿ���� 
		printf("�Ƿ�����棿����������0����������1��");
		scanf("%d",&ContinueNumble);
		 
		if(!ContinueNumble){
			printf("һ������%d�֣�%dʤ%d�ܣ�\n",GamesNumber,win,fail);
			exit(0);
		}
	} 
	
	
	return 0;
}
void PrintColor(int Number){
if ( Number == 0 ) printf( "÷��" ); 
	else if ( Number == 1 ) printf( "����" ); 
	else if ( Number == 2 ) printf( "����" ); 
	else printf( "����" ); 
}

void PrintNumber(int Number){
	if ( Number == 0 ) printf( "A" ); 
	else if ( Number == 10 ) printf( "J" ); 
	else if ( Number == 11 ) printf( "Q" ); 
	else if ( Number == 12 ) printf( "K" ); 
	else printf( "%d", Number + 1 ); 
}