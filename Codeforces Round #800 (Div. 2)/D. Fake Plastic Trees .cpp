#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3e5+9;

vector<ll>tree[N];
ll l[N],r[N];
ll ans=0;
ll dfs(ll ch,ll p)
{
    ll sum=0;
    for(auto u : tree[ch])
    {
        if(u==p)
            continue;
        sum+=dfs(u,ch);
    }
    if(sum<l[ch])
    {
        ans++;
        return r[ch];
    }
    return min(sum,r[ch]);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        for(ll i=2; i<=n; i++)
        {
            cin>>a;
            tree[a].push_back(i);
            tree[i].push_back(a);
        }
        for(ll i=1; i<=n; i++)
            cin>>l[i]>>r[i];
        ans=0;
        dfs(1,1);
        cout<<ans<<endl;
        for(ll i=0; i<=n; i++)
            tree[i].clear();
    }
}
