/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PAN_Guess(void);

int main(int argc, char** argv)
{
	//�ж��Ƿ���� 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_Guess();
		
		ContinueWill = 0;
		printf("�����£�������1��������0:");
		scanf("%d",&ContinueWill);

	}
	printf("***ллʹ�ñ�����***\n");
}
void PAN_Guess(void)
{
	int RandNumber;//�����
	int Usernumber;//�û���������
	int Rand1,Rand2;//������ĵ�һ������ 
	int User1,User2;//�û��������ݵĵ�һ������ 
	
	Usernumber = 0;//���ֵ 
	
	//��ȡ���� 
	printf("������10-99֮�������:");
	scanf("%d",&Usernumber);
	
	//����Ƿ���� 
	if(Usernumber < 10 || Usernumber > 99){
		printf("������󣡳��������\n");
		exit(0);
	}
	
	//�����������ݵĸ�λʮλ 
	User1 = Usernumber % 10; //��λ�� 
	User2 = Usernumber / 10; //ʮλ��
	
	//���������
	srand(time(0) * 1000);//������������� 
	RandNumber = 10 + (int)( 89.0 / RAND_MAX * rand() );
	
	//����������ĸ�λʮλ 
	Rand1 = RandNumber % 10; //��λ�� 
	Rand2 = RandNumber / 10; //ʮλ��
	
	//�ж��Ƿ��
	if(Usernumber == RandNumber){
		printf("��ȫ��ȷ����ϲ���ý���10000Ԫ��");
	} 
	else if(User1 = Rand1 || User2 == Rand2
		|| User1 == Rand2 || User2 == Rand1 ){
		printf("������һ�����ֹ�ϲ���ý���1000Ԫ��\n");
	}
	else if(User1 == Rand2 && User2 == Rand1){
		printf("���ֶ������ˣ���˳�򲻶ԣ���ϲ��ý���3000Ԫ��\n");
	}
	else{
		printf("���ź�����û���н���\n");
	}

}