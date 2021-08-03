#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n,i,p,one=0,two,res;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&p);
        a[p]++;
    }
    two=a[2]/2;
    if(a[1]>a[3])
        one=a[1]-a[3];
    if(a[2]%2!=0)
    {
        one=one+2;
    }
    if(one%4==0)
    {
        one=one/4;
    }
    else
    {
        one=one/4;
        one++;
    }
    res=a[4]+a[3]+two+one;
    printf("%d",res);
    return 0;
}
