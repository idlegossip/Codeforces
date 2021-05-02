#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k;
ll mat[100][100];
ll dp[72][72][72][72];
ll recur(ll r,ll c,ll rem,ll cnt)
{
    if(r>n)
    {
        if(rem==0)
            return 0;
        return INT_MIN;
    }
    if(dp[r][c][rem][cnt]!=-1)
        return dp[r][c][rem][cnt];
   ll mx=INT_MIN;
    if(cnt<m/2&&c<=m)
    {
        mx=max(mx,mat[r][c]+recur(r,c+1,(rem+mat[r][c])%k,cnt+1) );
       mx=max(mx,recur(r,c+1,rem,cnt));
    }

    mx=max(mx,recur(r+1,1,rem,0));
    return dp[r][c][rem][cnt]=mx;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>m>>k;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<< recur(1,1,0,0)<<endl ;

    return 0;
}

