#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,str,intl,exp,i,sum,res,sub;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str>>intl>>exp;
        sum=str+exp;
        if(sum<=intl)
            cout<<"0"<<endl;
        else
        {
            sub=(sum-intl);
            res=sub/2;
            if(sub%2!=0)
                res=res+1;
            else
                res=res;
            if(res<=exp+1)
                cout<<res<<endl;
            else
                cout<<exp+1<<endl;
        }

    }
    return 0;

}

