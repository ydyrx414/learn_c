/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int k;//循环变量
	double sum;//每一项的和
	int n;//第n项
	
	sum = 1.0;//初始值
	n = 5000000;//最后一项 
	
	//从左到右计算 
	for(k=2;k<n;k++){
		sum = sum + (1.0 / k);
	} 
	
	printf("从左到右计算：%.20Lf\n",sum);
	
	sum = 0;//重新赋值 
	for(k=5000000;k>0;k--){
		sum = sum + (1.0 / k);
	}	 
 	
 	printf("从右到左计算：%.20Lf\n",sum);
 	
	return 0;
}