#include<bits/stdc++.h>
using namespace std;
map<int, int>mp;
//map<int, int> :: iterator j;
int main()
{
    int i,n,j,r=0,ar[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    for(j=0; j<mp.size(); j++)
    {
        r=r+mp[j]/2;
    }
    cout<<r;
}
