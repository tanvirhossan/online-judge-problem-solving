#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,int>m;
int main()
{
    int i,j,n,z,cnt=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>z;
        v.push_back(z);
        m[v[i]]=i;
    }
    for(j=0; j<n; j++)
    {
        if(v[j]==j+1)
            continue;
        else
        {
            v[m[j+1]]=v[j];
            m[v[j]]=m[j+1];
            v[j]=j+1;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

