/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int IsLeapYear(int year){
	return ( (year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) );
}

int main(int argc, char** argv)
{
	int year;
	
	printf("���������:");
	scanf("%d",&year);
	
	if(IsLeapYear(year)){
		printf( "%d������\n", year );
	}
	else{
		printf( "%d�겻������\n", year );
	}
		
	return 0;
}