#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,n,b,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k;
        if(n>=k)
        {
            if((n%2!=0)&&(k%2==0))
                cout<<"no"<<endl;
            else if((n%2==0)&&(k%2==0)||(n%2!=0)&&(k%2!=0))
            {
                cout<<"yes"<<endl;
                for(a=1; a<k; a++)
                {
                    cout<<"1"<<" ";
                }
                cout<<n+1-k<<endl;
            }
            else
            {
                if(k<=n/2)
                {
                    cout<<"yes"<<endl;
                    for(b=1; b<k; b++)
                    {
                        cout<<"2"<<" ";
                    }
                    cout<<(n-2*(k-1))<<endl;
                }
                else
                    cout<<"no"<<endl;
            }
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}


