#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    int arr[100];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int cnt=0,sum=0;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        for(j=0; j<n; j++)
        {
            sum=sum+arr[j];
            if(arr[j]==0)
            {
                arr[j]=1;
                cnt++;
                sum=sum+arr[j];
            }

        }
        if(sum==0)
            cout<<cnt+1<<endl;
        else
            cout<<cnt<<endl;
    }
    return 0;
}


