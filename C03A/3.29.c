/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char** argv)
{
	int n = -1;//�����������
	int k,sum = 0;//��ʼ��Ϊ0 
	
	printf("������������:");
	scanf("%d",&n);
	
	//��������Ƿ���� 
	if(n<0){
		printf("�������\n"); 
		exit(0); 
	}
	
	for(k=1;k <= n;k++){
		sum = sum + (k * (k + 1));
	}
	printf("���еĺͣ�%d\n",sum);
	
	return 0;
}