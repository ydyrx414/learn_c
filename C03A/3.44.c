/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j; //���б��
	int n; //���� 
	
	printf( "������������" );
	scanf( "%d", &n );
	
	for(i=1;i<=n;i++){
		//����ո�
		for(j = i - 1;j>0;j--){
			printf(" ");
		} 
		//����Ǻ�
		for(j=n;j>0;j--){
			printf("**");
		}
		printf("\n"); 
		
		
	}
	
	return 0;
}