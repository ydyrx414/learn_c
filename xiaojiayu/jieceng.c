/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int i,n;
	int sum=1;
	
	printf("���룺");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum * i;
	}
	
	printf("%d",sum);
	
	return 0;
}