#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        ll n,m;
        cin>>n>>m;
        vector<ll>v,en(n+1,0);
        for(int i = 0; i < m; i++)
        {
            cin>>a>>b;
            if(a > b) swap(a,b);
            en[b] = max(en[b],a);
        }
        ll ans = 0;
        ll l = 1;
        for(ll i = 1; i <= n; i++)
        {
            if(en[i])
                l = en[i] + 1;
            ans += (i - l + 1);
        }
        cout<<ans<<'\n';
    }
}
