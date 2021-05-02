#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll n,x;
            ll a,b,c;
            cin>>n>>x;
            if(n<=2)
            {
                  cout<<1<<endl;
            }
            else
            {
                  n-=2;
                  ll cnt=1;
                  cnt+=(n/x);
                  if(n%x)
                        cnt++;
                  cout<<cnt<<endl;
            }
      }
      return 0;
}
