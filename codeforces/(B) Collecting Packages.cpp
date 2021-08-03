#include<bits/stdc++.h>
using namespace std;
pair<int,int>p[10000];
int main()
{
    int t,i,j,m,n,l;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int x=0,y=0,f=0;
         string s;

    cin>>l;
    for(i=0;i<l;i++)
    {
      cin>>p[i].first>>p[i].second;
    }
    sort(p,p+l);
    for(i=0;i<l;i++)
    {
        if(x<=p[i].first&&y<=p[i].second)
        {
            m=p[i].first-x;
            x=p[i].first;
            while(m>0)
            {
                s=s+'R';
                m--;
            }
            n=p[i].second-y;
            y=p[i].second;
             while(n>0)
            {
                s=s+'U';
                n--;
            }

        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl<<s<<endl;
    }
    return 0;
}

