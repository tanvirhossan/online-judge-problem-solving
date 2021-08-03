#include<bits/stdc++.h>
using namespace std;
vector<int>v[26];
int a[30];
int main()
{
    int i,n,m,j,q,k,l;
    string s,s1;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        v[s[i]-'a'].push_back(i);
    }
    cin>>m;
    for(j=1;j<=m;j++)
    {
        q=-1;
        cin>>s1;
        for(k=0;k<s1.size();k++)
        {
            q=max(v[s1[k]-'a'][a[s1[k]-'a']],q);

            a[s1[k]-'a']++;
        }
        for(l=0;l<26;l++)
        {
            a[l]=0;
        }
        cout<<q+1<<endl;
    }
    return 0;


}
