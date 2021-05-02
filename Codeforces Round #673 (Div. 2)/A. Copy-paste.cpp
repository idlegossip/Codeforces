#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            vector<ll>v;
            ll a,b,c;
            ll n,k;
            cin>>n>>k;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  v.push_back(a);

            }
            sort(v.begin(),v.end());
            ll res=0;
            for(ll i=1;i<n;i++)
            {
                  a=abs(k-v[i]);
                  res+=(a)/v[0];


            }
            cout<<res<<endl;
      }
      return 0;
}
