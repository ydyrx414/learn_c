/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a[6];//������� 
	int k;//ѭ������
	int n=6;//���鳤��
	int temp;//�м����
	 
	printf("����6���������ո�ֿ����س�������\n");
	for(k=0;k<6;k++){
		scanf("%d",&a[k]);
	} 
	
	printf("���������ݵĽ����");
	for(k=0;k<=((n-1)/2);k++){
		temp = a[k];
		a[k] = a[n-1-k];
		a[n-1-k] = temp;
		
	} 
	for(k=0;k<n;k++){
		printf("%d ",a[k]);
	}	
	return 0;
}