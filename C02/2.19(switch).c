/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include <ctype.h>

void PAN_PrintMenu( void ){
	printf("************************************************\n");
	printf("             ��ӭʹ��<ѧ����Ϣ����ϵͳ>\n");
	printf("����:yb  Email  ydyrx414@\n");
	printf("************************************************\n");
	printf("[A] ����\n");
	printf("[B] �޸�\n");
	printf("[C] ɾ��\n");
	printf("[D] ��ʾ����ѧ����Ϣ\n");
	printf("[E] ��ѧ�Ų�ѯѧ����Ϣ\n");
	printf("[F] ��������ѯѧ����Ϣ\n");
	printf("[G] ��ѯ�����ĳ�����ѧ��\n");
	printf("[H] ��ѯ����������Ϣ\n");
	printf("[I] ��ѯ����Ů����Ϣ\n");
	printf("[X] �˳�\n");
	printf("************************************************\n");
	printf("������Ҫִ�еĹ���ǰ����ĸ�������ִ�Сд����");
}

int main(int argc, char** argv)
{
	char CommandLetter;//�û�������ַ�
	
	PAN_PrintMenu();//����˵�
	
	//ת����Сд
	CommandLetter = getchar(); 
	CommandLetter = tolower(CommandLetter);
	
	//�ж������Ƿ���ȷ
	//�Լ���ӡ����Ӧ����
	switch(CommandLetter){
		case 'a':
			printf("[A] ����\n");
			break;
		
		case 'b':
			printf("[B] �޸�\n");
			break;
		
		case 'c':
			printf("[C] ɾ��\n");
			break;
		
		case 'd':
			printf("[D] ��ʾ����ѧ����Ϣ\n");
			break;
		
		case 'e':
			printf("[E] ��ѧ�Ų�ѯѧ����Ϣ\n");
			break;
		
		case 'f':
			printf("[F] ��������ѯѧ����Ϣ\n");
			break;
		
		case 'g':
			printf("[G] ��ѯ�����ĳ�����ѧ��\n");
			break;
		
		case 'h':
			printf("[H] ��ѯ����������Ϣ\n");
			break;
			
		case 'i':
			printf("[I] ��ѯ����Ů����Ϣ\n");
			break;
		
		case 'x':
			printf("[X] �˳�\n");
			break;
		
		default:
			printf("�������\n");
	} 
	 
	return 0;
}