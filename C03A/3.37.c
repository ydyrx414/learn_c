/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int k; //ѭ��������1-n�е�����
	int factorial; //��� k!
	double sum; //�ۼƺ� e�Ľ���ֵ 
	double item; //��k���ֵ 
		
	sum = 1.0;//��ʼ�� 
	k = 1;//ѭ������ 
	factorial = 1;//��һ��Ľײ�Ϊ1 
	item = 1.0;//��һ���ֵ 
	while(item > 0.0000001){
		sum += item;//ÿһ������ 
		k++;
		factorial *= k;//k!
		item = 1.0 / factorial;//��k���ֵ 
	} 
	
	printf("e = %.10Lf\n",sum);
	
	return 0;
}