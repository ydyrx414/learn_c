/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int IsLeapYear(int year){
	return ( (year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) );
}

int main(int argc, char** argv)
{
	int year;
	
	printf("请输入年份:");
	scanf("%d",&year);
	
	if(IsLeapYear(year)){
		printf( "%d是闰年\n", year );
	}
	else{
		printf( "%d年不是闰年\n", year );
	}
		
	return 0;
}