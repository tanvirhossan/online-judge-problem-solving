#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,a;
int main()
{
    long long int n,k,z,i,res;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>z;
        v.push_back(z);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-k;i++)
    {
        res=v[k-1+i]-v[i];
        a.push_back(res);
    }
    sort(a.begin(),a.end());
    cout<<a[0];
}
