/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char** argv)
{
	int k,n = -1;//�����������
	double sum =1;//��ʼ��Ϊ0 
	int item;//��ĸ 
	
	printf("������������:");
	scanf("%d",&n);
	
	//��������Ƿ���� 
	if(n<0){
		printf("�������\n"); 
		exit(0); 
	}
	
	for(k=1;k <= n;k++){
		item = k * (k+1) * (k+2);
		sum = sum + (1.0 / item);
	}
	printf("���еĺͣ�%.20Lf\n",sum);
	
	return 0;
}