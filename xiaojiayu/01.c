/************************
���ƣ�01.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

//�Զ��庯��������ֵΪ������������ 
int change(int a){
 	int  c;
	c = a * 2;
	return c; 
}

//���������� 
int main(int argc, char** argv)
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	int y = change(x);
	printf("The double of this number is:%d\n",y);
	 
	return 0;
}