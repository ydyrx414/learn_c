/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int recursion(int n) ;//求阶层 


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
	
	else if(n == 0 || n == 1){//0的阶层是1 
		temp = 1;
	}
	
	//递归调用 
	else{
		temp = recursion(n-1) * n;
	}
	return temp;
}