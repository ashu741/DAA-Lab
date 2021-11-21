#include<bits/stdc++.h>
using namespace std;
void show(int dist[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(dist[i][j]==INT_MAX)
                cout<<"INF ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
void floyd(int graph[][100],int n)
{
    int dist[n][100],i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            dist[i][j]=graph[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(dist[i][j]>(dist[i][k]+dist[k][j]) &&(dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX))
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    show(dist,n);
}
int main()
{
    int n,i,j;
    cin>>n;
    int graph[n][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]<0)
                graph[i][j]=INT_MAX;
        }
    }
    floyd(graph,n);
}