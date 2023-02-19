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

      ll ans=0;
        ll n;
        cin>>n;
        vector<ll>v;
        ll a;
        ll mx=0,mn=LONG_MAX;
        ll pos=0;
        ll pos1=0;
        for(ll i = 0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        if(n==1)
        {
            cout<<0<<'\n';
        }
        else
        {
             for(ll i = 0; i<n; i++)
             {

             if(i+1<n)
               ans =  max(ans,v[i]-v[i+1]);
               ans =  max(ans,v[i]-v[0]);
               ans =  max(ans,v[n-1]-v[i]);
             }
            cout<<ans<<'\n';
        }
    }
}

