/************************
名称：.c
姓名：201914460150 余波
日期： 
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
			printf("恭喜你答对了！\n");
	}
	else{
		printf("正确答案是：%d\n",Number1 + Number2);
	}
	

		 
	return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	int Number1, Number2; //存放随机整数
	int CorrectAnwer; //存放两个整数的和 
	int AnswerOfStudent; //存放学生回答的答案 
	double Ratio;	//缩放比例 
	
	//生成两个随机一位整数(0-9)，计算和 
	Ratio = 9.0 / RAND_MAX; //缩放比例 
	srand( time(0) );
	Number1 = (int)( rand() * Ratio );
	Number2 = (int)( rand() * Ratio );
	CorrectAnwer = Number1 + Number2;
	
	//显示计算题给学生，并提示学生输入答案
	printf( "%d + %d = ", Number1, Number2 );
	scanf( "%d", &AnswerOfStudent );
	
	//如果答对了，提示"恭喜你答对了^:^"，否则输出正确答案
	if ( AnswerOfStudent == CorrectAnwer )
	{
		printf( "恭喜你答对了^:^\n" );
		
	}
	else
	{
		printf( "正确答案是：%d\n", CorrectAnwer );
	} 
}
 */ 