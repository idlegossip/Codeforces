#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll n,a,b;
            cin>>a>>b;
            ll cnt=0;
            while(a)
            {
                  cnt++;
                  ll x=a/b;
                  ll y=a/(b+1);
                  if(x>y)
                     b++,a=a/b,cnt++;
                 else
                    a=a/b;
            cout<<a<<" "<<b<<endl;
            }
            cout<<cnt<<endl;

      }
}
