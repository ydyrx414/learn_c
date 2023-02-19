/************************
名称：02.c
姓名：201914460150 余波
日期： 
*************************/
#include <stdio.h>
#include <stdlib.h>
typedef struct _Goods
{
    char *name;    
    int inventory; 
    int bid;       
    int price;     
} Goods;

int main(int argc, char **argv)
{
	int size = sizeof(Goods);
	void* pointer = malloc(size);
    Goods* goods = (Goods*)pointer; 
    
    goods->name = "cake";
    goods->inventory = 100;
    goods->bid = 50;
    goods->price = 80;

    int profit = (goods->price - goods->bid) * goods->inventory;
    printf("The name of goods : %s\n", goods->name);
    printf("Inventory : %d\n", goods->inventory);
    printf("Bid : %d\n", goods->bid);
    printf("Price : %d\n", goods->price);
    printf("Profit: %d\n", profit);

    return 0;
}