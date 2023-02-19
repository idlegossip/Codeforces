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
       ll a;
       vector<ll>ar;
       for(ll i=0;i<n;i++)cin>>a,ar.push_back(a);
       ll l=-1,r=-1;
       ll mal=1;
       ll mxm=0;
       ll f=0;
       vector<ll>v;
       ll mal1=1;
       for(ll i=0;i<n;i++)
       {
           if(ar[i]==0)
           v.push_back(i);
           mal1*=ar[i];

       }
      ll n1=v.size();
      if(n1==0)
      {
          if(mal1>0)
          {
              cout<<0<<" "<<0<<endl;
              continue;
          }
          ll mal2=mal1;
          ll mal3=mal1;
          ll l1=0,r2=0;

          for(ll i=0;i<n;i++)
          {
              mal2/=ar[i];
              l1++;
              if(mal2>0)
                break;
          }
           for(ll i=n-1;i>=0;i--)
          {
              mal3/=ar[i];
              r1++;
              if(mal2>0)
                break;
          }
          if(mal2>=mal3)
          {
              cout<<l1<<" "<<0<<endl;
          }
          else
            cout<<0<<" "<<r1<<endl;

      }
      for(ll i=0;i<n1-1;i++)
      {
          ll mal2=1;
          for(ll j=v[i]+1;j<v[i+1]-1;j++)
          {
              mal2*=ar[]

          }

      }




    }
}

