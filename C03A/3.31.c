#include <stdio.h>

int main(int argc, char *argv[]) {
	int n; //��������n 
	int k; //ѭ��������1-n�е�����
	int Product; //��Ž׳� 
	int sum;//��ź�
	 
	//����n
	printf( "������20���ڵ�������n��" );
	scanf( "%d", &n );
	
	sum = 1;//��ʼ��Ϊ0 
	Product = 1; //�׳˳�ʼΪ1 
	for ( k = 2; k <= n; k++ ){
		Product *= k; //�õ�k�Ľ׳�
		sum = sum + Product;//�õ��� 
		printf( "1! + ... + %d = %d\n", k, sum );
	}

	return 0;
}
