#include<bits/stdc++.h>
using namespace std;

#define  ll long long
ll mod=1e9+7;
ll dp[10000][25];
ll recur(ll n,ll r)
{
    if(n==r||r==0)
        return 1;
    if(r>n)
        return 0;
    if(dp[n][r]!=-1)
        return dp[n][r];
    ll res=(recur(n-1,r-1)%mod+recur(n-1,r)%mod)%mod;
    dp[n][r]=res;
    return dp[n][r];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    vector<ll>v;
    ll a;
    ll n,m;
    ll res=1;
    cin>>n>>m;
    ll m2=2*m;
    n+=(m2-1);
    cout<<recur(n,m2)%mod<<endl;

}
