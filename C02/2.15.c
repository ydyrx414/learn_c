/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	double Height,Weight,BMI;//��������ֱ�Ϊ�������BIM 
	
	//��ȡ������������ 
	printf("��������ߣ��ף�:");
	scanf("%Lf",&Height);
	
	printf("���������أ����:");
	scanf("%Lf",&Weight); 
	
	//����BMI 
	BMI =  Weight / (Height * Height); 
	
	//�Լ����BMI�����ж� 
	if(BMI < 18.5) printf("���᣺���ǿ������Ӫ����");
	
	else if(BMI >= 18.5 && 25.0 > BMI ) printf("��׼����������֣�\n");
	else if(BMI < 30.0 && BMI >= 25.0) printf("���أ����ǿ������\n"); 
	else if(BMI > 30.0) printf("���֣���ô˵�أ���\n"); 
	
	
	
	return 0;
}