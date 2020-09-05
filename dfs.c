#include<stdio.h>
void read_adj(int adj[10][10])
{
int u,v;
printf("enter edges ending with 0.0");
scanf("%d%d",&u,&v);
while(u!=0)
{
adj[u][v]=1;
adj[v][u]=1;
scanf("%d%d",&u,&v);
}
}
void dfs(int adj[10][10],int n,int visited[],int v)
{
int u;
visited[v]=1;
printf("%d",v);
for(u=1;u<=n;u++)
{
if(adj[v][u]==1&&visited[u]!=1)
{
dfs(adj,n,visited,u);
}
}
}
int main()
{
int adj[10][10],n,i,visited[10],v;
printf("enter no.f edges");
scanf("%d",&n);
read_adj(adj);
for(i=1;i<=n;i++)
{
visited[i]=0;
}
printf("dfs order");
dfs(adj,n,visited,1);
}


