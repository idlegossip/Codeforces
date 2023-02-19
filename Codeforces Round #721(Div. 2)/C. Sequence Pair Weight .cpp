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

     ll ar[n+1];
      ll a;
      map<ll,ll>mp;
      for(ll i=1;i<=n;i++)
      {
          cin>>ar[i];
      }
      ll pr[n+1];
      pr[0]=0;
      for(ll i=1;i<=n;i++)
      {
          a=ar[i];
          a=mp[a];
          pr[i]=pr[i-1]+(a*(a-1)/2);
          mp[a]++;
      }
      cout<<pr[n]<<endl;
  }
}
