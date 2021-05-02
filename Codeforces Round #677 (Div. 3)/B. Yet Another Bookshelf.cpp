
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
            vector<ll>v;
            ll a;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  v.push_back(a);
            }
            ll cnt=0;
            ll res=0;
            ll f=1;
            for(ll i=0;i<n;i++)
            {
                  //cout<<v[i]<<" ";
                  if(f&&v[i]==0)
                        continue;
                  if(v[i]==1)
                  {
                        f=0;
                        res+=cnt;
                        cnt=0;
                  }
                  else
                    cnt++;

            }
            cout<<res<<endl;


      }
      return 0;
}
