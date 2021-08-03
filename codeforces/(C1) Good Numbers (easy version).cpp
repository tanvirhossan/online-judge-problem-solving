#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,n,i,j,a[10000],k,t,res;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>n;
        long long int sum=1,cum=0;
        j=0;
        while(n>sum)
        {
            a[j]=sum;
            //c[j]=cum;
            cum=cum+a[j];
            sum=3*sum;
            //cum=cum+sum;
            j++;
        }
        //a[j]=sum;
        t=j-1;
        if(sum==n)
            cout<<n<<endl;
        else if(cum<n)
            cout<<sum<<endl;
        else if(cum==n)
            cout<<n<<endl;
        else
        {
           for(k=t;k>=0;k--)
           {
            if(cum-a[k]>=n)
            {
                cum=cum-a[k];
                res=cum;
            }

           }
           cout<<res<<endl;
        }
    }
    return 0;
}

