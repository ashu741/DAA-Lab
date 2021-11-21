#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,e1,e2;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    priority_queue<int, vector<int>,greater<int>> min_heap;
    for(i=0;i<n;i++)
    {
        min_heap.push(a[i]);
    }
    int ans=0;
    while(min_heap.size()>1)
    {
        e1=min_heap.top();
        min_heap.pop();
        e2=min_heap.top();
        min_heap.pop();
        ans+=e1+e2;
        min_heap.push(e2+e1);
    }
    cout<<endl<<ans;
}