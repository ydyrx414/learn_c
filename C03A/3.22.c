/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	int RandNumber,UserNumber;//���ɵ���������û�������
	int i = 0;//ͳ�Ʋ¼���
		
	//�������������,��ȡ����� 
	srand(time(0) * 1000); 
	RandNumber = (int)(99.0 / RAND_MAX * rand() );
	
	//����ѭ�� 
	while(1){
		printf("�������0-99����");//��ʾ�û����� 
		scanf("%d",&UserNumber);
		
		//��������Ƿ���ȷ 
		if(UserNumber < 0 || UserNumber > 99){
			printf("������󣡳��������\n");
			break;
		}
		
		i++;//������������м��� 
			
		//�ж�����������з��� 
		if(UserNumber < RandNumber){
			printf("С�ˣ�\n");
		} 
		else if(UserNumber > RandNumber){
			printf("���ˣ�\n");
		} 
		else if(UserNumber == RandNumber){
			printf("~ ��~��ȷ�ˣ�\n");	
			break;	
		}
	}

	//�ܽ����뼸�� 
	printf("����%d�Σ�\n",i);
			
	return 0;
}