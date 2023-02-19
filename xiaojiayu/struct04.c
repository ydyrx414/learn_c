/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <string.h>
struct student{
	int num;
	char name[20];
	float score[3];
};

void print(struct student stu);

void print(struct student stu)
{
	printf("\tnum      :%d\n",stu.num);	
	printf("\tname     :%s\n",stu.name);	
	printf("\tscore-1  :%5.2f\n",stu.score[0]);	
	printf("\tscore-2  :%5.2f\n",stu.score[1]);	
	printf("\tscore-3  :%5.2f\n",stu.score[2]);	
}

int main(int argc, char** argv)
{
	struct student stu;
	
	stu.num = 0;
	strcpy(stu.name,"fjdkfjdk");
	stu.score[0]=99.2;
	stu.score[1]=99.2;
	stu.score[2]=99.2;
	
	print(stu);
	
	return 0;
}