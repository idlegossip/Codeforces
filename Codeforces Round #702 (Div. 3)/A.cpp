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
            ll a;
            ll n;
            cin>>n;
            for(ll i=1;i<=n;i++)
            {
                  cin>>a;
                  v.push_back(a);
            }
            ll res=0;
            for(ll i=1;i<n;i++)
            {
                  ll mn=min(v[i-1],v[i]);
                  ll mx=max(v[i-1],v[i]);
                  if(mn*2>=mx)
                        continue;
                        a=mn;
                   while(2*a<mx)
                        a*=2,res++;



            }
            cout<<res<<endl;
      }
}
