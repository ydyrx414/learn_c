/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n,k;
	double sum;
	
	printf("������������n��");
	scanf("%d",&n);
	
	for(k = 1,sum = 0;k <= n;k++){		
		sum += sqrt(k);
	}
	
	printf("���еĺ�Ϊ��%.10Lf\n",sum); 
	
	return 0;
}