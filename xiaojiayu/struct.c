/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#define MaxSize 10

typedef struct{
	int data[MaxSize];
	int length;
}SqList;

//基本操作-初始化一个顺序表 
void InitList(SqList &L){
	for(int i=0;i<MaxSize;i++){
		L.data[i]=0;//将所有数据元素设置为默认初始值 
	}
	L.length=0;
}

int main(int argc, char** argv)
{
	SqList L;		//声明一个顺序表
	InitList(L); 	//初始化顺序表 
	return 0;
}