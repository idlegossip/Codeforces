#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        ll a;
        vector<ll>v;
        cin>>n>>k;
        ll f=1;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(ll i=0;i<n-1;i++)
        {
            ll mx=min(v[i],k);
            v[n-1]+=mx;
            v[i]-=mx;
            k-=mx;
        }
          for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
          cout<<endl;
    }
}
