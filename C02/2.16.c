/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(int argc, char** argv)
{
	double Radius,Perimeter,Area;//����뾶,�ܳ������ 
		
	Radius = 0;//��ǰ��ֵ����������û������Ƿ��ڷ�Χ֮�� 
	
	//��ȡ�û�����İ뾶 
	printf("������Բ�İ뾶��");
	scanf("%Lf",&Radius);
	
	//�ж��û������Ƿ���� ,
	if(Radius <= 0 ){
		printf("������󣡰뾶Ҫ����0��");
		exit(0);
	} 
	
	Perimeter = 2 * PI * Radius;
	Area = PI * Radius * Radius;
	
	printf("Բ���ܳ���%Lf\n",Perimeter);
	printf("Բ�������%Lf\n",Area);
	
	return 0;
}