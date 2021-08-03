#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a!=0&&d!=0&&a==d)||(a==0&&c==0&&d==0))
        cout<<"1";
    else
        cout<<"0";
    return 0;
}
