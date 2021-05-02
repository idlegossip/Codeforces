#include<bits/stdc++.h>
using namespace  std;
#define ll long long
 ll ar[1110];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,k;
        cin>>n>>s>>k;
        ll a;
         map<ll,ll>mp;
        for(ll i=1; i<=k; i++)
        {
            cin>>a;
            mp[a]=1;
        }
        ll res=INT_MAX;
        for(ll i=0; i<=1010; i++)
        {
            if(i+s<=n&&mp[i+s]==0)
            {
                  res=min(res,i);

            }
            if(s-i>=1&&mp[s-i]==0)
            {
                  res=min(res,i);

            }


        }
        cout<<res<<endl;
    }
}
