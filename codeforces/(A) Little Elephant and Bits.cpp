#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,i,j,x;
    string a,b="";
    cin>>a;
    s=a.size();

    for(i=0; i<s; i++)
    {
        if(a[i]=='0')
        {
            x=i;
            break;
        }
        else
        {

            if(i==s-1&&a[i]=='1')
                break;
            else
            {
                b+=a[i];
                cout<<b[i];
            }
        }
    }

    if(x<s-1)
    {
        for(j=x; j<s-1; j++)
        {
            b+=a[j+1];
            cout<<b[j];
        }
    }
    return 0;
}
