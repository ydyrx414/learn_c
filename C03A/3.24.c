/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n,k,sum;
	
	//��������n 
	n = 0;//��ֹ������ 
	printf("������������n:");
	scanf("%d",&n);
	
	if(n <1){
		printf("�������");
		exit(0);
	}
	
	//ѭ�����
	k = 1;//k��1��ʼ 
	sum = 0;//��ʼʱ��Ϊ0 
	while( k <= n){
		sum += k;
		printf("1....%d���ۻ���Ϊ��%d\n",k,sum);
		k++;
	}
	 return 0;
}