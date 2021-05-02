#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        vector<ll>v(n+10);
        ll ans=0;
        ll in[n+10];

        for(ll i=1; i<=n; i++)
        {
            cin>>v[i];
            ans+=v[i];
            in[i]=0;
        }
        ll x,y;
        for(ll i=1; i<n; i++)
        {
            cin>>x>>y;
            in[x]++;
            in[y]++;
        }
        priority_queue<pair<ll,ll> >pq;
        for(ll i=1; i<=n; i++)
        {
            if(in[i]>1)
                pq.push({v[i],in[i]});

        }
        pair<ll,ll>p;
        cout<<ans<<" ";
        for(ll i=2; i<n; i++)
        {
            p=pq.top();
            ans+=p.first;
            p.second=p.second-1;
            cout<<ans<<" ";
            pq.pop();
            if(p.second>1)
                pq.push(p);
        }
        cout<<endl;
    }
}
