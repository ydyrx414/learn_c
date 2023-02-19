/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <ctype.h>

void PAN_PrintMenu( void ){
	printf("************************************************\n");
	printf("             欢迎使用<学生信息管理系统>\n");
	printf("作者:yb  Email  ydyrx414@\n");
	printf("************************************************\n");
	printf("[A] 新增\n");
	printf("[B] 修改\n");
	printf("[C] 删除\n");
	printf("[D] 显示所有学生信息\n");
	printf("[E] 按学号查询学生信息\n");
	printf("[F] 按姓名查询学生信息\n");
	printf("[G] 查询身高在某区间的学生\n");
	printf("[H] 查询所有男生信息\n");
	printf("[I] 查询所有女生信息\n");
	printf("[X] 退出\n");
	printf("************************************************\n");
	printf("请输入要执行的功能前的字母（不区分大小写）：");
}

int main(int argc, char** argv)
{
	char CommandLetter;//用户输入的字符
	
	PAN_PrintMenu();//输出菜单
	
	//转换大小写
	CommandLetter = getchar(); 
	CommandLetter = tolower(CommandLetter);
	
	//判断输入是否正确
	//以及打印出相应内容
	switch(CommandLetter){
		case 'a':
			printf("[A] 新增\n");
			break;
		
		case 'b':
			printf("[B] 修改\n");
			break;
		
		case 'c':
			printf("[C] 删除\n");
			break;
		
		case 'd':
			printf("[D] 显示所有学生信息\n");
			break;
		
		case 'e':
			printf("[E] 按学号查询学生信息\n");
			break;
		
		case 'f':
			printf("[F] 按姓名查询学生信息\n");
			break;
		
		case 'g':
			printf("[G] 查询身高在某区间的学生\n");
			break;
		
		case 'h':
			printf("[H] 查询所有男生信息\n");
			break;
			
		case 'i':
			printf("[I] 查询所有女生信息\n");
			break;
		
		case 'x':
			printf("[X] 退出\n");
			break;
		
		default:
			printf("输入错误！\n");
	} 
	 
	return 0;
}