/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Budget,CostManagement,CostLabor,CostFacility;
	float CostManagementRatio,CostLaborRatio,CostFacilityRatio;
	
	CostManagementRatio = 0.15;
	CostLaborRatio = 0.60;
	CostFacilityRatio = 0.25;
	
	printf("��������Ŀ����(��λ����Ԫ):");
	scanf("%f",&Budget);
	
	CostManagement = Budget * CostManagementRatio;
	CostLabor = Budget * CostLaborRatio;
	CostFacility = Budget * CostFacilityRatio;
	
	printf("��Ŀ�ܾ���:%22.4f��Ԫ\n",Budget);
	printf(" �����(15%%):%20.4f��Ԫ\n",CostManagement);
	printf(" �����(60%%):%20.4f��Ԫ\n",CostLabor);
	printf(" ��ʩ�豸��(25%%):%16.4f��Ԫ\n",CostFacility);
	
	return 0;
}