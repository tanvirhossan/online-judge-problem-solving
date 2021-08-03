#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    float sum=0.0,ans;
    int p[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+((float)p[i]);
    }
    ans=sum/n;
    printf("%f",ans);
    return 0;
}
