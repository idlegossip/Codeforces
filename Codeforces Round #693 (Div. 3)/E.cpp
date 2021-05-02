#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<pair<ll,ll>, ll > >v;
        ll x,y;
        pair<ll,ll>p;

        for(ll i=1; i<=n; i++)
        {
            cin>>x>>y;
            p= {x,-y};
            v.push_back({p,i});
            p= {y,-x};
            v.push_back({p,i});
        }
        sort(v.begin(),v.end());
        ll res[n+10];
        memset(res,-1,sizeof(res));
        ll mn=LONG_LONG_MAX;
        ll in=0;
        for(ll i=0; i<v.size(); i++)
        {
               x=v[i].first.first;
            y=-v[i].first.second;
           // cout<<x<<"   x y "<<y<<endl;
            ll ind =v[i].second;
            if(y>mn)
            {
                   res[ind]=in;
            }
            if(y<mn)
            {
                  mn=y;
                  in=ind;
            }



        }
        for(ll i=1; i<=n; i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
}
