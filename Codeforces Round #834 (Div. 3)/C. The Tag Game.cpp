#include<bits/stdc++.h>
using  namespace std;
#define ll long long
const ll N = 2e5+7;
vector<ll>g[N];
ll level[N];
ll n,b;
ll mx = -1, ans = 0;
void dfs(ll u,ll p,ll lev)
{
    level[u] = lev;
    for(auto ch : g[u])
    {
        if(ch != p)
        {
            dfs(ch,u,lev+1);
        }
    }
}
void dfs1(ll u,ll p,ll lev)
{
    if((2LL * level[u]) > mx)
    {
        mx = 2 * level[u];
        ans =  2 * level[u];
    }
    for(auto ch : g[u])
    {
        if(ch != p)
        {
            if(level[ch]> (lev + 1))
            {
                dfs1(ch,u,lev+1);
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll u,v;
    cin>>n>>b;
    for(int i = 0; i < n-1; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1,0);
    dfs1(b,-1,0);
    cout<<ans<<'\n';
}
