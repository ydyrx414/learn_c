/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float TemperatureInitial,TemperatureFinal,Energy,M;
	
	printf("������ˮ������λ��ǧ�ˣ���");
	scanf("%f",&M);
	
	printf("�������ʼ�¶ȣ���λ�����϶ȣ���");
	scanf("%f",&TemperatureInitial);
	
	printf("������Ŀ���¶ȣ���λ�����϶ȣ���");
	scanf("%f",&TemperatureFinal);
	
	Energy = M * (TemperatureFinal - TemperatureInitial ) * 4184;
	
	printf("��Ҫ��������%.4f����\n",Energy);
	
	return 0;
}