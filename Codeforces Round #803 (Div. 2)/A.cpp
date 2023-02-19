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
        ll a;
        vector<ll>v;
        ll sum=0;
        cin>>n;
        vector<ll>p(n+1,0),s(n+1,0);
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            sum^=a;
            p[i+1] = p[i]^a;
            v.push_back(a);

        }
        for(ll i=n;i>=1;i--)
        {
           s[i]=s[i+1]^v[i-1];
        }
        ll ans = 0;
        ll f=0;
        for(ll i=1;i<=n;i++)
        {
           if(p[i-1]^s[i+1]==v[i-1])
           {
               f=1;
               ans = v[i-1];
             //  cout<<ans<<" ";
             break;
           }

        }
        cout<<ans<<endl;
    }
}
