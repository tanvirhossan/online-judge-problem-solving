#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,x,a=0,b=0,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            a++;
        else
            b++;
    }
    ans=min(a,b);
    cout<<ans;
    return 0;
}
