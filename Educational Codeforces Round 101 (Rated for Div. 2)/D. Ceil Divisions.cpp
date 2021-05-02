#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        vector<pair<ll,ll> >vp;
        while(n>2)
        {
            ll a=ceil(sqrt(n));
            for(ll i=a+1; i<n; i++)
            {
                vp.push_back({i,n});
            }
            vp.push_back({n,a});
            vp.push_back({n,a});
            n=a;
        }
        cout<<vp.size()<<endl;
        n=vp.size();
        for(ll i=0; i<n; i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }
    return 0;
}

