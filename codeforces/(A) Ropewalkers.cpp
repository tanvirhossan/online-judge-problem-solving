#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,fmx,smx,fmn,smn,x,y,h,m,l;
    cin>>a>>b>>c>>d;
    fmx=max(a,b);
    h=max(fmx,c);
    fmn=min(a,b);
    smn=min(fmx,c);
    m=max(fmn,smn);
    l=min(fmn,smn);
    if((m-l)>=d)
        x=0;
        else
            x=d-(m-l);
        if((h-m)>=d)
            y=0;
        else
            y=d-(h-m);
        cout<<x+y;
        return 0;

}
