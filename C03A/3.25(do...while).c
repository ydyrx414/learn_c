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
	
	n = 1;//��1��ʼ 
	sum = 0;//��ʼʱ��Ϊ0 
	do {
		sum = sum + (n * n);
		n++;
	} while(n <= k);
	//������
	printf("1 * 1 + ....... + %d * %d = %d\n",k,k,sum); 
	
	return 0;
}