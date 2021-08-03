#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[51],i,j,p,rs,sub,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int cnt=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
                cnt++;
        }
        if(cnt%2==0)
            cout<<"yes"<<endl;
        else
        {
         sort(a,a+n);
         for(p=0;p<n-1;p++)
         {
             sub=a[p+1]-a[p];
             if(sub==1)
             {
                 rs=1;
                 break;
             }
             else
                rs=0;

         }
         if(rs==1)
            cout<<"yes"<<endl;
         else
            cout<<"no"<<endl;
    }

    }
    return 0;
}

