/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a[20];
	int k,flag;
	//输入 
	printf("输入20个整数，空格分开，回车结束：\n");
	for(k=0;k<20;k++){
		scanf("%d",&a[k]);
	}
	
	flag=0;
	//遍历求解 
	while(1){
	for(k=0;k<20;k++){
		if(a[k]==a[k+1] && a[k+1]==a[k+2]&&a[k+2]==a[k+3]){
			printf("数字 %d 在[%d,%d]连续出现了4次。\n",a[k],k,k+3); 		
			flag=1;
			break;
			}
		}
		break; 	
	}
	if(flag==0) printf("没有连续出现4次的数字\n"); 		
			
	return 0;
}