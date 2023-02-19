/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float km;//公里 
	int mile;//英里 
	
	printf("英里  公里\n");
	
	for(mile=1;mile <= 10;mile++){
		km = mile * 1.609;
		printf(" %2d   %-.3f\n",mile,km);
	}
	
	return 0;
}