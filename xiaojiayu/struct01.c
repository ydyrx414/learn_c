/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#define NUM 2

struct person{
	char name[20];
	char phone[10];
};

int main(int argc, char** argv)
{
	struct person man[NUM];
	int i;
	
	for(i=0;i<NUM;i++){
		printf("input name:\n");
		gets(man[i].name);
		printf("input phone:\n");
		gets(man[i].phone);
		
	}
		
	printf("\tname\t\t\t\t\tphone\n");
	for(i=0;i<NUM;i++){
		printf("%20s\t\t\t%20s\n",man[i].name,man[i].phone);
	}
		
	return 0;
}