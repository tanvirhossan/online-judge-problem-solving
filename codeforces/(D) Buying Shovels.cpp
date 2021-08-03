#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,p,f,sq,a[100000],b[100000],m,rslt;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k;
        if(n<=k)
            cout<<"1"<<endl;
        else
        {
            sq=sqrt(n);
            int q=0,l=0,ck=0;
            for(j=2;j<=sq;j++)
            {
                if(n%j==0)
                    {
                        a[q]=j;
                        b[l]=n/j;
                        q++;
                        l++;
                    }
            }
            int m=l+q-1;
            for(p=q;p<=m;p++)
            {
                l--;
                a[p]=b[l];
            }
            for(f=m;f>=0;f--)
            {
                if(a[f]<=k)
                {
                    ck=1;
                    rslt=n/a[f];
                    break;
                }
                else
                    ck=0;
            }
            if(ck==1)
                cout<<rslt<<endl;
            else
                cout<<n<<endl;
        }
    }
    return 0;
}

