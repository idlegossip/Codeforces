#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n,x,y;
      cin>>n>>x>>y;
      vector<ll>v;
      ll a;
      for(ll i=0;i<n;i++)
      {
            cin>>a;
            v.push_back(a);
      }
      sort(v.begin(),v.end());
      if(x>y)
      {
        cout<<n<<endl;
      }

      else
      {
            ll cnt=0;
            ll f=0;
            for(ll i=0;i<n;i++)
            {
                  if(v[i]<=x)
                        f++;
            }
            cnt=f/2;
            if(f%2)
                  cnt++;
            cout<<cnt<<endl;
      }
       return 0;


}
