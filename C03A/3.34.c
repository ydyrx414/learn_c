/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,Flag;
	double sum;
	
	//��ȡ���� 
	printf("������������n:");
	scanf("%d",&n);
	
	sum = 0.0;
	Flag = 1;
	for(k=1;k<=n;k++){
		 sum = (sum + Flag * (1.0 / (k)));
		 printf("k = %-6d        PI = %.10Lf\n",k,sum * 4.0);
		 Flag = -Flag;
		 k = k + 1; 
	}
	return 0;
}