/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,sum;
	
	printf("������������k��");
	scanf("%d",&k);
	
	for(n = 1,sum = 0;n <= k;n++){
		sum += (n * n);
	}
	//������
	printf("1 * 1 + ....... + %d * %d = %d\n",k,k,sum); 
	
	return 0;
}