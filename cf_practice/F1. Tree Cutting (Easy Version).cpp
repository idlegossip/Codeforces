#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> adj[500000];
ll r[500000];
ll b[500000];
ll color[500000];
ll use[500000];
ll use1[500000];
ll n;
ll res;
void dfs(ll p)
{
    use[p]=1;
    for(auto a: adj[p])
    {
        if(!use[a])
        {

            b[a]+=b[p];
            r[a]+=r[p];
            if(color[a]==1)
                r[a]++;
            if(color[a]==2)
                b[a]++;
            dfs(a);
        }
    }
}
void dfs1(ll p)
{
    use1[p]=1;
     if(r[p]==0||b[p]==0)
                res++;
     cout<<p<<" "<<r[p]<<" "<<b[p]<<endl;
    for(auto a : adj[p])
    {
        if(!use1[a])
        {


            dfs1(a);
        }
    }
}
int main()
{
    ll a;
    cin>>n;
    for(ll i=1; i<=n; i++)
        cin>>color[i];
    ll c;
    for(ll i=0; i<n-1; i++)
    {
        cin>>a>>c;
        adj[a].push_back(c);
        adj[c].push_back(a);
    }
    res=0;
    if(color[1]==1)
        r[1]++;
    if(color[1]==2)
        b[1]++;

    dfs(1);
    dfs1(1);
    cout<<res-1<<endl;
}
