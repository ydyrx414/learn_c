/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int k;//ѭ������ 
	double sum;//��ź� 
	
	//��ȡ���� 
	printf("������������n:");
	scanf("%d",&k);
	
	sum = 0.0;//��ʼΪ0 
	for(;k>0;k--){//��n��1��ѭ�� 
		sum = sum + (k / (2.0 * k - 1.0));
	}
	
	printf("���еĺͣ�%.20Lf\n",sum);
	
	return 0;
}