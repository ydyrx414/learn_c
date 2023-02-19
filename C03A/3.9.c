/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
void PAN_Number(void);

int main(int argc, char** argv)
{
	int ContinueWill = 1;//判断是否继续
	
	while(ContinueWill){
		PAN_Number();
		
		//询问是否继续
		printf("是否继续解题？是输入1，否输入0:");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break; 
	} 
	
	return 0;
}



void PAN_Number(void)
{
	double a, b, c; //一元二次方程的系数 
	double d, r1, r2; //判别式、根 
	
	//输入方程的系数
	printf( "请输入一元二次方程的系数a、b和c，数之间用空格分开：" );
	scanf( "%Lf%Lf%Lf", &a, &b, &c );
	
	//计算并输出判别式
	d = b * b - 4 * a * c;
	printf( "判别式 = %Lf\n", d ); 
	
	//根据判别式计算并输出根
	if ( d > 0 ) 
	{
		d = sqrt( d ); //判别式的平方根 
		r1 = (-b + d) / ( 2 * a );
		r2 = (-b - d) / ( 2 * a );
		printf( "方程的两个根是：%Lf, %Lf\n", r1, r2 );
	}
	else if( d == 0 )
	{
		r1 = -b / ( 2 * a );
		printf( "方程只有一个根：%Lf\n", r1 );
	}
	else
	{
		printf( "方程没有根\n" );
	}
	
}
