/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

/*���ܣ����ҳ��
��������
����ֵ���� 
*/
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
	char CommandLetter; //��Ž��յ���������ĸ 
	
	PAN_PrintMenu(); //����˵����� 
	
	//�����û�����(������ʾ�Ѿ��ڲ˵�ѡ��������) 
	CommandLetter = getchar(); //��ü���������ַ� 
	 
	//����������ĸ��д��ת����Сд���û�����Сд�Ŀ����Դ� 
	if ( CommandLetter >= 'A' && CommandLetter <= 'Z'){
		CommandLetter = CommandLetter + ('a' - 'A');
	}

	//���ݽ��յ�����ĸ����˵������ַ���,����ȷ��������ʾ�û�
	//��ĸa-g��x����ȷ���룬����Ķ�����ȷ
	if ( CommandLetter == 'a' ) printf("[A] ����\n");
	else if ( CommandLetter == 'b' ) printf("[B] �޸�\n");
	else if ( CommandLetter == 'c' ) printf("[C] ɾ��\n");
	else if ( CommandLetter == 'd' ) printf("[D] ��ʾ����ѧ����Ϣ\n");
	else if ( CommandLetter == 'e' ) printf("[E] ��ѧ�Ų�ѯѧ����Ϣ\n");
	else if ( CommandLetter == 'f' ) printf("[F] ��������ѯѧ����Ϣ\n");
	else if ( CommandLetter == 'g' ) printf("[G] ��ѯ�����ĳ�����ѧ��\n");
	else if ( CommandLetter == 'h' ) printf("[G] ��ѯ����������Ϣ\n");
	else if ( CommandLetter == 'i' ) printf("[G] ��ѯ����Ů����Ϣ\n");
	else if ( CommandLetter == 'x' ) printf("[X] �˳�\n");
	else printf("�������\n");
	
	return 0;
}