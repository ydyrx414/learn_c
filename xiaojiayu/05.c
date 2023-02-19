/************************
名称：.c
姓名：201914460150 余波
日期： 
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

//建立无向网图的邻接矩阵表示
void CreateMGraph(MGraph *G)
{
    int i, j, k, w;
    printf("输入顶点数和边数：\n");
    cin>>G->numVertexs>>G->numEdges;
    printf("输入顶点：\n");
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
        printf("输入边（vi，vj）上的下标i，下标j和权w：\n");
        cin>>i>>j>>w;
        G->arc[i][j] = w;
        G->arc[j][i] = G->arc[i][j];//无向图
    }
}

//邻接矩阵的深度优先递归算法
void DFS(MGraph G, int i)
{
    int j;
    visited[i] = TRUE;
    cout<<G.vexs[i]<<' ';
    for (j = 0; j < G.numVertexs; ++j)
        if (G.arc[i][j] != INF && !visited[j] && G.arc[i][j] != 0)
            DFS(G, j);
}

//邻接矩阵的深度遍历操作
void DFSTraverse(MGraph G)
{
    int i;
    for (i = 0; i < G.numVertexs; ++i)
        visited[i] = FALSE;     //初始所有顶点状态都是未访问状态
    for (i = 0; i < G.numVertexs; ++i)
        if (!visited[i]) //对未访问的顶点调用DFS,若是连通图，只会执行一次
            DFS(G, i);
}

int main()
{
    MGraph G;
    CreateMGraph(&G);
    printf("输出权值矩阵：\n");
    for (int i = 0; i < G.numVertexs; ++i) {
        for (int j = 0; j < G.numVertexs; ++j)
            cout << G.arc[i][j] << ' ';
        cout << endl;
    }
    printf("深度优先遍历输出：\n");
    DFSTraverse(G);
}