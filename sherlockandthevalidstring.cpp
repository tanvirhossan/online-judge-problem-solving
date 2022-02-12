#include<bits/stdc++.h>
using namespace std;
vector<int>v,v1;
map<char,int>m;
map<int,int>m1;
int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        m[s[i]]++;
    }
    map<char,int> :: iterator it;
    map<int,int> :: iterator itr;
    for(it=m.begin(); it!=m.end(); it++)
    {
        m1[it->second]++;

    }
    for(itr=m1.begin(); itr!=m1.end(); itr++)
    {
        v1.push_back(itr->first);
        v.push_back(itr->second);
    }
    if(v.size()>2)
        cout<<"NO";
    else if(v.size()==2)
    {
        if(v1[1]-v1[0]==1&&v[1]==1||v[0]==1)
            cout<<"YES";
       // else if(v1[0]>v1[1]&&v1[0]-v1[1]==1&&v[0]==1||v[1]==1)
            //cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"YES";

    return 0;


}
