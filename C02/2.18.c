/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
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
	
	
	return 0;
}