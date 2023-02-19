/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	double a,b,c,d,r,r1,r2;
	
	printf("请输入一元二次方程的系数啊a，b，c，数之间用空格分开：");
	scanf("%Lf %Lf %Lf",&a,&b,&c);
	
	d = pow(b,2) - 4 * a * c;
	
	if(d > 0){
		r1 = ((-b + sqrt(d)) / (2 * a)); 
		r2 = ((-b - sqrt(d)) / (2 * a));
		
		printf("判别式 = %Lf\n",d);
		printf("方程有两个根：%Lf,%Lf\n",r1,r2);
	}
	else if(d == 0){
		r = (-b / (2 * a)); 
		
		printf("判别式 = %Lf\n",d);
		printf("方程有一个根：%Lf\n", r );
	}
	else if(d < 0){
		printf("判别式 = %Lf\n",d);
		printf("方程没有根\n"); 
	}
			
	return 0;
}
/*
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
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
	
	return 0;
}
*/