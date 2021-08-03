#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,l,r,h=1,d=1,ans1=1,ans2=1;
    cin>>n>>l>>r;
    if(l==1)
        cout<<n*l<<" ";
    else
    {
    for(i=1;i<l;i++)
    {
        d=2*d;
        ans1=ans1+d;
    }
    ans1=ans1+n-l;
    cout<<ans1<<" ";
    }
    if(r==1)
        cout<<n*r<<" ";
    else
    {
        for(i=1;i<r;i++)
    {
        h=2*h;
        ans2=ans2+h;
    }
    ans2=ans2+h*(n-r);
    cout<<ans2<<" ";
    }
    return 0;
}

