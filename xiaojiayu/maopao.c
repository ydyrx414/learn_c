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
	
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}	
	
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}		
	return 0;
}