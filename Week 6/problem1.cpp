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
    int ver,ed;
    cin>>ver>>ed;
    vector<vector<int>> graph(ver);
    int i,v,u;
    for(i=0;i<ed;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int src,dest;
    cin>>src>>dest;
    if(path(src,dest,graph))
        cout<<"Exixt\n";
    else
        cout<<"doesn't Exist:\t";
}