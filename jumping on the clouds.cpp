#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cnt=0,k,n,ar[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(ar[i+2]==0)
        {
            i++;
            cnt++;

        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt;
}
