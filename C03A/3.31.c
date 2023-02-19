#include <stdio.h>

int main(int argc, char *argv[]) {
	int n; //存放输入的n 
	int k; //循环变量，1-n中的整数
	int Product; //存放阶乘 
	int sum;//存放和
	 
	//输入n
	printf( "请输入20以内的正整数n：" );
	scanf( "%d", &n );
	
	sum = 1;//初始和为0 
	Product = 1; //阶乘初始为1 
	for ( k = 2; k <= n; k++ ){
		Product *= k; //得到k的阶乘
		sum = sum + Product;//得到和 
		printf( "1! + ... + %d = %d\n", k, sum );
	}

	return 0;
}
