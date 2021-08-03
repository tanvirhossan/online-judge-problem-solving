#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,a,b,dif,res5,rem5,res2,rem2;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        dif=a-b;
        if(dif<0)
            dif=-dif;
          res5=dif/5;
          rem5=dif%5;
          res2=rem5/2;
           rem2=rem5%2;
           if(dif==0)
            cout<<dif<<endl;
           else
            cout<<res5+res2+rem2<<endl;
    }
    return 0;

}

