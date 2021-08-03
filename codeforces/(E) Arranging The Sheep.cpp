#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,k,p;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        vector<long long int>v;
        long long int cnt=0,sum=0;
        string s;
        cin>>n;
        cin>>s;
        for(j=0; j<n; j++)
        {
            if(s[j]=='*')
            {
                v.push_back(j+1);
                cnt++;
            }
        }

        k=cnt/2;
        for(p=0; p<cnt; p++)
        {
            if(k>p)
                sum=sum+v[k]-v[p];
            else
                sum=sum+v[p]-v[k];
        }
        if(cnt%2==0)
        {
            sum=sum-k*k;
        }
        else
        {
            sum=sum-k*(k+1);
        }
        cout<<sum<<endl;
    }
    return 0;
}

