
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    ll res=0;
    ll mat[n+10][m+10]= {INT_MAX};
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>mat[i][j];
            sum+=mat[i][j];
        }
    }
    ll f=0;
    for(ll i=n-1; i>=0; i--)
    {
        for(ll j=m-1; j>=0; j--)
        {
            if(mat[i][j]==0)
            {
                ll mn=min(mat[i+1][j],mat[i][j+1]);
                sum+=(mn-1);
                mn--;
                mat[i][j]=mn;
            }
            if(i==n-1&&j==m-1)
                  continue;
            if(i==n-1)
            {
                if(mat[i][j]>=mat[i][j+1])
                {
                    f=1;
                    break;
                }

            }
            else if(j==m-1)
            {
                if(mat[i][j]>=mat[i+1][j])
                {
                    f=1;
                    break;
                }

            }
            else if(mat[i][j]>=mat[i+1][j]||mat[i][j]>=mat[i][j+1])
            {
                f=1;
                break;
            }

        }
        if(f)
            break;
    }
    if(f)
        cout<<-1<<endl;
    else
        cout<<sum<<endl;
    return 0;
}
