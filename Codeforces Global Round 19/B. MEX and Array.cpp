#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        vector<ll>v,v1;
        cin>>n;
        ll a;
        ll f=0;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);


        }
        for(ll len=1;len<=n;len++)
        {
            for(ll i=0;i+len<=n;i++)
            {
              for(ll j=0;j<len;j++)
              {
                  if(!v[i+j])
                    ans++;

              }
              ans+=len;;
            }
        }
        cout<<ans<<endl;

    }
}

