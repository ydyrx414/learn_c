/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#define STD_NUM 10 //ѧ������ 
int main(int argc, char** argv)
{
	float Score[STD_NUM];//ѧ���ɼ� 
	int k;//ѭ������ 
	float Sum;//�ܷ�
	float Max,Min;//���ֵ��Сֵ	 
	
	printf("������%d���ɼ�:");
	for(k = 0;k<STD_NUM;k++){
		scanf("%f",&Score[k]);
	} 
	
	Sum = Score[0];//�ֳܷ�ʼֵ 
	Max = Score[0];//��߷ֳ�ʼֵ 
	Min = Score[0];//��ͷֳ�ʼֵ 
	
	for(k=1;k<STD_NUM;k++){
		Sum+=Score[k];
		if(Score[k]>Max) Max = Score[k];
		if(Score[k]<Min) Min = Score[k];
		
	}
	
	printf("�ܷ֣�%.1f\t",Sum);
	printf("ƽ���֣�%.1f\n",Sum / STD_NUM);
	printf("��߷֣�%.1f\t",Max);
	printf("��ͷ֣�%.1f\n",Min);
			
	return 0;
}