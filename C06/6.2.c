/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#define STD_NUM 10

int main(int argc, char** argv)
{
	float a[STD_NUM];
	int k,i;
	float sum;
	
	printf("输入10个成绩，空格分开，回车结束：\n");
	for(k=0;k<STD_NUM;k++){
		scanf("%f",&a[k]);
	} 
	
	sum=0;
	
	for(k=0;k<STD_NUM;k++){
		sum+=a[k];
	}
	printf("总分：%.1f，平均分:%.1f\n",sum,sum/STD_NUM);
	
	i=0;
	printf("平均分以上的成绩:\n");
	for(k=0;k<STD_NUM;k++){
		if(a[k] >= (sum/STD_NUM)){
			printf("%.1f ",a[k]);
			i++;
		}		
	}
	printf("\n");
	printf("共%d人\n",i);	
	return 0;
}