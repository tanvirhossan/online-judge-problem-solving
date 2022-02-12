#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sz,ck=0,cnt=0,r,c,cnt1=0;
    string s;
    cin>>s>>n;
    sz=s.size();
    for(i=0; i<sz; i++)
    {
        //if(ck==n)
        //break;
        if(s[i]=='a')
            //{
            cnt++;
        //ck++;
        //}
        // else if(i==sz-1)
        // {
        //  i=-1;
        // ck++;
        //}
        // else
        // ck++;
        //cout<<i;

    }
    if(n>sz)
    {
        r=n/sz;
        c=r*sz;
        n=n-c;
        cnt=r*cnt;
        for(i=0; i<n; i++)
        {
            if(s[i]=='a')
                cnt++;
        }

        cout<<cnt;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(s[i]=='a')
                cnt1++;
        }

        cout<<cnt1;
    }
    return 0;
}
