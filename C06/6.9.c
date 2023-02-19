/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Number[20];
	int k,flag;
	int UserNumber;
	
	printf("输入20个整数，空格分开，回车结束：");
	for(k=0;k<20;k++){
		scanf("%d",&Number[k]);
	}
	
	printf("输入要查找的整数，回车结束：");
	scanf("%d",&UserNumber); 
	
	flag=0;
	for(k=0;k<20;k++){
		if(Number[k]==UserNumber){
			printf("数据集中第%d个元素就是你要找的数！\n",k);
			flag=1;
			break;		
		}	
	}
	if(flag==0) printf("数据集中没有这个数！\n");
	
	return 0;
}