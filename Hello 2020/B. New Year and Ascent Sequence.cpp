#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;

    vector<pair<ll,ll> >vp;
    ll l;
    ll a,cnt=0;
    ll res=n;
    for(ll i=0; i<n; i++)
    {

        cin>>l;
        vector<ll>v;
        for(ll j=0; j<l; j++)
        {
            cin>>a;
            v.push_back(a);
        }
        reverse(v.begin(),v.end());
        ll f=1;
        for(ll j=1; j<l; j++)
        {
            if(v[j-1]>v[j])
            {
                f=0;
                break;
            }
        }
        if(f)
        {
              vp.push_back({v[0],v.back()});
        }
    }
    map<ll,ll>mp;
    sort(vp.begin(),vp.end());
    n=vp.size();
    pair<ll,ll>p;
    ll sz=0;
    for(ll i=0; i<n; i++)
    {
          p={vp[i].second,-1};
        sz+=vp.end()-lower_bound(vp.begin(),vp.end(),p);
        //cout<<sz<<" "<<vp[i].first<<" "<<vp[i].second<<endl;

    }
    cout<<(res*res)-sz<<endl;
    return 0;
}
