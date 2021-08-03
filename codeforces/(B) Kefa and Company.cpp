#include<bits/stdc++.h>
using namespace std;
pair<int,int>pr[100005];
long long int arr[100005];
long long int ar[100005];
int main()
{
    long long int n,d,i,j=0,sum=0;
    cin>>n>>d;
    for(i=0; i<n; i++)
    {
        cin>>pr[i].first>>pr[i].second;
        //cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
    sort(pr,pr+n);
    for(i=0; i<n; i++)
    {
        sum=sum+pr[i].second;
        arr[i]=sum;
        //cout<<arr[i]<<endl;
    }
    for(i=0; i<n; i++)
    {
        if(pr[i].first-pr[j].first<d)
        {
            if(j==0)
                ar[j]=arr[i];
            else
                ar[j]=arr[i]-arr[j-1];

        }
        else
        {
            j++;
            i--;
        }
    }
    sort(ar,ar+j+1);
    cout<<ar[j];

    return 0;

}

