#include<bits/stdc++.h>
using namespace std;
vector<int>v,r;
int main()
{
    int z,i,n,k,t;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>z;
        v.push_back(z);
    }
    sort(v.begin(),v.end());
    for(i=0; i<n; i++)
    {

        if(i==n-1)
        {
            k=abs(v[i]-v[0]);
            r.push_back(k);
        }
        else
        {
            k=abs(v[i]-v[i+1]);
            r.push_back(k);
        }
    }
    sort(r.begin(),r.end());
    cout<<r[0];
}

