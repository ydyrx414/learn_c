/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int k;//ѭ������
	double sum;//ÿһ��ĺ�
	int n;//��n��
	
	sum = 1.0;//��ʼֵ
	n = 5000000;//���һ�� 
	
	//�����Ҽ��� 
	for(k=2;k<n;k++){
		sum = sum + (1.0 / k);
	} 
	
	printf("�����Ҽ��㣺%.20Lf\n",sum);
	
	sum = 0;//���¸�ֵ 
	for(k=5000000;k>0;k--){
		sum = sum + (1.0 / k);
	}	 
 	
 	printf("���ҵ�����㣺%.20Lf\n",sum);
 	
	return 0;
}