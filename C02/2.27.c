/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int RandNumber; 
	int UserNumber; 
	
	UserNumber = -1;
	printf( "��������,��������1,�������� 0:" ); 
	scanf( "%d", &UserNumber );
	if( UserNumber != 1 && UserNumber != 0 ) {
		printf( "�������!���������\n" ); 
		exit(0);
	}
	
	srand( time(0) );  
	RandNumber = rand();
	
	if( UserNumber == (RandNumber > RAND_MAX/2) ) {
		printf( "^:^��ϲ��¶���!^:^\n" );	
	}
	else printf( "^:^���ź�!��´��ˣ�^:^\n" );	

	return 0;
}