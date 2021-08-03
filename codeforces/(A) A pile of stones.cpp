#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    char s[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
        if(s[i]=='+')
            cnt++;
        else
        {
            if(cnt>0)

                cnt--;
            else
                continue;
        }
    }
    printf("%d",cnt);
    return 0;
}
