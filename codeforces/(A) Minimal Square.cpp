#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            a=a+b;
            a=a*a;
            cout<<a<<endl;
        }
        else if(a>b)
        {
            if(2*b>=a)
            {
                b=4*b*b;
            cout<<b<<endl;
            }
            else
            {
                a=a*a;
                cout<<a<<endl;
            }
        }
        else
        {
                        if(2*a>=b)
            {
                a=4*a*a;
            cout<<a<<endl;
            }
            else
            {
                b=b*b;
                cout<<b<<endl;
            }
        }
    }
    return 0;
}

