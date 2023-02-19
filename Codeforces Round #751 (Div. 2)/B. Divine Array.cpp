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
        vector<ll>v[2*n];
        map<ll,ll>mp;
        ll a,b;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v[0].push_back(a);
            mp[a]++;
        }
        ll s=0;
        while(1)
        {
            s++;
            ll f=1;
            for(ll i=0;i<n;i++)
            {
                v[s].push_back(mp[v[s-1][i]]);
                if(mp[v[s-1][i]]!=v[s-1][i])
                {
                    f=0;
                }
            }
            if(f)
                break;
            mp.clear();
            for(ll i=0;i<n;i++)
            {
              mp[v[s][i]]++;
            }
        }
        ll q;
        cin>>q;

        for(ll i=1;i<=q;i++)
        {
            cin>>a>>b;
            if(b>s)
                cout<<v[s][a-1]<<endl;
            else
                cout<<v[b][a-1]<<endl;

        }

    }
}

