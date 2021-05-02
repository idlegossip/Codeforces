#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[1000010] ;
ll len[1000010] ;
ll INF=1e9;
void dijkstra(ll s,vector<ll>& d, vector<ll>& p)
{
    d.assign(n,INF);
    p.assign(n,-1);
    d[s]=0;
    queue<pair<ll,ll> >q;
    q.push(make_pair(s,0));
    pair<ll,ll>p;
    while(!q.empty())
    {
        p=q.front();
        ll v=p.first;
        ll a=p.second;
        q.pop();
        for(ll i=0; i<adj[v].size(); i++)
        {
            ll to=adj[v][i];
            ll dis=len[v][to];
            if(dis+a<d[to])
            {
                p[to]=v;
                d[to]=dis+a;
                q.push(make_pair(to,a+1));
            }
        }
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;

}
