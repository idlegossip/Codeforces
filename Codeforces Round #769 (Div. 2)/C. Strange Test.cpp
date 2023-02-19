#include<bits/stdc++.h>
using namespace std;
#define ll long long
//bitset<20>bt;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {


       ll a,b;
       ll ans=1e18;
       cin>>a>>b;
       ll c=b|a;
       ll mx=b-a;
       ll cnt=1;
      for(ll i=0;i<=33;i++)
      {
          if((c&(1<<i))!=(b&(1<<i)))
            cnt+=(1<<i);
      }
       cout<<min(mx,cnt)<<endl;
    }
}
