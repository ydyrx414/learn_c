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
	int ContinueWill=1;//判断是否继续
	
	while(ContinueWill){
		PAN_Number();
			
		//询问是否继续
		ContinueWill = 0;
		printf("是否继续做题？是输入1，否输入0：");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break; 
	}
	 
	return 0;
}

void PAN_Number(void){
	int RandNumber1,RandNumber2;//两个随机数
	int Difference;//随机数的差 
	int UserAnswer;//用户回答 
	int ContinueWill;//判断是否继续
	double Ratio;//随机数比例 
	int temp;
	
	//设置随机数种子 
	srand( time(0) * 1000);
	Ratio = 9.0 / RAND_MAX;

	//生成随机数
	RandNumber1 = (int)(Ratio * rand()); 
	RandNumber2 = (int)(Ratio * rand());
	
	//确保大数减小数
	if(RandNumber1 < RandNumber2){
		temp = RandNumber1;
		RandNumber1 = RandNumber2;
		RandNumber2 = temp;
	} 
	
	 
	//显示问题，用户回答 
	printf("%d - %d = ",RandNumber1,RandNumber2);
	scanf("%d",&UserAnswer);
	
	Difference = RandNumber1 - RandNumber2;
	
	//判断是否正确 
	if(UserAnswer == Difference) printf("恭喜你答对了！\n");
	
	else printf("正确答案是：%d\n",Difference);
}