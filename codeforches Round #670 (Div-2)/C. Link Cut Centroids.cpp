#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[1000010];
ll fa[1000010];
ll siz[1000010];
ll n;
ll res,res1,mn=1e9;
void dfs(ll u,ll f)
{
    fa[u]=f;
    siz[u]=1;
    ll mx=0;
    for(ll i=0; i<adj[u].size(); i++)
    {
        ll v=adj[u][i];
        if(v==f)
            continue;
        dfs(v,u);
        siz[u]+=siz[v];

        mx=max(mx,siz[v]);
    }
    mx=max(mx,n-siz[u]);
    if(mx<mn)mn=mx,res=u,res1=0;
    else if(mx==mn)res1=u;
}
ll leaf;
void dfs2(ll u,ll f)
{
    if(adj[u].size()==1)
    {
        leaf=u;
        return;
    }
    for(ll i=0; i<adj[u].size(); i++)
    {
        ll v=adj[u][i];
        if(f==v)
            continue;
        dfs2(v,u);
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;

        ll j,k;
        mn=1e9;
        res1=res=0;
        cin>>n;
        for(ll i=1; i<=n; i++)
            adj[i].clear(),fa[i]=0;

        for(ll i=0; i<n-1; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1,0);
        if(res1==0)
        {
            printf("1 %lld\n1 %lld\n",adj[1][0],adj[1][0]);
            continue;
        }
        if(fa[res]!=res1)
            swap(res,res1);
        dfs2(res,res1);
        printf("%lld %lld\n%lld %lld\n",leaf,fa[leaf],leaf,res1);
    }
    return 0;

}
