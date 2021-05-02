
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
            vector<ll>v(n+10);
            ll a;
            for(ll i=1;i<=n;i++)
            {
               cin>>v[i];
            }
            a=0;
            ll f=1;
            for(ll i=1;i<=n;i++)
            {
              v[i]+=a;
              v[i]-=(i-1);

              if(v[i]<0)
              {
                    f=0;
                    break;
              }
              a=v[i] ;

            }
            if(f)
                  cout<<"YES"<<endl;
            else
                  cout<<"NO"<<endl;



      }
}
