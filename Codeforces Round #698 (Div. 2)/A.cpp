#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            vector<ll>v,v1;
            ll a,n,m;
            cin>>n;
            map<ll,ll>mp;
            ll mx=0;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  mp[a]++;
                  mx=max(mp[a],mx);
            }
            cout<<mx<<endl;

      }
}
