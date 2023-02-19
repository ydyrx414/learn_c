#include <stdlib.h>
#include <stdio.h>

typedef int *ElemType;
typedef int address_t;

typedef struct _Node
{
    ElemType data;
    struct _Node *next;
} Node, *LinkedList;

LinkedList ll_new()
{
    //假设传入参数已经通过检测
    LinkedList list = (LinkedList)malloc(sizeof(struct _Node));
    list->next = list;
    list->data = NULL;
    return list;
}
Node *ll_at(LinkedList list, int index)
{
    if (index == -1)
    {
        return list;
    }
    //假设传入参数已经通过检测
    Node *current = list;
    for (int i = 0; i <= index; i++)
    {
        current = current->next;
    }
    return current;
}
size_t ll_sizeOf(LinkedList list)
{
    //假设传入参数已经通过检测
    address_t headAddress = (int)list;
    address_t currentAddress;
    Node *current = list;
    for (int i = 0; 1; i++)
    {
        current = current->next;
        currentAddress = (int)current;
        if (currentAddress == headAddress)
        {
            return i;
        }
    }
    return 0;
}
Node *ll_endOf(LinkedList list)
{
    //假设传入参数已经通过检测
    int index = ll_sizeOf(list) - 1;
    if (index < 0)
    {
        index = 0;
    }
    return ll_at(list, index);
}
void ll_removeAt(LinkedList list, size_t index)
{
    //假设传入参数已经通过检测
    Node *prev = ll_at(list, index - 1);
    Node *toRemove = prev->next;
    prev->next = toRemove->next;
    free(toRemove);
}
void ll_removeEnd(LinkedList list)
{
    ll_removeAt(list, ll_sizeOf(list) - 1);
}
void ll_add(LinkedList list, ElemType data)
{
    //假设传入参数已经通过检测
    Node *newNode = (Node *)malloc(sizeof(struct _Node));
    newNode->data = data;
    newNode->next = list;

    Node *end = ll_endOf(list);
    end->next = newNode;
}

int f(size_t n, size_t m, size_t start)
{
    LinkedList list = ll_new();

   
    for (int i = 0; i < n; i++)
    {
        ElemType data = (ElemType)malloc(sizeof(int));
        *data = i + 1;
        ll_add(list, data);
    }

    printf("There're %d people.\n", ll_sizeOf(list));

    while (ll_sizeOf(list) > 1)
    {
        size_t toRemove = 0;
        size_t size = ll_sizeOf(list);
        for (int i = 0; i < m; i++)
        {
            toRemove = (toRemove + i) % size;
        }
        printf("killing no.%d (index: %d).\n", *ll_at(list, toRemove)->data, toRemove);
        ll_removeAt(list, toRemove);
    }
    return *list->next->data;
}

int main()
{
	printf("Safe man is no.%d.\n", (f(5, 1, 1)));
}