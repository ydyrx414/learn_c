/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#define STD_NUM 10

int main(int argc, char** argv)
{
	float a[STD_NUM];
	int k,i;
	float sum;
	
	printf("����10���ɼ����ո�ֿ����س�������\n");
	for(k=0;k<STD_NUM;k++){
		scanf("%f",&a[k]);
	} 
	
	sum=0;
	
	for(k=0;k<STD_NUM;k++){
		sum+=a[k];
	}
	printf("�ܷ֣�%.1f��ƽ����:%.1f\n",sum,sum/STD_NUM);
	
	i=0;
	printf("ƽ�������ϵĳɼ�:\n");
	for(k=0;k<STD_NUM;k++){
		if(a[k] >= (sum/STD_NUM)){
			printf("%.1f ",a[k]);
			i++;
		}		
	}
	printf("\n");
	printf("��%d��\n",i);	
	return 0;
}