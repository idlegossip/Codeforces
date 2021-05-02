#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll ar[1000010];

void sive()
{
      ll i,j,k;
      for(i=2;i*i<=1e6;i++)
      {
            if(ar[i])
                  continue;
             for(j=i+i;j<=1e6;j+=i)
                  ar[j]=1;
      }
      v.push_back(2);
      for(ll i=3;i<=1e6;i+=2)
      {
            if(ar[i]==0)
                  v.push_back(i);
      }
}
int main()
{
      ll t;
      sive();
      cin>>t;
      while(t--)
      {
            ll n;
            cin>>n;
            ll x=1+n;
            ll a=0,b=0;
             for(ll i=0;i<v.size();i++)
             {
                   if(v[i]>=x&&a==0)
                        a=v[i],x=v[i]+n;
                    if(v[i]>=x&&b==0)
                    {
                          b=v[i];
                          break;
                    }
             }
             cout<<a*b<<endl;

      }
}
