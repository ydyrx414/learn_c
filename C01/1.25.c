/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int Minutes,Hours,Days;
	
	printf("请输入分钟数（整数）:");
	scanf("%d",&Minutes);
	
	Hours = Minutes / 60;
	Days = Hours / 24; 

	printf("%d天 %d小时  %d分钟\n",Days,Hours-Days*24,Minutes-Days*24*60-(Hours-Days*24)*60); 
	
	return 0;
}