/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, j; //���б��
	int n; //���� 
	int SpaceNumber; //��i��ǰ�Ŀո����
	int StarNumber; //��i��ǰ��*���� 
	
	printf( "������������" );
	scanf( "%d", &n );
	
	for ( i = 1; i <= n; i++ ){ //�� 
		//�����i�еĿո�
		SpaceNumber = n - i;
		for( j = 0; j < SpaceNumber; j++ ){
			printf( " " );
		}
		
		//�����i�е�* 
		StarNumber = 2 * i - 1;
		for( j = 0; j < StarNumber; j++ ){
			printf( "*" );
		}

		printf( "\n" );
	}
}

