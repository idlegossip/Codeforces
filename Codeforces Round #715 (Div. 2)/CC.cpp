#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll a;
    vector<pair<ll,ll> >v;
    vector<ll>v1;
    map<ll,ll>mp;
    cin>>n;
    ll m=0,t=0;
    ll f=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v1.push_back(a);
        mp[a]++;

    }
    ll res=LONG_LONG_MAX;
    ll mn=LONG_LONG_MAX;
    ll mx=LONG_LONG_MIN;
    ll sum=0;
    sort(v1.begin(),v1.end());
    for(ll i=0; i<n; i++)
    {
        a=v1[i];
        if(mp[a])
        {
            v.push_back({mp[a],a});
            mp[a]=0;
        }
    }
    n=v.size();
    for(ll i=0; i<n; i++)
    {
        mn=v[i].second;
        mx=v[i].second;
        sum=0;
        for(ll j=0; j<n; j++)
        {
            if(i==j)
                continue;
            a=v[j].second;
            ll b=v[j].first;
            mn=min(mn,a);
            mx=max(a,mx);
            sum+=(mx-mn)*b;
        }
        res=min(sum,res);
        mn=v[i].second;
        mx=v[i].second;
        sum=0;
        for(ll j=n-1; j>=0; j--)
        {
            if(i==j)
                continue;
            a=v[j].second;
            ll b=v[j].first;
            mn=min(mn,a);
            mx=max(a,mx);
            sum+=(mx-mn)*b;
        }
        res=min(sum,res);


    }
    cout<<res<<endl;

}



