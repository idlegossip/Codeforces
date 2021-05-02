#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
ll dp[10][200010];
ll k;
ll knap(ll val,ll cnt)
{
    if(cnt<0)
        return 1;
    if(dp[val][cnt]!=-1)
        return dp[val][cnt];
    ll a=(knap(1,cnt-9)%mod+(knap(0,cnt-10))%mod)%mod;
     dp[val][cnt]=a;
     return a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
     memset(dp,-1,sizeof(dp));
    while(t--)
    {
        ll a,n;
        cin>>n>>k;
        ll ans=0;
        while(n)
        {
            a=n%10;
            n/=10;
            ans=(ans+knap(a,k-(10-a)))%mod;
        }
        cout<<ans<<endl;

    }
}
