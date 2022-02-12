#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int cnt=0;
        string s;
        cin>>s;
        for(j=1; j<s.size(); j++)
        {
            if(s[j-1]==s[j])
                cnt++;
            else
                continue;
        }
        cout<<cnt<<endl;
    }
}
