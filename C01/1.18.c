/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float miles,velocity;
	int minures;
	
	minures = 50;
	miles = 10;
	velocity = miles / (minures/60.0);
	
	printf("�ܲ�ʱ�٣�%.2f����/Сʱ\n",velocity);
	
	printf("��ʱ:%d����, ���:%.3f����ܲ��ٶ�:%.2f����/Сʱ\n", minures, miles, velocity);
	
	printf("�����ܲ�ʱ��:(����)��������");
	scanf("&d",&minures);
	fflush(stdin); 
	printf("�����ܲ����:(����)��ʵ����");
	scanf("%f",&miles);
	
	velocity = miles / (minures/60.0);
	printf("�ܲ��ٶ�:%.2f\n",velocity);
	return 0;
}