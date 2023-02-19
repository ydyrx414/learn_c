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
	int RandNumber,UserNumber;//生成的随机数与用户输入数
	int i = 0;//统计猜几次
		
	//设置随机数种子,获取随机数 
	srand(time(0) * 1000); 
	RandNumber = (int)(99.0 / RAND_MAX * rand() );
	
	//进行循环 
	while(1){
		printf("请猜数（0-99）：");//提示用户输入 
		scanf("%d",&UserNumber);
		
		//检测输入是否正确 
		if(UserNumber < 0 || UserNumber > 99){
			printf("输入错误！程序结束！\n");
			break;
		}
		
		i++;//对输出次数进行计数 
			
		//判断输入情况进行反馈 
		if(UserNumber < RandNumber){
			printf("小了！\n");
		} 
		else if(UserNumber > RandNumber){
			printf("大了！\n");
		} 
		else if(UserNumber == RandNumber){
			printf("~ ：~正确了！\n");	
			break;	
		}
	}

	//总结输入几次 
	printf("猜了%d次！\n",i);
			
	return 0;
}