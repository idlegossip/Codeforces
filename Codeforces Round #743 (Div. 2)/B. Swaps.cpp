#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v1,v2;
        vector<pair<ll,ll> >mx,mn;
        ll n;
        cin>>n;
        ll a;
        ll mxx=-1,mxi=0,mnn=1e9,mni=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        ll res=1e19;
        for(ll i=0;i<n;i++)
        {
            a=v1[i];
            auto it=upper_bound(v2.begin(),v2.end(),a);
            a=(it-v2.begin());
            cout<<a<<" "<<i<<endl;
            a=(a+i);
            res=min(a,res);

        }
        cout<<res<<endl;

    }
}
