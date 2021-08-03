#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sz,ck;
    string s;
    cin>>s;
    sz=s.size();
    //cout<<sz;
    if(sz%2==0)
        cout<<sz/2;
    else
    {
        for(i=1;i<sz;i++)
        {
            if(s[i]=='1')
            {
                ck=1;
                break;
            }
            else
                ck=0;


        }
        if(ck==1)
        {
             cout<<sz/2+1;
        }
        else
            cout<<sz/2;
    }
    return 0;

}

