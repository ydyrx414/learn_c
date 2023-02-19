/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	
	int arr[10]={3,6,5,2,1,4,9,8,7,0};
	int i,j,temp;
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}
	return 0;
}