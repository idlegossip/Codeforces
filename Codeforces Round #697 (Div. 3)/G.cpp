#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        set<ll>st;
        cin>>n;
        ll a;
        map<ll,ll>mp;
        ll dp[200005];
        memset(dp,0,sizeof(dp));
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
        }
        ll mx=0,res=0;
        for(ll i=1; i<=200003; i++)
        {
            dp[i]+=mp[i];
            for(ll j=i+i; j<=200003; j+=i)
            {
                dp[j]=max(dp[i],dp[j]);
            }
            mx=max(dp[i],mx);
        }
        cout<<n-mx<<endl;
    }
}
