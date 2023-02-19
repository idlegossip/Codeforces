
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+7;
vector<ll>v[N];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        for(ll i=1;i<=n;i++)
        {
            cin>>a;
            v[a].push_back(i);
        }
        for(ll i=1;i<=n;i++)
        {
            ll mx=0;
            a=v[i].size();

            if(a)
            {
                ll last=0;
                mx=1;
                ll cnt=1;
              for(ll j=1;j<a;j++)
              {
                  if((abs(v[i][j]-v[i][last])-1) %2==0)
                  {
                      cnt++;
                      mx=max(mx,cnt);
                      last = j;
                  }
              }
            }
            cout<<mx<<" \n"[i==n];

        }
        for(ll i=1;i<=n;i++) v[i].clear();
    }
}
