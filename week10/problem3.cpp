#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int median;
    if(n%2==0)
    median=(a[n/2]+a[n/2+1])/2;
    else
    median=a[n/2];
    int flag=0,cc=0,j;
    for(i=0;i<n;i++)
    {
        cc=1;
        for(j=i+1;j<n;j++)
        {
            
            if(a[i]==-99)
                break;
            if(a[i]==a[j])
            {
                cc++;
                a[j]=-99;
            }
        }
        if(cc>n/2)
        {
            flag=1;
        }
    }
    if(flag==0)
        cout<<"no\n";
    else
        cout<<"yes\n";
    cout<<median;
}
