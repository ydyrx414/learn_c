/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Pan_Guess(int Number);
void PAN_While(void);

int main(int argc, char** argv)
{
	//判断是否继续 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_While();
		
		ContinueWill = 0;
		printf("继续？是输入1，否输入0:");
		scanf("%d",&ContinueWill);

	}
	printf("***谢谢使用本程序***\n");	
	return 0;
}
void PAN_While(void)
{
	int RandNumber;//分别表示石头剪刀布 
	int UserNumber;//用户输入的数 
	
	//检测用户输入数据是否合理 
	UserNumber = 0;
	
	printf("请输入1.2.3（3-石头，2-剪刀，1-布）:");
	scanf("%d",&UserNumber);
	
	if(UserNumber < 1 || UserNumber > 3){
		printf("输入错误！程序结束！");
		exit(0);
	}
	//设置随机数种子 
	srand(time(0) * 1000);
 	RandNumber = 1 + (int)( 2.0 / RAND_MAX * rand() ) ;
	
	//输出出拳情况 
	printf("机器：");
	Pan_Guess(RandNumber);
	printf(" <> ");
	printf("您：");
	Pan_Guess(UserNumber); 
	printf("\n"); 
	
	//判断是否胜利 
	if( UserNumber	 == RandNumber ) {
		printf( "^:^平局^:^\n" );	
	}
	else if( UserNumber	 > RandNumber ){
		printf( "^:^赢了^:^\n" );	
	}
	else if( UserNumber	 == 1 && RandNumber == 3 ){
		printf( "^:^赢了^:^\n" );	
	}
	else printf( "^:^输了!^:^\n" );
}

void Pan_Guess(int Number){
	if(Number == 3)
	printf("石头");
	else if (Number == 2)
	printf("剪刀");
	else printf("布");
}