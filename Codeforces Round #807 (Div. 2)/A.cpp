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
        vector<ll>v;
        ll a;
        ll x;
        cin>>n>>x;
        for(ll i=0;i<2*n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll f=1;
        for(ll i  =0 ; i<n;i++)
        {
            if(v[i+n]-v[i]<x) f=0;
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
