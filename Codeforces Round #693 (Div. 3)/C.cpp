#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            string str;
            ll n;
            cin>>n;
            vector<ll>v(n+10);
            for(ll i=1;i<=n;i++)
                  cin>>v[i];
            ll dp[n+10];
            for(ll i=1;i<=n;i++)
                  dp[i]=0;
                  ll mx=0;
            for(ll i=n;i>=1;i--)
            {
                  ll a=v[i];
                  if(i+a>n)
                        dp[i]=a;
                  else
                        dp[i]=a+dp[i+a];
                  mx=max(dp[i],mx);

            }
            cout<<mx<<endl;

      }

}

