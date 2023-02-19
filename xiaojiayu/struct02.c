/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

struct date{
	int month;
	int day;
	int year;
};

struct{
	int num;
	char name[20];
	char sex;
	struct date birthday;
	float score;
}boy1,boy2;

int main(int argc, char** argv)
{
	printf("input your birthday(year):");
	scanf("%d",&boy1.birthday.year);
	printf("input your birthday(month):");
	scanf("%d",&boy1.birthday.month);
	printf("input your birthday(day):");
	scanf("%d",&boy1.birthday.day);
	
	printf("%d-%d-%d",boy1.birthday.year,boy1.birthday.month,boy1.birthday.day);
	
	
	return 0;
}