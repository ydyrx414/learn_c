/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,Product;
		
	printf("������������n��");
	scanf("%d",&n);
	
	for(Product	= 1,k = 1; k <= n;k++){
		Product  *= k;
		printf( "%3d! = %d\n", k, Product );
	}
	
	return 0;
}