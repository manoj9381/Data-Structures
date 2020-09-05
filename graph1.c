#include<stdio.h>
#include<conio.h>
void dfs(int );
int g[10][10];
int visited[10]={0},n;
void main()
{
	int i,j;
	printf("enter no of vertices");
	scanf("%d",&n);
	printf("enter adjacency matrix of graph\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&g[i][j]);
			}
	}
	printf("dfs traversal");
	dfs(1);
}
void dfs(int i)
{
	int j;
	printf("%d",i);
	visited[i]=1;
	for(j=1;j<=n;j++)
	{
		if(visited[j]==0 && g[i][j]==1)
		{
			dfs(j);
		}
	}
}
