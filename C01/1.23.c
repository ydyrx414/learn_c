/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>

int main(int argc, char** argv)
{
	float Budget,CostManagement,CostLabor,CostFacility;
	float CostManagementRatio,CostLaborRatio,CostFacilityRatio;
	
	CostManagementRatio = 0.15;
	CostLaborRatio = 0.60;
	CostFacilityRatio = 0.25;
	
	printf("请输入项目经费(单位：万元):");
	scanf("%f",&Budget);
	
	CostManagement = Budget * CostManagementRatio;
	CostLabor = Budget * CostLaborRatio;
	CostFacility = Budget * CostFacilityRatio;
	
	printf("项目总经费:%22.4f万元\n",Budget);
	printf(" 管理费(15%%):%20.4f万元\n",CostManagement);
	printf(" 劳务费(60%%):%20.4f万元\n",CostLabor);
	printf(" 设施设备费(25%%):%16.4f万元\n",CostFacility);
	
	return 0;
}