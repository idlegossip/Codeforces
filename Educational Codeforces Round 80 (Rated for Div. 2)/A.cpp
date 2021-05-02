#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll n,d;
            cin>>n>>d;
            if(n>=d)
                  cout<<"YES"<<endl;
            else
            {
                  ll x=n/2;
                  ll y=d/(x+1);
                  if(d%(x+1))
                        y++;
                  x+=y;
                  if(x<=n)
                         cout<<"YES"<<endl;
                  else
                         cout<<"NO"<<endl;
            }
      }
}
