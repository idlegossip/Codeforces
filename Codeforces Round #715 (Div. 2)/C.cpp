#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[2005][2005];
  vector<ll>v1;
ll knap(ll l,ll r)
{
    if(l==r)
        return 0;
    if(dp[l][r]!=-1)
        return dp[l][r];
    ll sum=v1[r]-v1[l]+min(knap(l+1,r),knap(l,r-1));
    dp[l][r]=sum;
    return dp[l][r];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n;
    ll a;


    cin>>n;
    ll m=0,t=0;
    ll f=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    ll res=knap(0,n-1);
    cout<<res<<endl;

}


