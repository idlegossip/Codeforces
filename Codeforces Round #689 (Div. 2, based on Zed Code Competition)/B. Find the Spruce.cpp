#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        string str[n+10];
        ll mat[n+10][m+10];
        for(ll i=0; i<n; i++)
        {
            cin>>str[i];
        }
        ll res=0,cnt=1;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(str[i][j]=='*')
                    mat[i][j]=cnt;
                else
                {
                    cnt++;
                    mat[i][j]=0;
                }

            }
        }
        res=0,cnt=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cnt=0;
                if(str[i][j]=='*')
                {
                    cnt++;
                    for(ll k=1; k<n-i; k++)
                    {
                        if(j-k>=0&&j+k<m&&mat[i+k][j-k]==mat[i+k][j+k]&&mat[i+k][j-k]!=0)
                            cnt++;
                        else
                            break;
                         //   cout<<i<<" i   j  "<<j<<"   j-k  "<<j-k<<"   j+k   "<< j+k<<endl;
                             // cout<<mat[i+k][j-k]<<"     "<<mat[i+k][j+k]<<endl;
                    }
                }
                 res+=cnt;
            }

        }
        cout<<res<<endl;
    }
    return 0;
}
