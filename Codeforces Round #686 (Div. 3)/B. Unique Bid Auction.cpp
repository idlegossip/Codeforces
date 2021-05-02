#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll> >v;
        ll a;
        map<ll,ll>mp;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            v.push_back({a,i});
            mp[a]++;
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            if(mp[v[i].first]==1)
            {
                ans=v[i].second;
                break;
            }
        }
        if(ans)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
        }
    return 0;
}

