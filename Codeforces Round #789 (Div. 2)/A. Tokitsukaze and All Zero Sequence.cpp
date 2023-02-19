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
        ll a;
        vector<ll>v;
        ll f1=0;
        for(ll i = 0;i<n;i++)
        {
            cin>>a;
            if(!a)
            {
                f1=1;
                continue;
            }
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll ans=v.size();
        ll f=0;
        n = v.size();
        for(ll i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
                f=1;
        }
        if(!f and !f1)
            ans++;
        cout<<ans<<'\n';

    }

}

