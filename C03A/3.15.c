/************************
名称：.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
void PAN_Count(void);

int main(int argc, char** argv)
{
	//判断是否继续 
	int ContinueWill = 1;
	
	while(ContinueWill){
		
		PAN_Count();
		
		printf("继续计算？是输入1，否输入0:");
		scanf("%d",&ContinueWill);
		
		if(!ContinueWill) break;
	}
}
void PAN_Count(void)
{
	//定义变量
	/* 理费（CostManagement）占15%（CostManagementRatio）
	，劳务费（CostLabor）占60%（CostLaborRatio），
	设施设备使用费（CostFacility）占25%（CostFacilityRatio）*/
	float Budget,CostManagement,CostManagementRatio,CostLabor;
	float CostLaborRatio,CostFacility,CostFacilityRatio;
	
	CostManagementRatio = 0.15;
	CostLaborRatio = 0.6;
	CostFacilityRatio = 0.25;
	
	//提前赋值
 	Budget = 0;
	
	//获取用户输入 
	printf("请输入项目经费（单位：万元）：");
	scanf("%f",&Budget);
	
	//判断输入是否合理 
	if(Budget <= 0){
		printf("项目经费不能小于0！");
	}
	else{
		CostManagement = Budget * CostManagementRatio; 
		CostLabor = Budget * CostLaborRatio; 
		CostFacility = Budget * CostFacilityRatio; 
		
		
		printf( "项目总经费:       %10.4f 万元\n", Budget );
		printf( "  管理费(15%%):    %10.4f 万元\n", CostManagement );
		printf( "  劳务费(60%%):    %10.4f 万元\n", CostLabor );
		printf( "  设备设施费(25%%):%10.4f 万元\n", CostFacility );
	}
}