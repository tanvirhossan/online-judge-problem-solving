#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,n,i,arr[1000000],mn;
   cin>>t;
   while(t--)
   {
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       mn=arr[n-1];
       int cnt=0;
       for(i=n-2;i>=0;i--)
       {
           if(arr[i]>mn)
            cnt++;
           else
            mn=arr[i];
       }
       cout<<cnt<<endl;
   }
    return 0;
}
