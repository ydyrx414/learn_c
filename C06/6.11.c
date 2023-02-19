/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a[20];
	int k,i,j;
	int temp;
	int max;
	
	printf("输入20个整数，空格分开，回车结束：\n");
	for(k=0;k<20;k++){
		scanf("%d",&a[k]);
	}
	
	for(i=0;i<19;i++){
		i=k;
		for(j=k+1;j<20;j++){
			i=j;
			if(i!=k){
				temp=a[k];
				a[i]=a[i];
				a[i]=temp;
			}
		}
	}
	
	printf("排序后的数组：\n");	
	for(k=0;k<20;k++){
		printf("%d ",a[k]);
	}
	
	return 0;
}