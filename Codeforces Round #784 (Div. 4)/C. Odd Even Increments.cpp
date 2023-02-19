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
      for(ll i=0;i<n;i++)
      {
          cin>>a;
          v.push_back(a);
      }
      ll f=v[0]%2;
      ll x=1;
      ll x1=1;
      for(ll i=1;i<n;i++)
      {
          if(i%2)
            continue;
          if(v[i]%2!=f)
          {
              x=0;
              break;
          }
      }
      f=v[1]%2;
      for(ll i=1;i<n;i++)
      {
          if(i%2==0)
            continue;
          if(v[i]%2!=f)
          {
              x1=0;
              break;
          }
      }
      if(x&x1)
      {
          cout<<"YES"<<endl;
      }
      else
        cout<<"NO"<<endl;

    }
}




