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
	int low,high,middle;
	
	printf("输入20个整数，空格分开，回车结束：");
	for(k=0;k<20;k++){
		scanf("%d",&Number[k]);
	}
	
	printf("输入要查找的整数，回车结束：");
	scanf("%d",&UserNumber); 
	
	flag=0;
	low=0;
	high=19;
	while(low<=high){
		middle = (low+high) / 2;
		if(Number[middle]==UserNumber){
			printf("数据集中第%d个元素就是你要找的数！\n",middle);
			flag=1;
			break;
		}
		else if(Number[middle]<UserNumber){
				low = middle + 1;
			}
		else if(Number[middle]>UserNumber){
				high = middle - 1;
			}			
	}
	
	if(flag==0) printf("数据集中没有这个数！\n");
	
	return 0;
}