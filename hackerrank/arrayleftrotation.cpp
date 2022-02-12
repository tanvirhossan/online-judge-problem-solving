#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int main()
{
    int n,i,d,val;
    cin>>n>>d;
    int b[n];
    for(i=0; i<n; i++)
    {
        cin>>val;
        v.push_back(val);
    }
    for(i=0; i<n; i++)
    {
        if((i-d)>=0)
            b[i-d]=v[i];
        else
            b[n-d+i]=v[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}

