/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int sign=1;//��ʾ������
	int k=1;//�ڼ��� 
	double item;//��ֹѭ������
	double sum=0;//�ܺ� 
	 
	while(1){
		item = 1.0 / k;
		if(item < 0.001) break;	
		sum = sum + (sign * item);
		sign = -1 * sign;
		printf("ǰ%d�����еĺ� = %Lf\n",k,sum);
		k++;
		
		
	}
	
		
	return 0;
}