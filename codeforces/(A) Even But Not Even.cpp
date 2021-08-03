#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int p,t,i,ln,j,arr[3];
    cin>>t;
    for(p=1; p<=t; p++)
    {
        int cnt=0;
        cin>>ln;
        cin>>str;
        if(ln<2)
            cout<<"-1"<<endl;
        else
        {

            for(i=ln-1; i>=0; i--)
            {
                if(str[i]%2!=0)
                {
                    cnt++;
                    arr[cnt]=i;
                    if(cnt==2)
                        break;

                }
            }
            if(cnt<2)
                cout<<"-1"<<endl;
            else
            {
                for(j=arr[2]; j<=arr[1]; j++)
                {
                    cout<<str[j];
                }
                cout<<endl;
            }
        }

    }
    return 0;
}

