#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

      ll n,m,x;
      cin>>n>>m>>x;
      ll a,b;
      map<ll,ll>mp;
       for(ll i=1;i<=m;i++)
            mp[i]=-1;
      for(ll i=0;i<n;i++)
      {
            cin>>a>>b;
            if(mp[a]==-1)
                  mp[a]=b;
            mp[a]=min(b,mp[a]);
      }
      ll cnt=0;
       for(ll i=1;i<=m;i++)
      {

           cnt+=mp[i]   ;
      }
      if(cnt>x)
            cout<<x<<endl;
      else
            cout<<cnt<<endl;
}
