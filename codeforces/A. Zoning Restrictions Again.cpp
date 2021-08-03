#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,l,r,x,t,p,k,i,j,sum=0;
    int arr[51];
    scanf("%d %d %d",&n,&h,&m);
    for(j=0; j<n; j++)
    {
        arr[j]=h;
    }

    for(i=1; i<=m; i++)
    {
        scanf("%d %d %d",&l,&r,&x);
        for(k=l; k<=r; k++)
        {
            if(x<arr[k-1])
                arr[k-1]=x;
        }
    }

    for(p=0; p<n; p++)
    {
        sum+=(arr[p]*arr[p]);
    }
    //cout<<sum<<"\n";
    printf("%d\n",sum);
    return 0;
}
