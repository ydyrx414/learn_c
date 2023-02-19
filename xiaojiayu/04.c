#include <stdlib.h>
#include <stdio.h>
typedef int ele_t;
typedef struct _Node
{
    struct _Node *lchild;
    struct _Node *rchild;
    ele_t data;
} Node, *Tree;
Node *newNode(ele_t data)
{
    Node *result = (Node *)malloc(sizeof(Node));
    result->data = data;
    return result;
}
void deleteNode(Node *pNode)
{
    free(pNode);
}
void visit(ele_t data)
{
    printf("%d ", data);
}
void preorder(Tree t)
{
    if (t)
    {
        visit(t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
void levelOrder(Tree t)
{
    Node **pnodes = (Node **)malloc(sizeof(Node *) * 100);
    pnodes[0] = t;
    int first = 0;
    int rear = 1;
    while (first < rear)
    {
        visit(pnodes[first]->data);
        if (pnodes[first]->lchild)
        {
            pnodes[rear++] = pnodes[first]->lchild;
        }
        if (pnodes[first]->rchild)
        {
            pnodes[rear++] = pnodes[first]->rchild;
        }
        first++;
    }
}
void inorder(Tree t)
{
    if (t)
    {
        inorder(t->lchild);
        visit(t->data);
        inorder(t->rchild);
    }
}
void aorder(Tree t)
{
    if (t)
    {
        aorder(t->lchild);
        aorder(t->rchild);
        visit(t->data);
    }
}
size_t depth(Tree t)
{
    if (!t)
    {
        return 0;
    }
    size_t ldepth = depth(t->lchild);
    size_t rdepth = depth(t->rchild);
    return (ldepth > rdepth ? ldepth : rdepth) + 1;
}

size_t nodeCount(Tree t)
{
    if (t)
    {
        return 1 + (nodeCount(t->lchild) + nodeCount(t->rchild));
    }
    else
    {
        return 0;
    }
}
int main(int argc, char **argv)
{
    Tree t = newNode(0);
    t->lchild = newNode(1);
    t->rchild = newNode(2);
    t->lchild->lchild = newNode(3);
    t->lchild->rchild = newNode(4);
    t->rchild->rchild = newNode(5);
    preorder(t);
    printf("\n");
    inorder(t);
    printf("\n");
    aorder(t);
    printf("\n");
    levelOrder(t);
    printf("\n");
    printf("depth: %d\n", depth(t));
    printf("node: %d\n", nodeCount(t));
    return 0;
}