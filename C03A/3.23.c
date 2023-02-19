/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Number = 10;
	
	while(1){
		if(Number % 3 == 1 &&Number % 5 == 3 && Number % 7 == 5 && Number % 9 == 7 ){
		printf("找出的数是：%d",Number);
		break;
	}
	Number++;
}
	return 0;
}