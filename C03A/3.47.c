/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char** argv)
{
	int i,j,k;
	int n;
		
	n=10; 
	printf( "����������(������)��" );
	scanf( "%d", &n );
	
	if(n>9){
		printf("�������\n");
		exit(0);
		
	} 
	for(i=1;i<=n;i++){
		for(k=n-i;k>0;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
		
	return 0;
}