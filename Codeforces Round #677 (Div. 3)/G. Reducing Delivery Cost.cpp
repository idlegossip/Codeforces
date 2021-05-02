#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[1000010];
map< pair<ll,ll>,ll>pr;
ll vertex;
ll INF=1e18;
ll dijsktra(ll s,ll des)
{
    priority_queue<pair<ll,ll> >pq;
    ll d[100005];
    for(ll i=0; i<=vertex; i++)
        d[i]=INF;
    d[s]=0;
    pq.push({0,s});
    while(!pq.empty())
    {
        pair<ll,ll>p=pq.top();
        pq.pop();
        ll v=p.second;
        ll dis=abs(p.first);
        for(ll i=0; i<adj[v].size(); i++)
        {
            ll to=adj[v][i];
            p= {v,to};
            ll weight=pr[p];
            if(dis+weight<d[to])
            {
                d[to]=dis+weight;
                pq.push({-(dis+weight),to});
            }


        }

    }
    return d[des];
}
int main()
{
    ll m,k;
    cin>>vertex>>m>>l;
    ll a,b,c;
    for(ll i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        mp[ {a,b}]=c;
        mp[ {b,a}]=c;
        v[a].push_back(b);
        v[b].push_back(a);
    }
}
