#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main()
{
    long long int n,m,i,j,a,b,k,p,maxx=-990;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        v.push_back(0);

            }
            for(j=1;j<=m;j++)
            {
                cin>>a>>b>>k;
                v[a-1]+=k;
                v[b]-=k;

            }
            for(p=1;p<n;p++)
            {
                v[p]=v[p-1]+v[p];
            }
            for(i=0;i<n;i++)
            {
                maxx=max(maxx,v[i]);
            }
            cout<<maxx;

}
