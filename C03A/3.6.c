/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
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
	
	printf("���������:");
	scanf("%d",&year);
	
	if ( year < 0 ){
		printf( "�������!\n" );
		exit( 0 );
	}
	
	yearEnd = year + 12;
	
	while(year <= yearEnd){
	
	if(IsLeapYear(year)){
		printf( "%d������\n", year );
	}
	else{
		printf( "%d�겻������\n", year );
	}
	year++;
	
}
	return 0;
}