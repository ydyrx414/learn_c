/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char** argv)
{
	double x,y;
	int NumberOfHits;
	int k;
	
	srand( time( 0 ) );//������������� 
	
	NumberOfHits = 0; //��ʼֵΪ0 
	
	for(k = 0; k < 10000000; k++ ){
		//����[-1,1]��ʵ��ֵ����� 
		x = 2.0 * rand() / RAND_MAX - 1.0;
		y = 2.0 * rand() / RAND_MAX - 1.0;
		
		if ( ( x * x + y * y ) <= 1.0 )	NumberOfHits++;
	}
	
	printf( "PI�Ľ���ֵ��%.20Lf\n", NumberOfHits * 4.0 / 10000000 ); 
	
	return 0;
}