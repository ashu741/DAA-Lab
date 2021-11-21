#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dead[n],time[n],i;
    for(i=0;i<n;i++)
    {
        cin>>time[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>dead[i];
    }
    vector<pair<int,int>> out;
    for(i=0;i<n;i++)
    {
        out.push_back({time[i],dead[i]});
    }
    sort(out.begin(),out.end());
    int count=0,t,d,cur_end=0,st=0;
    i=0;
    vector<int> res;
    for(auto x: out)
    {
        i++;
        t=x.first;
        d=x.second;
        if(d>cur_end&&st<d)
        {
            count++;
            res.push_back(i);
            st+=t+1;
            cur_end+=t;
        }

    }
    cout<<endl;
    for(auto x:out)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    cout<<endl<<count<<endl;
    for(auto x:res)
        cout<<x<<" ";
}