/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Number = 10;
	
	while(1){
		if(Number % 3 == 1 &&Number % 5 == 3 && Number % 7 == 5 && Number % 9 == 7 ){
		printf("�ҳ������ǣ�%d",Number);
		break;
	}
	Number++;
}
	return 0;
}