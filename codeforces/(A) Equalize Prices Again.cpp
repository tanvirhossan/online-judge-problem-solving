#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,ar[100000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double sum=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>ar[j];
            sum=sum+ar[j];
        }

        //cout<<ceil(sum/n)<<endl;
        printf("%.0lf\n", ceil(sum/n));
    }
    return 0;

}
