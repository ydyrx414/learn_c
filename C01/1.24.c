/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int sum,num,num1,num2,num3;
	
	printf("������0-999֮���һ��������");
	scanf("%d",&num);
	
	num3 = num % 10;
	num2 = (num / 10) % 10;
	num1 = (num / 10) / 10;
	sum = num3 + num2 + num1;
	
	printf("��λ����֮��Ϊ��%d\n",sum); 
	
	return 0;
}