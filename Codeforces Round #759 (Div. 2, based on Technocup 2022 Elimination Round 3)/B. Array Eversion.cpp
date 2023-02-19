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
       ll ans=0;
       cin>>n;
       vector<ll>v;
       ll a;
       for(ll i=0;i<n;i++)
       {
           cin>>a;
           v.push_back(a);
       }
       ll mx=-1;
       for(ll i=n-1;i>=0;i--)
       {
           if(v[i]>mx)
           {
               ans++;
               mx=v[i];
           }

       }
       cout<<ans-1<<endl;
    }
}

