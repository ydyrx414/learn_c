/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int n,k,denominator,numerator,temp;//ѭ������ 
	double sum;//��ź� 
	
	//��ȡ���� 
	printf("������������n:");
	scanf("%d",&n);
	
	denominator = 1;
	numerator = 2;
	sum = 2.0;//��ʼΪ0 
	for(k=2;k<=n;k++){//��n��1��ѭ�� 
		temp = denominator;
		denominator = numerator;
		numerator = temp + numerator; 
		sum = sum + 1.0 * numerator / denominator;
	}
	
	printf("���еĺͣ�%.20Lf\n",sum);
	
	return 0;
}