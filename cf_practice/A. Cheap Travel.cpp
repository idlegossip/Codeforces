#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll a,b,n,m;
      ll ans=0;
      ll mx;
      cin>>n>>m>>a>>b;
      if(n<m)
            m=n;
      mx=n*a;
      ll c=n/m;
      ans=(c*b)+a*(n%m);
      mx=min(ans,mx);
      if(b<=a)
      {
            ans=c*b;
            if(n%m)
                  ans+=b;
      }
      cout<<min(ans,mx)<<endl;
}
