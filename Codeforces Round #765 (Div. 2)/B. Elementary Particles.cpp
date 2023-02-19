#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<pair<ll,ll> >v;
        ll n;
        ll mx=-1;
        ll a;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            cin>>a;
            v.push_back({a,i});

        }
        sort(v.begin(),v.end());
        ll l=0,r=1;
        for(ll i=0;i<n-1;i++)
        {
            ll f=v[i].first;
            ll s=v[i].second;

             ll f1=v[i+1].first;
            ll s1=v[i+1].second;
            if(f1==f)
            {
                ll ind=(n-s1)+s;
                mx=max(mx,ind);
            }



        }
        cout<<mx<<endl;
    }
}
