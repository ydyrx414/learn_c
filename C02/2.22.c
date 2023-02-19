/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Number;
	int Remaindern1,Remaindern2;
	
	printf("请输入一个整数:");
	scanf("%d",&Number);
	
	Remaindern1 = Number % 5;
	Remaindern2 = Number % 6;
	
	if(Remaindern1 == 0 && Remaindern2 == 0)
	printf("%d能被5和6整除\n",Number);
	
	else if(Remaindern1 == 0 && Remaindern2 != 0 )
	printf("%d能被5整除,但不能被6整除\n",Number);
	
	else if(Remaindern1 != 0 && Remaindern2 != 0 )
	printf("%d不能被5和6整除\n",Number);
	
		
	else if(Remaindern1 != 0 && Remaindern2 == 0 )
	printf("%d能被6整除,但不能被5整除\n",Number);
	
	return 0;
}
