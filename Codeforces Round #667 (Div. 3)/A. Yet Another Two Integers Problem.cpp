#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll n,m;
            vector<ll>v;
            cin>>n>>m;
            ll a,b,c;
            ll ans=(abs(n-m)/10);
            if((abs(n-m)%10!=0))
                  ans++;
            cout<<ans<<endl;
      }
      return 0;
}


