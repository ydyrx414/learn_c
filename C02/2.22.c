/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Number;
	int Remaindern1,Remaindern2;
	
	printf("������һ������:");
	scanf("%d",&Number);
	
	Remaindern1 = Number % 5;
	Remaindern2 = Number % 6;
	
	if(Remaindern1 == 0 && Remaindern2 == 0)
	printf("%d�ܱ�5��6����\n",Number);
	
	else if(Remaindern1 == 0 && Remaindern2 != 0 )
	printf("%d�ܱ�5����,�����ܱ�6����\n",Number);
	
	else if(Remaindern1 != 0 && Remaindern2 != 0 )
	printf("%d���ܱ�5��6����\n",Number);
	
		
	else if(Remaindern1 != 0 && Remaindern2 == 0 )
	printf("%d�ܱ�6����,�����ܱ�5����\n",Number);
	
	return 0;
}
