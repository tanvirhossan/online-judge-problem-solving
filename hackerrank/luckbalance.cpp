#include<bits/stdc++.h>
using namespace std;
vector<int>a,b,c,d;
int main()
{
    int n,k,i,x,y,j,imk=0,im=0,unim=0,cnt1=0,cnt0=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    for(i=0;i<n;i++)
    {

        if(b[i]==1)
        {
            c.push_back(a[i]);
            cnt1++;
        }
        else
        {
            d.push_back(a[i]);
            cnt0++;
        }
    }
    if(cnt1>0)
    {
    sort(c.begin(),c.end());
    for(i=cnt1-1;i>=0;i--)
    {
        if(k!=0)
        {
            imk=imk+c[i];
            k--;
        }
        else
            im=im+c[i];
    }

}

    if(cnt0>0)
    {
        for(i=0;i<cnt0;i++)
        {
            unim=unim+d[i];
        }
    }
    cout<<imk+unim-im;
}
