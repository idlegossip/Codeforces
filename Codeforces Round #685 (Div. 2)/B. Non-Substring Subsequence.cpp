#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            string a,b;
            ll n,m;
            cin>>n>>m;
            cin>>a;
            while(m--)
            {
                  ll q1,q2;
                  cin>>q1>>q2;
                  ll f=0;
                  q1--;
                  q2--;
                  for(ll i=0;i<q1;i++)
                  {
                        if(a[i]==a[q1])
                        {
                              f=1;
                              break;
                        }
                  }
                  for(ll i=q2+1;i<n;i++)
                  {
                        if(a[i]==a[q2])
                        {
                              f=1;
                              break;
                        }
                  }
                  if(f)
                        cout<<"YES"<<endl;
                  else
                        cout<<"NO"<<endl;

            }
      }
      return 0;
}
