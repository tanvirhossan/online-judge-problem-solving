#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,j,k,t;
    int arr[205];
    cin>>q;
    for(k=1; k<=q; k++)
    {
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            int cnt=0;
            t=i;
            for(j=1; j<=n; j++)
            {
                t=arr[t]-1;
                cnt++;
                if(t==i)
                {
                    cout<<cnt<<" ";
                    break;
                }


            }

        }
        cout<<endl;
    }
    return 0;

}

