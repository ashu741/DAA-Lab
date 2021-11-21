#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start[n],end[n],i;
    for(i=0;i<n;i++)
    {
        cin>>start[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>end[i];
    }
    vector<pair<int,int>> time;
    for(i=0;i<n;i++)
    {
        time.push_back({end[i],start[i]});
    }
    sort(time.begin(),time.end());
    vector<int> res;
    int count=0,curr_end=-1,ce,cs;
    i=0;
    for(auto x:time)
    {
        i++;
        ce=x.first;
        cs=x.second;
        if(cs>curr_end)
        {
            curr_end=ce;
            count++;
            res.push_back(i);
        }
    }
    cout<<endl<<count<<endl;
    for(auto x:res)
    {
        cout<<x<<" ";
    }
}