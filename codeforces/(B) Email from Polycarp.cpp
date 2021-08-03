#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,i,j=0,z,lna,lnb;
    string a,b;
    cin>>t;
    for(p=1; p<=t; p++)
    {
        int ck=0;
        j=0;
        cin>>a;
        cin>>b;
        lna= a.size();
        lnb= b.size();
        if(lnb<lna)
        {
           // cout<<"k"<<endl;
            ck=1;
        }
        else
        {
            if(b[0]==a[0])
            {

                for(i=1; i<lnb; i++)
                {
                    if(j<lna-1)
                    {
                        if(b[i]==a[j]&&b[i]==a[j+1])
                        {
                            j++;
                            continue;
                        }
                        else if(b[i]==a[j])
                            continue;
                        else if(b[i]==a[j+1])
                        {
                            j++;
                            continue;
                        }
                        else
                        {
                            ck=1;
                            //cout<<"l"<<endl;
                            break;
                        }
                    }
                    else
                    {
                        if(b[i]==a[j])
                            continue;
                        else
                        {
                            //cout<<i<<" "<<j<<endl;
                            //cout<<"m "<<b[i]<<" "<<a[j]<<endl;
                            ck=1;
                            break;
                        }
                    }
                }
            }

            else
                ck=1;

        }
       // cout<<j<<" "<<ck<<"\n";
        if(j==lna-1&&ck==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
