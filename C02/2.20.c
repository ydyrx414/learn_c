/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int Year;//���
	int Remainder;//����
	
	Year = -1;//��ǰ��ֵ���ж�
	
	//��ȡ�û����� 
	printf("��������ݣ�");
	scanf("%d",&Year);
	
	Remainder = Year % 12;
	
	switch(Remainder){
		case 0:
			printf("����\n");
			break;
			
		case 1:
			printf("����\n");
			break; 
	
		case 2:
			printf("����\n");
			break; 
			
		case 3:
			printf("����\n");
			break;
			
		case '4':
			printf("����\n");
			break; 
			
		case 5:
			printf("ţ��\n");
			break;
			
		case 6:
			printf("����\n");
			break; 
			
		case 7:
			printf("����\n");
			break;
			
		case 8:
			printf("����\n");
			break; 
			
		case 9:
			printf("����\n");
			break;
			
		case 10:
			printf("����\n");
			break; 
			
		case 11:
			printf("������\n");
			break;
		
		default:
			printf("�������\n");		
	}
	
	
	 
	return 0;
}