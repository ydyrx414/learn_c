/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
int IsLeapYear(int year){
	return ( (year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) );
}

void PAN_Year(){
	
}

int main(int argc, char** argv)
{
	int year;
	int yearEnd;
	
	printf("请输入年份:");
	scanf("%d",&year);
	
	if ( year < 0 ){
		printf( "输入错误!\n" );
		exit( 0 );
	}
	
	yearEnd = year + 12;
	
	while(year <= yearEnd){
	
	if(IsLeapYear(year)){
		printf( "%d是闰年\n", year );
	}
	else{
		printf( "%d年不是闰年\n", year );
	}
	year++;
	
}
	return 0;
}