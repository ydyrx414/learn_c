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
	int low,high,middle;
	
	printf("����20���������ո�ֿ����س�������");
	for(k=0;k<20;k++){
		scanf("%d",&Number[k]);
	}
	
	printf("����Ҫ���ҵ��������س�������");
	scanf("%d",&UserNumber); 
	
	flag=0;
	low=0;
	high=19;
	while(low<=high){
		middle = (low+high) / 2;
		if(Number[middle]==UserNumber){
			printf("���ݼ��е�%d��Ԫ�ؾ�����Ҫ�ҵ�����\n",middle);
			flag=1;
			break;
		}
		else if(Number[middle]<UserNumber){
				low = middle + 1;
			}
		else if(Number[middle]>UserNumber){
				high = middle - 1;
			}			
	}
	
	if(flag==0) printf("���ݼ���û���������\n");
	
	return 0;
}