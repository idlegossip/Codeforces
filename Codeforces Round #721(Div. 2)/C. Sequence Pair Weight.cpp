
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll mx=0;
        cin>>n;
       map<ll,ll>mp;
       ll a;
       set<ll>st;
       for(ll i=0;i<n;i++)
       {
           cin>>a;
           st.insert(a);
           mp[a]++;
       }
       ll ans=0;
       for(auto a : st)
       {
          ll x=mp[a];
           x=(x*(x+1))/2;
           ans+=x;

       }
        cout<<ans<<endl;
    }
}
