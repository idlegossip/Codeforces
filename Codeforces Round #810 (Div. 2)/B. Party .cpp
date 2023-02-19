#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[10000100];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,m;
        cin>>n>>q;
        m=q;
        vector<pair<ll,ll> >v1;
        vector<ll>v,ans;
        ll a,b;
        ll sum=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
       while(q--)
       {
           cin>>a>>b;
           adj[a].push_back(b);
           adj[b].push_back(a);
           v1.push_back({a,b});
       }
       if(m%2==0)
       {
           cout<<0<<endl;
           continue;
       }
       for(ll i=0;i<m;i++)
       {
           a = v1[i].first;
           b = v1[i].second;
           ll c = adj[a].size();
           ll d = adj[b].size();
           if(c%2) ans.push_back(v[a-1]);
           if(d%2) ans.push_back(v[b-1]);
           if(c%2==0 and d%2==0)
           ans.push_back(v[a-1]+v[b-1]);

       }
       //cout<<ans.size()<<" s "<<endl;
       sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
       for(ll i=0;i<=n;i++) adj[i].clear();
    }

}

