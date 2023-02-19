#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;

    while(t--)
    {

      ll ans=0;
      ll n,m;
      cin>>n>>m;
      if(n>m or (n%m!=0 and n%2==0 and m%2==1))
      {
          cout<<"No"<<'\n';
      }
      else
      {
           cout<<"Yes"<<'\n';
          ll mod = m%n;
          ll a = m/n;
          if(mod==0)
          {

               for(ll i = 0;i<n;i++)
                cout<<a<<' ';
               cout<<'\n';

          }
          else if(n%2==1)
          {
             for(ll i = 0;i<n-1;i++)
                cout<<1<<' ';
               cout<<m-(n-1)<<'\n';
          }
          else
          {
              for(ll i = 1;i<n-1;i++)
                cout<<1<<' ';
               cout<<(m-(n-2))/2<<' '<<(m-(n-2))/2<<'\n';
          }
      }

    }
}


