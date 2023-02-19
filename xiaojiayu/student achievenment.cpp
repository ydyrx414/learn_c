/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include<stdio.h>
#define N 5
struct Student
{
	char id[5],name[5];
	int s1,s2,s3,s4;
	float sum_s;
};
int main()
{
	struct Student s[N];
	int i,p;

	for(i=0; i<N; i++){
	printf("输入学生 %d 的学号 姓名 和4门课的成绩：",i+1);
	scanf("%s%s%d%d%d%d",&s[i].id,&s[i].name,&s[i].s1,&s[i].s2,&s[i].s3,&s[i].s4);
	s[i].sum_s=(s[i].s1+s[i].s2+s[i].s3+s[i].s4);
}
/* 输出每个学生的总成绩 */
	printf(" 学号 总成绩\n");
	for(i=0; i<N; i++)
	printf("%8s%8.1f\n\n",s[i].id,s[i].sum_s);
/* 比较成绩*/ 
	p=0;
	for(i=0; i<N; i++)
	if(s[i].sum_s>s[p].sum_s)
	p=i;
/* 输出总成绩最高的学生信息 */
	printf(" 学号 姓名   成绩1   成绩2   成绩3   成绩4   总成绩\n");
	printf("%8s%8s%8d%8d%8d%8d%8.1f\n",s[p].id,s[p].name,s[p].s1,s[p].s2,s[p].s3,s[p].s4,s[p].sum_s);
	return 0;
}