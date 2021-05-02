#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      map<ll,ll>mp;
      map<ll,ll>mp1;
      for(ll i=1;i<=100001;i++)
      {
            ll a=i*i*i;
            mp[a]=1;
      }

      while(t--)
      {
            ll a;
            cin>>a;
            ll f=0;
            for(ll i=1;i<=10000;i++)
            {
                  if((i*i*i)>a)
                        break;
                   ll x=i*i*i;
                   if(mp[a-x])
                   {
                         f=1;
                         break;
                   }
            }
            if(f)
                  cout<<"YES"<<endl;
            else
                  cout<<"NO"<<endl;


      }
}

