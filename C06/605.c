/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#define STD_NUM 10 //学生人数 
int main(int argc, char** argv)
{
	float Score[STD_NUM];//学生成绩 
	int k;//循环变量 
	float Sum;//总分
	float Max,Min;//最大值最小值	 
	
	printf("请输入%d个成绩:");
	for(k = 0;k<STD_NUM;k++){
		scanf("%f",&Score[k]);
	} 
	
	Sum = Score[0];//总分初始值 
	Max = Score[0];//最高分初始值 
	Min = Score[0];//最低分初始值 
	
	for(k=1;k<STD_NUM;k++){
		Sum+=Score[k];
		if(Score[k]>Max) Max = Score[k];
		if(Score[k]<Min) Min = Score[k];
		
	}
	
	printf("总分：%.1f\t",Sum);
	printf("平均分：%.1f\n",Sum / STD_NUM);
	printf("最高分：%.1f\t",Max);
	printf("最低分：%.1f\n",Min);
			
	return 0;
}