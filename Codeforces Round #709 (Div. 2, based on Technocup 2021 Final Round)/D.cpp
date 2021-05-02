#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll d[1000010];
ll nxt[1000010];

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<ll>ans;
        queue<pair<ll,ll> >q;
        cin>>n;
        ll ar[n+10];
         for(ll i=0; i<n; i++)nxt[i]=(i+1)%n;
        for(ll i=0; i<n; i++)cin>>ar[i];
        for(ll i=1; i<n; i++)
        {
            if(__gcd(ar[i],ar[i-1])==1LL)
                q.push(make_pair(i-1,i));
        }
        if(__gcd(ar[0],ar[n-1])==1LL)
            q.push(make_pair(n-1,0));
        pair<ll,ll>p;
        ll l=n;
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            ll u=p.first;
            ll v=p.second;
            if(d[u]||d[v])
                continue;
            d[v]=1;
            nxt[u]=nxt[v];
            l--;
             ans.push_back(v+1);
            if(l==0)
                break;

            if(__gcd(ar[nxt[u]],ar[u])==1)
                q.push(make_pair(u,nxt[u]));
        }
        cout<<ans.size()<<" ";
        for(ll i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
       cout<<endl;
        for(ll i=0; i<n; i++)
            nxt[i]=d[i]=0;

    }
}
