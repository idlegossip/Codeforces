#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n;
      cin>>n;
      ll i,j,k;
      ll mx,mn,a;
      vector<ll>f,l;

      for(i=0;i<n;i++)
      {
            mn=INT_MAX;
            mx=0;
            cin>>k;
            ll a;
            for(j=0;j<k;j++)
            {
                  cin>>a;
                  mx=max(mx,a);
                  mn=min(mn,a);
            }
            f.push_back(mn);
            l.push_back(mx);
      }
      sort(f.begin(),f.end());
      sort(l.begin(),l.end());
      ll ans=0;
      for(i=0;i<n;i++)
      {
            mn=f[i];
            mx=l[i];
            ll s=i,e=n-1;
            ll ind;
            while(s<=e)
            {
                  ll mid=(0.
                          1
                  if(f[mid]>)
            }
      }

}

