/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int kg;//公斤 
	float pound;//磅 
	
	printf("公斤  磅\n");
	
	for(kg=1;kg <= 10;kg++){
		pound = kg * 2.2;
		printf(" %2d   %-.1f\n",kg,pound);
	}
	
	return 0;
}