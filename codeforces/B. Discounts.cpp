#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int cn,i,j,c[1000000],qn,q,sum=0;
    cin>>cn;
    for(i=0;i<cn;i++)
    {
        cin>>c[i];
    }
    sort(c,c+cn);
    for(i=0;i<cn;i++)
    {
        sum=sum+c[i];
    }
    cin>>qn;
    for(j=1;j<=qn;j++)
    {
        cin>>q;
        cout<<sum-c[cn-q]<<"\n";
    }
    return 0;
}
