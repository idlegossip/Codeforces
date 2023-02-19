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
       ll ans=0;
       cin>>n>>k;
      vector<ll>sp,sn;
       ll a;
       for(ll i=0;i<n;i++)
       {
           cin>>a;
           if(a>0)
               sp.push_back(a);
           else if(a<0)
           sn.push_back(-a);

       }
       ll mx=0;
       ll sum=0;
       sort(sn.begin(),sn.end());
       sort(sp.begin(),sp.end());
       for(ll i=sn.size()-1;i>=0;i-=k)
       {
           ll x=sn[i];
           ans+=2*x;
           mx=max(x,mx);
       }
      for(ll i=sp.size()-1;i>=0;i-=k)
       {
          ll x=sp[i];
           ans+=2*x;
           mx=max(x,mx);
       }
       cout<<ans-mx<<endl;

    }
}


