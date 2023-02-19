#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<pair<ll,ll> >vp;
        vector<ll>v;
        ll l,r;
        map<ll,ll>mp;
        cin>>n;
        mp.clear();
        for(ll i=0; i<n; i++)
        {
            cin>>l>>r;
            vp.push_back({r,l});
            v.push_back(i+1);
            mp[i]=0;
        }
        sort(vp.begin(),vp.end());
        for(ll i=0; i<n; i++)
        {
            l=vp[i].second;
            r=vp[i].first;
            for(ll i=l-1; i<r; i++)
            {
                if(mp[i])
                    continue;
                mp[i]=1;
                cout<<l<<" "<<r<<" "<<i+1<<endl;
                break;
            }
        }


    }

}

