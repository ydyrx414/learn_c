/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>
void PAN_Count(void);

int main(int argc, char** argv)
{
	//�ж��Ƿ���� 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_Count();
		
		printf("�������㣿������1��������0:");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
	}
}
void PAN_Count(void)
{
	//�������
	/* ��ѣ�CostManagement��ռ15%��CostManagementRatio��
	������ѣ�CostLabor��ռ60%��CostLaborRatio����
	��ʩ�豸ʹ�÷ѣ�CostFacility��ռ25%��CostFacilityRatio��*/
	float Budget,CostManagement,CostManagementRatio,CostLabor;
	float CostLaborRatio,CostFacility,CostFacilityRatio;
	
	CostManagementRatio = 0.15;
	CostLaborRatio = 0.6;
	CostFacilityRatio = 0.25;
	
	//��ǰ��ֵ
 	Budget = 0;
	
	//��ȡ�û����� 
	printf("��������Ŀ���ѣ���λ����Ԫ����");
	scanf("%f",&Budget);
	
	//�ж������Ƿ���� 
	if(Budget <= 0){
		printf("��Ŀ���Ѳ���С��0��");
	}
	else{
		CostManagement = Budget * CostManagementRatio; 
		CostLabor = Budget * CostLaborRatio; 
		CostFacility = Budget * CostFacilityRatio; 
		
		
		printf( "��Ŀ�ܾ���:       %10.4f ��Ԫ\n", Budget );
		printf( "  �����(15%%):    %10.4f ��Ԫ\n", CostManagement );
		printf( "  �����(60%%):    %10.4f ��Ԫ\n", CostLabor );
		printf( "  �豸��ʩ��(25%%):%10.4f ��Ԫ\n", CostFacility );
	}
}