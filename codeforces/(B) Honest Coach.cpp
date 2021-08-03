#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,i,j,rslt,a[10000],cs[10000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int mn=10000;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(p=0;p<n-1;p++)
        {
            rslt=a[p+1]-a[p];
            mn=min(mn,rslt);
        }
        cout<<mn<<endl;
    }
    return 0;
}

