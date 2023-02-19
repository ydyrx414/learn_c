/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill = 1;//判断是否继续
	
	while(ContinueWill){
		//进行函数的循环 
		PAN_Number();
		
		printf("是否继续？是输入1，否输入0：");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
	}
	 
	return 0;
}
void PAN_Number(void)
{
	int Day,Answer;
	Day = 0;
	
	printf("您的生日在下面的数据中吗？\n");
	printf( "1   3    5    7\n" );
	printf( "9   11   13   15\n" );
	printf( "17  19   21   23\n" );
	printf( "25  27   29   31\n" );
	printf("如果在请输入1，否则输入0:");
	scanf("%d",&Answer);
	
	if(Answer == 1) Day = Day + 1;
	
	printf("您的生日在下面的数据中吗？\n");
	printf( "2   3   6   7\n" );
	printf( "10  11  14  15\n" );
	printf( "18  19  22  23\n" );
	printf( "26  27  30  31\n" );
	printf("如果在请输入1，否则输入0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 2;
	

	printf("您的生日在下面的数据中吗？\n");
	printf( "4   5   6   7\n" );
	printf( "12  13  14  15\n" );
	printf( "20  21  22  23\n" );
	printf( "28  29  30  31\n" );
	printf("如果在请输入1，否则输入0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 4;
	
	
	printf("您的生日在下面的数据中吗？\n");
	printf( "8   9   10  11\n" );
	printf( "12  13  14  15\n" );
	printf( "24  25  26  27\n" );
	printf( "28  29  30  31\n" );
	printf("如果在请输入1，否则输入0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 8;


	printf("您的生日在下面的数据中吗？\n");
	printf( "16  17  18  19\n" );
	printf( "20  21  22  23\n" );
	printf( "24  25  26  27\n" );
	printf( "28  29  30  31\n" );
	printf("如果在请输入1，否则输入0:");
	scanf( "%d", &Answer );

	if ( Answer == 1 ) Day = Day + 16;

	printf( "\n^:^ 您的生日在 %d 号 ^:^\n",Day);
}
