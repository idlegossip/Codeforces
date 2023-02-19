#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+7;
vector<ll>g[N];
vector<pair<ll,ll> >vis[N];
vector<ll>v(N);
ll dp[N];
ll dp1[N];
ll dfs1(int u,int k)
{
    int sz = g[u].size();
    for(auto [x,y] : vis[u]){
        if(k == y)
            return x;
    }

    ll ans  = k * v[u];
    if(sz == 0) return ans;
    for(auto ch : g[u])
    {
        dp[ch] =  dfs1(ch,k/sz);
        dp1[ch] = dfs1(ch,(k+sz-1)/sz);
    }

    vector<ll>tmp;
    for(auto ch : g[u])
    {
        ans += dp[ch];
        tmp.push_back(dp1[ch] - dp[ch]);
    }
    sort(tmp.rbegin(),tmp.rend());
    if(sz){
        for(int i = 0; i < (k % sz); i++){
            ans += tmp[i];
        }
    }
    vis[u].push_back({ans,k});
    return ans;

    // tmp.clear();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        int a;
        for(int i = 2; i <= n; i++)
        {
            cin>>a;
            g[a].push_back(i);
        }
        for(int i = 1; i <= n; i++){
            cin>>v[i];
        }
       // ans = 0;
       //cout<<"END"<<'\n';
        cout<<  dfs1(1,k)<<'\n';
        for(int i = 0; i <= n; i++)
        {
            dp[i] = dp1[i] = 0;
            g[i].clear();
            v[i] = 0;
            vis[i].clear();
        }
    }
}

