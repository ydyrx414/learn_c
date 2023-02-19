/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PAN_Guess(void);

int main(int argc, char** argv)
{
	//判断是否继续 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_Guess();
		
		ContinueWill = 0;
		printf("继续猜？是输入1，否输入0:");
		scanf("%d",&ContinueWill);

	}
	printf("***谢谢使用本程序***\n");
}
void PAN_Guess(void)
{
	int RandNumber;//随机数
	int Usernumber;//用户输入数据
	int Rand1,Rand2;//随机数的第一二个数 
	int User1,User2;//用户输入数据的第一二个数 
	
	Usernumber = 0;//检测值 
	
	//获取数据 
	printf("请输入10-99之间的整数:");
	scanf("%d",&Usernumber);
	
	//检测是否合理 
	if(Usernumber < 10 || Usernumber > 99){
		printf("输入错误！程序结束！\n");
		exit(0);
	}
	
	//计算输入数据的个位十位 
	User1 = Usernumber % 10; //个位数 
	User2 = Usernumber / 10; //十位数
	
	//生成随机数
	srand(time(0) * 1000);//设置随机数种子 
	RandNumber = 10 + (int)( 89.0 / RAND_MAX * rand() );
	
	//计算随机数的个位十位 
	Rand1 = RandNumber % 10; //个位数 
	Rand2 = RandNumber / 10; //十位数
	
	//判断是否获奖
	if(Usernumber == RandNumber){
		printf("完全正确，恭喜你获得奖金10000元！");
	} 
	else if(User1 = Rand1 || User2 == Rand2
		|| User1 == Rand2 || User2 == Rand1 ){
		printf("猜中了一个数字恭喜你获得奖金1000元！\n");
	}
	else if(User1 == Rand2 && User2 == Rand1){
		printf("数字都猜中了！但顺序不对，恭喜获得奖金3000元！\n");
	}
	else{
		printf("很遗憾，您没有中奖！\n");
	}

}