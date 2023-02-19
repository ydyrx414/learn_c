/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PrintNumber(int Number);
void PrintColor(int Number);

int main(int argc, char** argv)
{
	int RandNumber;
	
	srand(time(NULL) * 1000 );
	RandNumber = (int)( 51.0 / RAND_MAX * rand() );
	
	PrintColor( RandNumber / 13 );  
	PrintNumber( RandNumber % 13 ); 
	printf( "\n");
	return 0;
}

void PrintColor(int Number){
if ( Number == 0 ) printf( "梅花" ); 
	else if ( Number == 1 ) printf( "方块" ); 
	else if ( Number == 2 ) printf( "红桃" ); 
	else printf( "黑桃" ); 
}

void PrintNumber(int Number){
	if ( Number == 0 ) printf( "A" ); 
	else if ( Number == 10 ) printf( "J" ); 
	else if ( Number == 11 ) printf( "Q" ); 
	else if ( Number == 12 ) printf( "K" ); 
	else printf( "%d", Number + 1 ); 
}