#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,no,a,b,mx,mn,mxdf,mndf;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>no>>a>>b;
        mx=max(a,b);
        mn=min(a,b);
        mxdf=n-mx;
        mndf=mn-1;
        if(no>(mxdf+mndf))
            cout<<mx-mn+mxdf+mndf<<endl;
        else
            cout<<mx-mn+no<<endl;


    }
}
