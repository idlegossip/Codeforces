#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll res[100010];
vector<ll>adj[100010];
ll c[100010];
ll root;
vector<ll>sub[100010];
ll f=1;
ll cn[100010];
void dfs(ll cur)
{
    cn[cur]=1;

    for(ll i=0; i<adj[cur].size(); i++)
    {
        ll a=adj[cur][i];

        if(c[a]>c[cur])
            res[a]=res[cur]+1;
        else if(c[a]<c[cur])
            res[a]=res[cur]-1;
        if(c[a]==c[cur])
        {
            if(a>cur)
                res[a]=res[cur]-1;
            else
                res[a]=res[cur]+1;
        }
        if(a!=cur)
            dfs(a);
        cn[cur]+=cn[a];
    }
    if(c[cur]>=cn[cur])
        f=0;
}

int main()
{
    ll n;
    cin>>n;
    ll p;

    for(ll i=1; i<=n; i++)
    {
        cin>>p>>c[i];
        if(p==0)
            root=i;
        if(p)
            adj[p].push_back(i);
    }
    f=1;
    res[root]=n+10;
    dfs(root);
    if(f)
    {
        cout<<"Yes"<<endl;
        for(ll i=1; i<=n; i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
    else
        cout<<"NO"<<endl;
}

