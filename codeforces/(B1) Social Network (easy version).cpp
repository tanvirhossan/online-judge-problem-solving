#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>m;
vector<long long int>v;
queue<long long int>q;
int main()
{
    long long int n,k,id,p,l,i,j,t;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>id;
        if(m[id]!=0)
            continue;
        else
        {
            m[id]=1;
            q.push(id);
            if(q.size()>k)
            {
                l=q.front();
                m[l]=0;
                q.pop();
            }
        }
    }
    cout<<q.size()<<endl;
    int sz = q.size();
    for(j=1; j<=sz; j++)
    {
        p=q.front();
        v.push_back(p);
        q.pop();
    }
    for(t=v.size()-1; t>=0; t--)
    {
        cout<<v[t]<<" ";
    }


    return 0;
}

