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
        vector<ll>v;
        ll a;
        map<ll,ll>mp;
        map<ll,ll>mp1;
        for(ll i=0; i<2*n; i++)
        {
            cin>>a;
            mp[a]++;
            mp1[a]++;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll x=v.size()-1;

        mp[a]--;
        ll f=1;
        vector<pair<ll,ll> >res;
        for(ll j=0; j<x; j++)
        {
            res.clear();
             a=v[x];
            res.push_back({a,v[j]})     ;

            ll cnt=1;
            f=1;
            mp.clear();
            mp=mp1;
            mp[a]--;
            mp[v[j]]--;
            for(ll i=x-1; i>=0; i--)
            {
                if(cnt==n)
                    break;
                ll b=v[i] ;
               // cout<<b<<"--- a b---"<<a-b<<" "<<mp[b]<<" "<<mp[a-b]<<endl;
                if(mp[b]==0||i==j)
                    continue;
                b=a-b;
                mp[v[i]]--;
                if(mp[b])
                {
                    cnt++;
                    mp[b]--;
                    res.push_back({v[i],b});
                    a=max(b,v[i]);
                }
                else
                {
                    f=0;
                    break;
                }
            }
            if(f)
                break;
        }
        if(f)
        {
            cout<<"YES"<<endl;
            cout<<res[0].first+res[0].second<<endl;
            for(ll i=0; i<res.size(); i++)
                cout<<res[i].first<<" "<<res[i].second<<endl;

        }
        else
            cout<<"NO"<<endl;
    }
}
