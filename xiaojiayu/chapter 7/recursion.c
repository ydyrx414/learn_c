/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int recursion(int n) ;//��ײ� 


int main(int argc, char** argv)
{
	int n;
	int result;
	
	printf("input number:");
	scanf("%d",&n);
	
	result = recursion(n);
	
	printf("%d! = %d\n",n,result);
	
	return 0;
}

int recursion(int n){
	int temp;
	
	if(n<0){
		printf("input ettor!\n");
	}
	
	else if(n == 0 || n == 1){//0�Ľײ���1 
		temp = 1;
	}
	
	//�ݹ���� 
	else{
		temp = recursion(n-1) * n;
	}
	return temp;
}