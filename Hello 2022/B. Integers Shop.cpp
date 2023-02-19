#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n;
        ll l,r,c;
        vector<pair<ll,pair<ll,ll> > >vp;
        for(ll i=0; i<n; i++)
        {
            cin>>l>>r>>c;
            vp.push_back({c,{l,r}});

        }
        ll mn=vp[0].second.first;
        ll mx=vp[0].second.second;
        ll cost=vp[0].first;
        ll mnc=cost;
        ll mxc=cost;
        cout<<cost<<endl;
        map<pair<ll,ll>,ll>mp;
        mp[{mn,mx}]=cost;
        for(ll i=1; i<n; i++)
        {
            l=vp[i].second.first;
            r=vp[i].second.second;
            c=vp[i].first;
            if(mp[ {l,r}]==0)
                mp[ {l,r}]=c;
            else
                mp[ {l,r}]=min(  mp[ {l,r}],c);

            if(mn>l)
            {
                mnc=c;
                mn=l;
            }
            else if(l==mn)
            {
               mnc=min(c,mnc);
            }
            if(r>mx)
            {
                mxc=c;
                mx=r;
            }
            else if(r==mx)
            {
                mxc=min(c,mxc);
            }
            cost=mnc+mxc;
            //cout<<l<<" cost "<<r<<endl;

            if(mp[{mn,mx}])
            {
                cost=min(mp[{mn,mx}],cost);

            }

            cout<<cost<<endl;

        }

    }
}


