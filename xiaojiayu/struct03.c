/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

struct student{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
}man[2]={
			{100,"ljljk",'M',18,87.5},
			{102,"dfdfdk",'F',12,97.5}
		};


int main(int argc, char** argv)
{
	struct student *pstu;
	pstu = &man[0];
	printf("Number = %d\nName = %s\n",(*pstu).num,(*pstu).name);
	
	
	return 0;
}