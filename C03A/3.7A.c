/************************
名称：.c
姓名：201914460150 余波
日期： 
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
		 
		//提示是否继续 
		Number = 0;
		printf("是否继续做题？是输入1，否输入0：");
		scanf("%d",&Number);
		
	}
		return 0;
}

void PAN_Number(void){
	//两个随机数及随机数的和，用户的回答 ,是否继续条件 
	int RandNumber1,RandNumber2,UserAnswer,Sum,Number;
	double Ratio;
	 
	//设置随机数种子	
 	Ratio = 9.0 / RAND_MAX;//缩放比例 
	srand( time(0) * 1000);
	

	//生成两个随机数，计算和 
	RandNumber1 = (int)( rand() * Ratio );
	RandNumber2 = (int)( Ratio * rand());
	Sum = RandNumber1 + RandNumber2;
		
	//用户输入答案 
	printf("%d + %d = ",RandNumber1,RandNumber2);
	scanf("%d",&UserAnswer);
		
		
	//判断是否正确
	if(UserAnswer == Sum)
	printf("恭喜你答对了！\n");
	
	else printf("正确答案是：%d\n",Sum);
}