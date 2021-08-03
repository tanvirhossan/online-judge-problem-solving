#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,q,n;
    cin>>q;
    for(i=1; i<=q; i++)
    {
        cin>>n;
        if(n==2)
            cout<<"2"<<endl;
        else if(n%2==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}

