#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main()
{
    int q,n,r,i,j,x,k,sub,rst;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        int cnt=1;
        cin>>n>>r;
        for(j=0;j<n;j++)
        {
           cin>>x;
           arr[j]=x;
        }
        sort(arr,arr+n);
        for(k=n-2;k>=0;k--)
        {
            if(arr[k]==arr[k+1])
                continue;
            else
            {
                sub=cnt*r;
                rst=arr[k]-sub;
                //arr[k]=arr[k]-sub;
                if(rst<=0)
                    break;
                else
                {
                cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
