/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PrintNumber(int Number);
void PrintColor(int Number);

int main(int argc, char** argv)
{
	int Card[52];
	int k,temp;//循环变量，中间变量 
	int UserDraw;//用户输入数字 
	double Ratio = 51.0 / RAND_MAX;
	int RandNumber1,RandNumber2;//洗牌生成的随机数字 
	int MachineDraw;//机器所猜数组 
	int ContinueNumble=1;//判断是否继续 
	int win=0,fail=0;//输赢局数 
	int GamesNumber=0;//总局数 
	
	srand(time(NULL)*1000);
	
	//对应元素赋值 
	for(k=0;k<52;k++){
		Card[k]=k;
	}
	
		
	while(ContinueNumble){
		//洗牌 
		for(k=0;k<1000;k++){
			RandNumber1= (int)(Ratio * rand());
			RandNumber2= (int)(Ratio * rand());
			temp = Card[RandNumber1];
			Card[RandNumber1] = Card[RandNumber2];
			Card[RandNumber1] = temp;
		} 
		//用户输入 
		printf("请输入1-52之间的数字（抽一张牌）：");
		scanf("%d",&UserDraw);	
	
		//机器抽牌 	
		MachineDraw = (int)((50.0 / RAND_MAX) * rand());
			
		if(MachineDraw>=UserDraw){
			MachineDraw++;
		}
		//显示双方的牌 
		printf("你抽的牌是：");
		PrintColor( UserDraw / 13 );  
		PrintNumber( UserDraw % 13 ); 
		printf("\n");
		
		printf("机器抽的牌是：");
		PrintColor( MachineDraw / 13 );  
		PrintNumber( MachineDraw % 13 ); 
		printf("\n");
		//比较 
		if(Card[UserDraw]>Card[MachineDraw]){
			printf("恭喜你赢了！\n");
			win++;
		}
		else {
			printf("很遗憾！再玩一次吧！\n"); 
			fail++;
		}
		GamesNumber++;
		
		//询问是否继续 
		printf("是否继续玩？不玩了输入0，否则输入1：");
		scanf("%d",&ContinueNumble);
		 
		if(!ContinueNumble){
			printf("一共玩了%d局，%d胜%d败！\n",GamesNumber,win,fail);
			exit(0);
		}
	} 
	
	
	return 0;
}
void PrintColor(int Number){
if ( Number == 0 ) printf( "梅花" ); 
	else if ( Number == 1 ) printf( "方块" ); 
	else if ( Number == 2 ) printf( "红桃" ); 
	else printf( "黑桃" ); 
}

void PrintNumber(int Number){
	if ( Number == 0 ) printf( "A" ); 
	else if ( Number == 10 ) printf( "J" ); 
	else if ( Number == 11 ) printf( "Q" ); 
	else if ( Number == 12 ) printf( "K" ); 
	else printf( "%d", Number + 1 ); 
}