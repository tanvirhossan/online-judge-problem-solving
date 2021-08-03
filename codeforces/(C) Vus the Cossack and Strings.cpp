#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int c1=0,c2=0;
    for(int i=0;i<b.size();i++)
    {
        if(a[i]=='1')c1++;
        if(b[i]=='1')c2++;
    }
    int ans=0;
    if(c1%2==c2%2)
        ans++;
    for(int i=b.size();i<a.size();i++)
    {
        if(a[i]=='1')
            c1++;
        if(a[i-b.size()]=='1')
            c1--;
        if(c1%2==c2%2)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
