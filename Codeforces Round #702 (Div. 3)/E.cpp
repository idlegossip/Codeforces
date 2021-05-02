#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll ts=0;
    while(t--)
    {
          ts++;
        vector<pair<ll,ll> >vp;
        ll a;
        ll n;
        cin>>n;
        map<ll,ll>mp;
        map<ll,ll>mp1;
        ll ar[n+1];
        ar[0]=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            vp.push_back({a,i});
        }
        sort(vp.begin(),vp.end());
        for(ll i=1; i<=n; i++)
        {
            a=vp[i-1].first;
            ar[i]=ar[i-1]+a;
        }
        ll res=1;
        a=vp[n-1].second;
        mp[a]=1,mp1[vp[n-1].first]=1;
        for(ll i=n-1; i>=1; i--)
        {
            a=vp[i].first;
          //  cout<<a<<" "<<ar[i]<<endl;
            if(mp1[vp[i-1].first]||(mp[vp[i].second]&&ar[i]>=a))
            {
                res++;
                mp1[vp[i-1].first]=1;
                a=vp[i-1].second;
                mp[a]=1;
            }
        }
        cout<<res<<endl;
        for(ll i=1; i<=n; i++)
            if(mp[i])
                cout<<i<<" ";
        cout<<endl;
    }
}
