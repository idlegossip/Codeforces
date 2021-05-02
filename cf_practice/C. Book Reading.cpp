#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      vector<ll>v[100];
      ll a;
      for(ll i=0;i<10;i++)
      {
            a=i;
            ll j=i;
           v[a].push_back(j);
            j=a+i;
            while(a!=(j%10))
            {
                v[a].push_back(j%10);
                j+=a;
                //cout<<a<<" ";
            }
      }
      while(t--)
      {
            ll n,m;
            cin>>n>>m;
            ll b=m%10;
            ll res=0;
            ll s=n/m;
            ll c=s%v[b].size();
            s/=v[b].size();
            for(ll i=0;i<v[b].size();i++)
            {
                  //cout<<s<<" *  "<<v[b][i]<<endl;
                  res+=(v[b][i]*s);
            }
             for(ll i=0;i<c;i++)
            {
                  res+=(v[b][i]);
            }
            cout<<res<<endl;

      }
}
