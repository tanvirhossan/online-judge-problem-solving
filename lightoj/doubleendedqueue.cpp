#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,i,j,l,x;
    string s;

    deque <int> d;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>b>>c;
        d.clear();
        l=0;
        cout<<"Case "<<i<<":"<<endl;
        for(j=1; j<=c; j++)
        {
            cin>>s;
            if(s=="pushLeft"||s=="pushRight")
                cin>>x;
            if(s=="pushLeft"&&l<b)
            {
                cout<<"Pushed in left: "<<x<<endl;
                d.push_front(x);
                l++;
            }
            else if(s=="pushRight"&&l<b)
            {
                cout<<"Pushed in right: "<<x<<endl;
                d.push_back(x);
                l++;
            }
            else if(s=="popRight"&&l!=0)
            {
                cout<<"Popped from right: "<<d.back()<<endl;
                d.pop_back();
                l--;
            }
            else if(s=="popLeft"&&l!=0)
            {
                cout<<"Popped from left: "<<d.front()<<endl;
                d.pop_front();
                l--;
            }
            else if(l==0)
                cout<<"The queue is empty"<<endl;
            else
                cout<<"The queue is full"<<endl;
        }

    }
}

