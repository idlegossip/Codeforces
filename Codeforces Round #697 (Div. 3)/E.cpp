#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define P pair<int,int>
#define fi first
#define se second
#define MP make_pair
ll mod=1e9+7;
ll dp[1005][1005];
ll n,k;
ll ncr(ll n,ll r)
{
    if(n==r||r==0)
        return 1;
    if(r>n)
        return 0;
    if(dp[n][r]!=-1)
        return dp[n][r];
    ll a=(ncr(n-1,r)%mod+ncr(n-1,r-1)%mod)%mod;
    dp[n][r]=a;
    return dp[n][r];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        ll a;

        cin>>n>>k;
        vector<ll>v;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            mp[a]++;
        }
        sort(v.begin(),v.end());

        ll ind;
        ll res=ncr(a,k);
        a=v[n-k];
        for(ll i=n-1; i>=n-k; i--)
        {
            if(v[i]==a)
            {
                ind=k-(n-i-1);
                break;
            }
        }
        a=mp[v[n-k]];

        cout<<ncr(a,ind)<<endl;



    }
}
