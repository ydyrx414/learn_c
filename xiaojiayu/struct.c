/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#define MaxSize 10

typedef struct{
	int data[MaxSize];
	int length;
}SqList;

//��������-��ʼ��һ��˳��� 
void InitList(SqList &L){
	for(int i=0;i<MaxSize;i++){
		L.data[i]=0;//����������Ԫ������ΪĬ�ϳ�ʼֵ 
	}
	L.length=0;
}

int main(int argc, char** argv)
{
	SqList L;		//����һ��˳���
	InitList(L); 	//��ʼ��˳��� 
	return 0;
}