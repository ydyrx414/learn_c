/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int Minutes,Hours,Days;
	
	printf("�������������������:");
	scanf("%d",&Minutes);
	
	Hours = Minutes / 60;
	Days = Hours / 24; 

	printf("%d�� %dСʱ  %d����\n",Days,Hours-Days*24,Minutes-Days*24*60-(Hours-Days*24)*60); 
	
	return 0;
}