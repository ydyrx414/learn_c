/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Year;//年份
	int Remainder;//余数
	
	Year = -1;//提前赋值做判断
	
	//获取用户输入 
	printf("请输入年份：");
	scanf("%d",&Year);
	
	Remainder = Year % 12;
	
	switch(Remainder){
		case 0:
			printf("猴年\n");
			break;
			
		case 1:
			printf("鸡年\n");
			break; 
	
		case 2:
			printf("狗年\n");
			break; 
			
		case 3:
			printf("猪年\n");
			break;
			
		case '4':
			printf("鼠年\n");
			break; 
			
		case 5:
			printf("牛年\n");
			break;
			
		case 6:
			printf("虎年\n");
			break; 
			
		case 7:
			printf("兔年\n");
			break;
			
		case 8:
			printf("龙年\n");
			break; 
			
		case 9:
			printf("蛇年\n");
			break;
			
		case 10:
			printf("马年\n");
			break; 
			
		case 11:
			printf("猴羊年\n");
			break;
		
		default:
			printf("输入错误！\n");		
	}
	
	
	 
	return 0;
}