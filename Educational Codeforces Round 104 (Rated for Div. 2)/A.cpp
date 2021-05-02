#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            map<ll,ll>mp;
            ll a;
            ll n;
            cin>>n;
            ll mn=LONG_LONG_MAX;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  mn=min(a,mn);
                  mp[a]++;

            }
            cout<<n-mp[mn]<<endl;
      }
}
