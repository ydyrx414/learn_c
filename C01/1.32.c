/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
#define r 6371.01
#define PI 3.14

double Distance(double x1,double x2,double y1,double y2){
	double d;
	d = r * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
	
	return d;	
}


int main(int argc, char** argv)
{
	double x1,x2,y1,y2,X1,X2,Y1,Y2;
	
	printf("�������1����ľ�γ�ȽǶ�ֵ�����ö��ŷָ���:");
	scanf("%Lf,%Lf",&X1,&Y1);
	printf("�������2����ľ�γ�ȽǶ�ֵ�����ö��ŷָ���:");
	scanf("%Lf,%Lf",&X2,&Y2);	
	
	x1 = X1 * (PI / 180);
	x2 = X2 * (PI / 180);
	y1 = Y1 * (PI / 180);
	y2 = Y2 * (PI / 180);
	
	printf("����֮�����������ǣ�%.3Lfkm\n",Distance(x1,x2,y1,y2));
	
	
	return 0;
}