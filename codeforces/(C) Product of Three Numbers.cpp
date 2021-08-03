#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int xt=0,p=0,q=0,r=0;
        cin>>n;
        for(j=2;j*j<=n;j++)
        {
            if(n%j==0)
            {
                p=j;
                n=n/j;
                break;
            }
        }
        for(j++;j*j<=n;j++)
        {
            if(n%j==0)
            {
                q=j;
                n=n/j;
                if(n==j)
                {
                    xt=1;
                    break;
                }
                else
                {
                    r=n;
                    break;
                }
            }
        }
        if(xt==0&&p>=2&&q>=2&&r>=2)
        {
            cout<<"YES"<<endl;
            cout<<p<<" "<<q<<" "<<r<<endl;
    }
    else
        cout<<"NO"<<endl;

}
 return 0;
}

