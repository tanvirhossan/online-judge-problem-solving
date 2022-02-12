#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main()
{
    long long int n,f,i,j,x,z,y,pre=0,p=0,m=1;
    cin>>n>>f;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    /*y=n;
    if(n%f!=0)
        z=n/f+1;
    else
        z=n/f;
    for(i=1; i<=z; i++)
    {
        if(y>=f)
        {
            for(j=1; j<=f; j++)
            {
                p=p+(pre+1)*v[y-1];
                y--;

            }

            pre++;
        }
        else
        {
            for(j=y-1; j>=0; j--)
            {
                p=p+(pre+1)*v[j];
            }
        }
    }
    cout<<p;
} */
for(i=n-1;i>=0;i--)
{
    pre++;
    p=p+m*v[i];
    if(pre==f)
    {
        pre=0;
        m++;
    }
}
cout<<p;
}
