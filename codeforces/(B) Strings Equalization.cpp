#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,q,ck;
    string str1,str2;
    cin>>q;
    for(t=1; t<=q; t++)
    {
        cin>>str1>>str2;
        for(i=0; i<str1.size(); i++)
        {
            for(j=0; j<str2.size(); j++)
            {
                if(str1[i]==str2[j])
                {
                    ck=1;
                    break;
                }
                else
                    ck=0;

            }
            if(ck==1)
                break;
        }
        if(ck==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}

