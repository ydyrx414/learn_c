/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int v,t;
	double twc,V;
	
	printf("���������41��С��-58�Ļ������϶ȣ�");
	scanf("%d",&t);
	printf("������2���ϵķ��٣�");
	scanf("%d",&v);
	
	V = pow(v,0.16);
	
	twc=35.74 + 0.6215 * t - 35.75 * V + 0.42757 * t * V;
	
	printf("�纮�¶�Ϊ��%.4Lf\n",twc);
	
	return 0;
}