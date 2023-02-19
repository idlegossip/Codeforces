#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[1000000];
ll d[1000000];
ll on[1000000];
void dfs(ll ch,ll p)
{
    d[ch]=1;
    on[ch]=0;
    ll l=0,r=0;
    //cout<<"dfds"<<endl;
    for(auto u : adj[ch])
    {
        if(u==p)
            continue;
            //cout<<"df
        dfs(u,ch);
        if(l)
            r=u;
        else
            l=u;
        d[ch]+=d[u];
    }
    //cout<<"ddd"<<endl;
    if(l)
    {
        on[ch] = max((d[l]-1+on[r]),(d[r]-1+on[l]));
    }
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

       // memset()
        ll n,m,k;
        cin>>n;
        vector<ll>v;
        ll a,b;
        for(ll i=0;i<n-1;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        if(n==2)
        {
            cout<<0<<endl;
            continue;
        }
        dfs(1,1);
        cout<<on[1]<<endl;
        for(ll i=0;i<=n;i++)
        {
            adj[i].clear();
            d[i]=0;
            on[i]=0;
        }



    }
}


