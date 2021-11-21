#include<bits/stdc++.h>
using namespace std;
bool comp(pair<double,double> a,pair<double,double> b)
{
    double x=(double) a.first/a.second;
    double y=(double) b.first/b.second;
    return x>y;
}
int main()
{
    int n;
    cin>>n;
    int weight[n],value[n],i,max_cap;
    for(i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>value[i];
    }
    cin>>max_cap;
    vector<pair<double,double>> lis(n);
    for(i=0;i<n;i++)
    {
        lis[i].first=value[i];
        lis[i].second=weight[i];
    }
    sort(lis.begin(),lis.end(),comp);
    double p,q;
    double ans=0;
    i=0;
    vector<pair<int,int>> res;
    for(auto x:lis)
    {
        i++;
       p=x.first;
       q=x.second;
       if(max_cap>=q)
       {
           ans+=p;
           max_cap-=q;
        res.push_back({i,q});
           continue;
       }
       double v=(double) p/q;
       ans+=max_cap*v;
       res.push_back({i,max_cap});
       break;
    }
    cout<<endl;
    cout<<ans<<endl;
    for(auto x:res)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }



}