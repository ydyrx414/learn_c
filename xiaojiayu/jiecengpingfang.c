/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int square(int p);//ʵ��ƽ�� 
int factorial(int q);//ʵ�ֽײ� 


int main(int argc, char** argv)
{
	int sum=0;
	int i;
	
	for(i=2;i<=3;i++){
		sum = sum + square(i);
	}

	printf("%d",sum); 
	return 0;
}

int square(int p){
	int k;
	int r;
	k = p * p;
	r = factorial(k);
	
	return r;
}

int factorial(int q){
	int i,c=1;
	
	for(i=1;i<=q;i++){
		c = c * i;
	}
	
	return c;	
}