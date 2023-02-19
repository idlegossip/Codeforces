#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+7;
vector<ll>g[N+1];
set<ll>unvis;
ll go(ll u)
{
    // cout<<u<<' ';
    unvis.erase(u);
    ll ans = 0;
    for(ll j = 0; j +1 < g[u].size(); j++)
    {
        ll l = g[u][j];
        ll r = g[u][j+1];
        while(1)
        {
            auto it = unvis.upper_bound(l);
            if(it  ==  unvis.end())
                break;
            if(*it >= r)
                break;
            ans += 1 + go(*it);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll a,b;
    for(int i = 0; i < m; i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 1; i <= n; i++)
    {
        unvis.insert(i);
        g[i].push_back(0);
        g[i].push_back(n+1);
        sort(g[i].begin(),g[i].end());
    }
    vector<ll> ans;
    for(int i = 1; i <= n; i++)
    {
        if(unvis.find(i) != unvis.end())
        {
            //cout<<"Call here "<<i<<'\n';
            ans.push_back(go(i)+1);
           // cout<<'\n';
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<' ';

}

