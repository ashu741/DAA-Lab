#include<bits/stdc++.h>
using namespace std;
bool path(int src,int dest,vector<vector<int>>&graph)
{
    if(src==dest)
        return true;
    int n=graph.size();
    vector<bool> visited(n,false);
    visited[src]=true;
    stack<int> st;
    st.push(src);
    while(!st.empty())
    {
        int a=st.top();
        st.pop();
        cout<<a<<" ";
        for(int x:graph[a])
        {
            if(x==dest)
                return true;
            if(!visited[x])
            {
                visited[x]=true;
                st.push(x);
            }
        }
    }
    return false;
}
int main()
{
    int ver,i,j;
    cin>>ver;
    int arr[ver][ver];
    for(i=0;i<ver;i++)
    {
        for(j=0;j<ver;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> graph;
    
    for(i=0;i<ver;i++)
    {
        for(j=i+1;j<ver;j++)
        {
            if(arr[i][j]==1)
            {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    int src,dest;
    cin>>src>>dest;
    if(path(src,dest,graph))
        cout<<"Exixt\n";
    else
        cout<<"doesn't Exist:\t";
}