/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	int a[20];
	int k,flag;
	//���� 
	printf("����20���������ո�ֿ����س�������\n");
	for(k=0;k<20;k++){
		scanf("%d",&a[k]);
	}
	
	flag=0;
	//������� 
	while(1){
	for(k=0;k<20;k++){
		if(a[k]==a[k+1] && a[k+1]==a[k+2]&&a[k+2]==a[k+3]){
			printf("���� %d ��[%d,%d]����������4�Ρ�\n",a[k],k,k+3); 		
			flag=1;
			break;
			}
		}
		break; 	
	}
	if(flag==0) printf("û����������4�ε�����\n"); 		
			
	return 0;
}