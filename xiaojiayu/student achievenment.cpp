/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
#include<stdio.h>
#define N 5
struct Student
{
	char id[5],name[5];
	int s1,s2,s3,s4;
	float sum_s;
};
int main()
{
	struct Student s[N];
	int i,p;

	for(i=0; i<N; i++){
	printf("����ѧ�� %d ��ѧ�� ���� ��4�ſεĳɼ���",i+1);
	scanf("%s%s%d%d%d%d",&s[i].id,&s[i].name,&s[i].s1,&s[i].s2,&s[i].s3,&s[i].s4);
	s[i].sum_s=(s[i].s1+s[i].s2+s[i].s3+s[i].s4);
}
/* ���ÿ��ѧ�����ܳɼ� */
	printf(" ѧ�� �ܳɼ�\n");
	for(i=0; i<N; i++)
	printf("%8s%8.1f\n\n",s[i].id,s[i].sum_s);
/* �Ƚϳɼ�*/ 
	p=0;
	for(i=0; i<N; i++)
	if(s[i].sum_s>s[p].sum_s)
	p=i;
/* ����ܳɼ���ߵ�ѧ����Ϣ */
	printf(" ѧ�� ����   �ɼ�1   �ɼ�2   �ɼ�3   �ɼ�4   �ܳɼ�\n");
	printf("%8s%8s%8d%8d%8d%8d%8.1f\n",s[p].id,s[p].name,s[p].s1,s[p].s2,s[p].s3,s[p].s4,s[p].sum_s);
	return 0;
}