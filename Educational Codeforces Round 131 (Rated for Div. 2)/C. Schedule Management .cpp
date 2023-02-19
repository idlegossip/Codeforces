#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N  = 2e5+7;
ll spf[N];
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll n;
        map<ll,ll>mp;
        map<ll,ll>mp1;
        cin>>n;
        ll mx=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
            mx = max(mx,mp[a]);
        }
        for(ll i=1;i<=n;i++)
        {
            mp1[mp[i]]++;
        }
        ll ans=0;
        ll fr=0;
        ll od=0,ev=0;
        for(ll i=1;i<=mx;i++)
        {

            fr+=mp1[i-1];


        }



    }
}


