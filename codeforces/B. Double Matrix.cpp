#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,arri1[50][50],arri2[50][50],arrso[50][50],arrlo[50][50],ck;
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arri1[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arri2[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {

            if(arri1[i][j]>arri2[i][j])
            {
                arrso[i][j]=arri2[i][j];
                arrlo[i][j]=arri1[i][j];
            }
            else
            {
                arrso[i][j]=arri1[i][j];
                arrlo[i][j]=arri2[i][j];
            }
            if(i==0&&j==0)
                ck=1;
            else if(i==0&&j!=0)
            {
                if((arrso[i][j-1]<arrso[i][j])&&(arrlo[i][j-1]<arrlo[i][j]))
                {
                    ck=1;
                }
                else
                {
                    ck=0;
                    break;
                }
            }
            else if(j==0&&i!=0)
            {
                if((arrso[i-1][j]<arrso[i][j])&&(arrlo[i-1][j]<arrlo[i][j]))
                {
                    ck=1;
                }
                else
                {
                    ck=0;
                    break;
                }
            }
            else
            {
                if((arrso[i][j-1]<arrso[i][j])&&(arrlo[i][j-1]<arrlo[i][j])&&(arrso[i-1][j]<arrso[i][j])&&(arrlo[i-1][j]<arrlo[i][j]))
                {
                    ck=1;
                }

                else
                {
                    ck=0;
                    break;
                }

            }
        }
        if(ck==0)
            break;
    }
    if(ck==1)
        printf("Possible");
    else
        printf("Impossible");
    return 0;
}

