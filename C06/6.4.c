/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float a[10];
	int k;
	float sum,deviation;
	
	printf("����10��ʵ�����ո�ֿ����س�������\n");
	for(k=0;k<10;k++){
		scanf("%f",&a[k]);
	}
	
	sum=0.0;
	for(k=0;k<10;k++){
		sum+=a[k];
	}
	printf("ƽ���֣�%.2f ",sum/10.0);
	
	deviation=0.0;
	for(k=0;k<10;k++){
		deviation+=((a[k]-(sum/10.0)) * (a[k]-(sum/10.0))) / 9;
	}
	printf(" ��׼���%.2f\n",sqrt(deviation));
	
	
	return 0;
}