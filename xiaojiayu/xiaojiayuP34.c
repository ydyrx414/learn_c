/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	char c;
	int letters=0;
	int space=0;
	int digits=0;
	int others=0;
	
	while((c=getchar()) != '\n'){
		if((c>='a' && c <= 'z') || (c>='A' && c <= 'Z') ){
			letters++;	
		}
		
		
		else if(c >= '0' && c<= '9'){
			digits++;
		}
		
		
		else if(c==' '){
			space++;
		}
		
		
		else others++;
	}
	printf("��ĸ��%d\n���֣�%d\n�ո�%d\n������%d\n",letters,digits,space,others);
	
	return 0;
}