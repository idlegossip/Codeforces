#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e8;
ll dp[110][110][11][11];
ll n,m,k1,k2;
ll knap(ll l,ll r,ll x,ll y)
{
    if(l==n&&m==r&&x<=k1&&y<=k2)
        return 1;
    if(dp[l][r][x][y]!=-1)
        return dp[l][r][x][y];
     ll a=0;
    if(x<k1&&l<n)
        a=(a+knap(l+1,r,x+1,0))%mod;
    if(y<k2&&r<m)
        a=(a+knap(l,r+1,0,y+1))%mod;
   dp[l][r][x][y]=a;
   return a;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>m>>k1>>k2;
    cout<<knap(0,0,0,0)<<endl;
}
