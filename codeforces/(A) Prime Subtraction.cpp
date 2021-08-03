#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,x,y;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>x>>y;
        if( (x-y) == 1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}

