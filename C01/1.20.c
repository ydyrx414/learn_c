/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#define PI 3.14
int main(int argc, char** argv)
{
	float Radius,Height,Area,Volume;
	
	printf("������Բ���İ뾶:");
	scanf("%f",&Radius);
	
	printf("������Բ���ĸ߶�:");
	scanf("%f",&Height);
	
	Area = PI * Radius * Radius;
	Volume = Area * Height;
	
	printf("�����:%.4fƽ����\n",Area);
	printf("���:%.4f������\n",Volume); 
	return 0;
}