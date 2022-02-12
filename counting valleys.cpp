#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n,cnt=0,r=0;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='U')
            cnt++;
        else
            cnt--;
            if(s[i]=='U'&&cnt==0)
                r++;
    }
    cout<<r;
    return 0;
}
