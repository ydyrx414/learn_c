/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	double a,b,c,d,e,f,x,y;
	
	printf("请输入线性方程组的系数a，b，c，d，e，f\n"\ 
	"数据之间用英文逗号分隔开，回车结束输入\n");
	scanf("%Lf,%Lf,%Lf,%Lf,%Lf,%Lf",&a,&b,&c,&d,&e,&f);
	
	x = ((e * d) - (b * f)) / ((a * d) - (b * c));
	y = ((a * f) - (e * c)) / ((a * d) - (b * c));
	
	if((a * d) - (b * c) == 0){

		printf("该方程组无解！"); 
	}
	else{

		printf("x = %Lf,y = %Lf",x,y); 
	} 
	return 0;
}