#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[100010];
ll visit[100010];
ll dis[100010];
vector<ll>pe;
ll ans=0;
ll n;
ll dfs(ll u)
{
    for(ll i=0; i<adj[u].size(); i++)
    {
        ll v=adj[u][i];
        dis[u]+=dfs(v);
    }
    return dis[u] ;
}
void dfs2(ll u)
{
    if(adj[u].size()==0)
    {
        ans=max(ans,dis[u]);
        return;
    }

    vector<pair<ll,ll> >p;
    for(ll i=0; i<adj[u].size(); i++)
        p.push_back({dis[adj[u][i]],adj[u][i]});
    sort(p.begin(),p.end());
    ll mx=p[p.size()-1].first;
    ll mn=p[0].first;
    ll d=mx-mn;
    ll a=pe[u-1];
    for(ll i=0; i<p.size(); i++)
    {
        if(a>=d)
            dis[p[i].second]+=d,a-=d;
        else
            dis[p[i].second]+=a,a=0;
        if(!a)
            break;
    }
    if(a)
    {
        d=(a+p.size()-1)/p.size();
        for(ll i=0; i<p.size(); i++)
        {
            dis[p[i].second]+=d;
            a-=d;
            if(a<=0)
                break;
        }


    }
    dis[p[p.size()-1].second]+=a;

    for(ll i=0; i<adj[u].size(); i++)
    {
        ll v=adj[u][i];
        dfs(v);
    }
}
int main()
{
    ll m,p;
    cin>>n;
    memset(dis,0,sizeof(dis));
    memset(visit,0,sizeof(visit));
    ll res=0,a;
    for(ll i=1; i<n; i++)
    {
        cin>> a;
        adj[a].push_back(i+1);
    }
    for(ll i=0; i<n; i++)
    {
        cin>> a;
        dis[i+1]=a;
        pe.push_back(a);
    }

    cout<<dfs(1)<<endl;
  dfs2(1);

    cout<<ans<<endl;
    return 0;
}


