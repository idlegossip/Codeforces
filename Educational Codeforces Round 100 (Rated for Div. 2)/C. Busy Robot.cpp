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
        ll a,b;
        vector<pair<ll,ll> >v;
        for(ll i=0; i<n; i++)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }
        ll cur=0,curp=0,res=0;
        for(ll i=0; i<n; i++)
        {
            if(v[i].first<cur)
                continue;
            if(i==n-1)
            {
                res++;
                continue;
            }

            a=llabs(curp-v[i].second);
            cur=v[i].first+a;
            curp=v[i].second;
            if(cur<=v[n-1].first)
                res++;
        }
        cout<<res<<endl;
    }
}
