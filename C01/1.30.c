/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>
double PAN_Area(double S){
	double Area;
 
 	Area = ((sqrt(3) * 3) / 2) * pow(S,2);
 	
 	return Area;
}

int main(int argc, char** argv)
{
 	double S;
 	
	printf("�������������εı߳���");
	scanf("%Lf",&S);
	
	printf("�������ε������%Lf",PAN_Area(S)); 	
	return 0;
}