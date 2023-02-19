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
       cin>>n;
      vector<ll>v;
      map<ll,ll>mp;
      ll a;
      ll x=-1;
      for(ll i=0;i<n;i++)
      {
          cin>>a;
          mp[a]++;
          if(mp[a]>=3&&x<0)
            x=a;
      }
      cout<<x<<endl;
    }
}



