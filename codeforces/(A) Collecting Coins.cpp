#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p,i,t,m,sum,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>p;
        m=max(max(a,b),c);
        sum=(3*m)-(a+b+c);
        if(sum>p)
            cout<<"NO"<<endl;
        else
        {
            r=p-sum;
            if(r%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}

