/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Fibonacci[20] = {1, 1};
	int k;
	
	for(k=2;k<20;k++){
		Fibonacci[k] = Fibonacci[k-1] + Fibonacci[k-2];
	}
	
	printf("Fibonacci��ǰ20����Ϊ��\n");
	for(k=0;k<20;k++){
		if(k % 4 == 0){
			printf("\n");
		}
		printf("%d\t",Fibonacci[k]);
		
	}
	
	
	
	return 0;
}