/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill = 1;//�ж��Ƿ����
	
	while(ContinueWill){
		//���к�����ѭ�� 
		PAN_Number();
		
		printf("�Ƿ������������1��������0��");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
	}
	 
	return 0;
}
void PAN_Number(void)
{
	int Day,Answer;
	Day = 0;
	
	printf("�����������������������\n");
	printf( "1   3    5    7\n" );
	printf( "9   11   13   15\n" );
	printf( "17  19   21   23\n" );
	printf( "25  27   29   31\n" );
	printf("�����������1����������0:");
	scanf("%d",&Answer);
	
	if(Answer == 1) Day = Day + 1;
	
	printf("�����������������������\n");
	printf( "2   3   6   7\n" );
	printf( "10  11  14  15\n" );
	printf( "18  19  22  23\n" );
	printf( "26  27  30  31\n" );
	printf("�����������1����������0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 2;
	

	printf("�����������������������\n");
	printf( "4   5   6   7\n" );
	printf( "12  13  14  15\n" );
	printf( "20  21  22  23\n" );
	printf( "28  29  30  31\n" );
	printf("�����������1����������0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 4;
	
	
	printf("�����������������������\n");
	printf( "8   9   10  11\n" );
	printf( "12  13  14  15\n" );
	printf( "24  25  26  27\n" );
	printf( "28  29  30  31\n" );
	printf("�����������1����������0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 8;


	printf("�����������������������\n");
	printf( "16  17  18  19\n" );
	printf( "20  21  22  23\n" );
	printf( "24  25  26  27\n" );
	printf( "28  29  30  31\n" );
	printf("�����������1����������0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 16;

	printf( "\n^:^ ���������� %d �� ^:^\n",Day);
}
