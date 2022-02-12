#include<bits/stdc++.h>
using namespace std;
map<char,int>m1,m2;
set<char>s;
int main()
{
    int i,res=0;
    string s1,s2;
    cin>>s1>>s2;
   set<char> :: iterator itr;
    for(i=0; i<s1.size(); i++)
    {
        m1[(s1[i])]++;
        s.insert(s1[i]);
    }
    for(i=0; i<s2.size(); i++)
    {
        m2[(s2[i])]++;
        s.insert(s2[i]);
    }
 for(itr=s.begin();itr!=s.end();itr++)
 {
     res=res+abs(m1[*itr]-m2[*itr]);
 }

 cout<<res;
}
