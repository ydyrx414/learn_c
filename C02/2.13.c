/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	double a,b,c,d,e,f,x,y;
	
	printf("���������Է������ϵ��a��b��c��d��e��f\n"\ 
	"����֮����Ӣ�Ķ��ŷָ������س���������\n");
	scanf("%Lf,%Lf,%Lf,%Lf,%Lf,%Lf",&a,&b,&c,&d,&e,&f);
	
	x = ((e * d) - (b * f)) / ((a * d) - (b * c));
	y = ((a * f) - (e * c)) / ((a * d) - (b * c));
	
	if((a * d) - (b * c) == 0){

		printf("�÷������޽⣡"); 
	}
	else{

		printf("x = %Lf,y = %Lf",x,y); 
	} 
	return 0;
}