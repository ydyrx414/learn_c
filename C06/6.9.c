/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Number[20];
	int k,flag;
	int UserNumber;
	
	printf("����20���������ո�ֿ����س�������");
	for(k=0;k<20;k++){
		scanf("%d",&Number[k]);
	}
	
	printf("����Ҫ���ҵ��������س�������");
	scanf("%d",&UserNumber); 
	
	flag=0;
	for(k=0;k<20;k++){
		if(Number[k]==UserNumber){
			printf("���ݼ��е�%d��Ԫ�ؾ�����Ҫ�ҵ�����\n",k);
			flag=1;
			break;		
		}	
	}
	if(flag==0) printf("���ݼ���û���������\n");
	
	return 0;
}