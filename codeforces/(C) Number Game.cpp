#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,r;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int ck=1;
        cin>>n;
        if(n==1)
            cout<<"FastestFinger"<<endl;
        else if(n==2||(n%2!=0))
            cout<<"Ashishgup"<<endl;
        else
        {
            for(j=3; j*j<=n; j++)
            {
                r=n/j;
                if(((n%j==0)&&(j%2!=0))||((n%j==0)&&(r%2!=0)))
                {
                    ck=0;
                    break;
                }
            }
            if(ck==0)
                cout<<"Ashishgup"<<endl;
            else
                cout<<"FastestFinger"<<endl;


        }
    }
    return 0;
}

