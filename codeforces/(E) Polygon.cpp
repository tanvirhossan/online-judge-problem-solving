#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,t,n,i,j,l,ck;
    cin>>t;
    for(tt=1; tt<=t; tt++)
    {
        cin>>n;
        string str[n];
        ck=0;
        for(i=0; i<n; i++)
        {
                cin>>str[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(str[i][j]=='0')
                    continue;
                else
                {
                    if((j+1==n)||(i+1==n)||str[i+1][j]=='1'||str[i][j+1]=='1')
                        continue;
                    else
                    {
                        ck=1;
                        break;
                    }
                }
            }
        }
        if(ck==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}

