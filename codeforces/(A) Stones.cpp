#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,t,ans1,ans2,p,q;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if(c>=2*b)
            cout<<3*b<<endl;
        else
        {
            if(c<=1)
                ans1=0;
            else
            {
                p=c/2;
                ans1=3*p;
                b=b-p;
            }
            if(b>=2*a)
                ans2=3*a;
            else
            {
                if(b<=1)
                    ans2=0;
                else
                {
                    q=b/2;
                    ans2=3*q;
                }
            }
            ans1=ans1+ans2;
            cout<<ans1<<endl;
        }

    }
    return 0;
}

