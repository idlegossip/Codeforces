#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1e9;
ll n,m;
ll ar[1010][1010];
ll dp[1010][1010];
ll dp1[1010][1010];
ll x;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
       // memset(dp,inf,sizeof(dp));
        //memset(dp1,-inf,sizeof(dp1));
        cin>>n>>m;
        vector<ll>v;
        ll a;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                dp[i][j]=inf;
                dp1[i][j]=-inf;
                cin>>ar[i][j];

            }
        }
         for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(i==0&&j==0)
                {
                    dp[i][j]=ar[i][j];
                    dp1[i][j]=ar[i][j];
                    continue;
                }
                if(i!=0)
                {
                    dp[i][j]=dp[i-1][j]+ar[i][j];
                    dp1[i][j]=dp1[i-1][j]+ar[i][j];
                }
                if(j!=0)
                {
                    dp[i][j]=min(dp[i][j],dp[i][j-1]+ar[i][j]);
                    dp1[i][j]=max(dp1[i][j],dp1[i][j-1]+ar[i][j]);
                }

            }
        }
        //cout<<dp[n-1][m-1]<<" "<<dp1[n-1][m-1]<<endl;

        if(dp[n-1][m-1]%2==0&&(dp[n-1][m-1]<=0&&dp1[n-1][m-1]>=0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}


