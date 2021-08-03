#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,t;
    scanf("%d %d",&n,&m);
    if(n%2==0)
    {
        r=n/2;
        if(m==0)
        printf("1");
        else if(m<=r)
            printf("%d",m);
        else
            printf("%d",n-m);

    }
    else
        {
        r=n/2;
        t=r+1;
        if(m==0)
        printf("1");
        else if(m==t)
            printf("%d",r);
        else if(m<=r)
            printf("%d",m);
        else
            printf("%d",n-m);

    }
     return 0;
}
