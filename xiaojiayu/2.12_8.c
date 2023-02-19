/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
int one_three(void);
int two(void);

int main(int argc, char** argv)
{
	printf("staring:\n");
	one_three();
	return 0;
}

int one_three(void){
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int two(void){
	printf("two\n");
	return 0;
}