/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float a,v,length;
	
	printf("������ɻ�����ٶȣ�");
	scanf("%f",&v);
	printf("������ɻ���ɼ��ٶȣ�");
	scanf("%f",&a);
	
	length = pow(v,2) / (2 * a);
	
	printf("��Ҫ�ķɻ��ܵ����ȣ�%.4f��\n",length);	
	
	return 0;
}