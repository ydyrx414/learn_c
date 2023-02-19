/************************
���ƣ�.c
������201914460150 �ನ
���ڣ� 
*************************/
#include<iostream>
#define INF 65535
#define MAXVEX 100
#define TRUE 1
#define FALSE 0

using namespace std;

typedef int VertexType;
typedef int EdgeType;
typedef int Boolean;
Boolean visited[MAXVEX];

typedef struct {
    VertexType vexs[MAXVEX];
    EdgeType arc[MAXVEX][MAXVEX];
    int numVertexs, numEdges;
}MGraph;

//����������ͼ���ڽӾ����ʾ
void CreateMGraph(MGraph *G)
{
    int i, j, k, w;
    printf("���붥�����ͱ�����\n");
    cin>>G->numVertexs>>G->numEdges;
    printf("���붥�㣺\n");
    for (i = 0; i < G->numVertexs; ++i)
        cin>>G->vexs[i];
    for (i = 0; i < G->numVertexs; ++i)
        for (j = 0; j < G->numVertexs; ++j) {
            if(i==j)
                G->arc[i][j] = 0;
            else
                G->arc[i][j] = INF;
        }           
    for (k = 0; k < G->numEdges; ++k) {
        printf("����ߣ�vi��vj���ϵ��±�i���±�j��Ȩw��\n");
        cin>>i>>j>>w;
        G->arc[i][j] = w;
        G->arc[j][i] = G->arc[i][j];//����ͼ
    }
}

//�ڽӾ����������ȵݹ��㷨
void DFS(MGraph G, int i)
{
    int j;
    visited[i] = TRUE;
    cout<<G.vexs[i]<<' ';
    for (j = 0; j < G.numVertexs; ++j)
        if (G.arc[i][j] != INF && !visited[j] && G.arc[i][j] != 0)
            DFS(G, j);
}

//�ڽӾ������ȱ�������
void DFSTraverse(MGraph G)
{
    int i;
    for (i = 0; i < G.numVertexs; ++i)
        visited[i] = FALSE;     //��ʼ���ж���״̬����δ����״̬
    for (i = 0; i < G.numVertexs; ++i)
        if (!visited[i]) //��δ���ʵĶ������DFS,������ͨͼ��ֻ��ִ��һ��
            DFS(G, i);
}

int main()
{
    MGraph G;
    CreateMGraph(&G);
    printf("���Ȩֵ����\n");
    for (int i = 0; i < G.numVertexs; ++i) {
        for (int j = 0; j < G.numVertexs; ++j)
            cout << G.arc[i][j] << ' ';
        cout << endl;
    }
    printf("������ȱ��������\n");
    DFSTraverse(G);
}