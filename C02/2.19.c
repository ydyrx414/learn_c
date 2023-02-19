/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

/*功能：输出页面
参数：无
返回值：无 
*/
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
	char CommandLetter; //存放接收到的命令字母 
	
	PAN_PrintMenu(); //输出菜单命令 
	
	//接收用户输入(输入提示已经在菜单选项后输出了) 
	CommandLetter = getchar(); //获得键盘输入的字符 
	 
	//如果输入的字母大写，转换成小写（用户输入小写的可能性大） 
	if ( CommandLetter >= 'A' && CommandLetter <= 'Z'){
		CommandLetter = CommandLetter + ('a' - 'A');
	}

	//根据接收到的字母输出菜单命令字符串,不正确的输入提示用户
	//字母a-g、x是正确输入，其余的都不正确
	if ( CommandLetter == 'a' ) printf("[A] 新增\n");
	else if ( CommandLetter == 'b' ) printf("[B] 修改\n");
	else if ( CommandLetter == 'c' ) printf("[C] 删除\n");
	else if ( CommandLetter == 'd' ) printf("[D] 显示所有学生信息\n");
	else if ( CommandLetter == 'e' ) printf("[E] 按学号查询学生信息\n");
	else if ( CommandLetter == 'f' ) printf("[F] 按姓名查询学生信息\n");
	else if ( CommandLetter == 'g' ) printf("[G] 查询身高在某区间的学生\n");
	else if ( CommandLetter == 'h' ) printf("[G] 查询所有男生信息\n");
	else if ( CommandLetter == 'i' ) printf("[G] 查询所有女生信息\n");
	else if ( CommandLetter == 'x' ) printf("[X] 退出\n");
	else printf("输入错误！\n");
	
	return 0;
}