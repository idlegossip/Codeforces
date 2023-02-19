#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l;
        cin>>n>>l;
        ll ar[40]= {0};
        ll x,mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            ll o=0,z=0,a=0,b=0;
            while(x)
            {
                if(x%2)
                    ar[b]++;
                x/=2;
                b++;
            }
            mx=max(b,mx);
        }
        ll ans=0;
        for(ll i=0; i<=l; i++)
        {
            ll o=n-ar[i];

            if(ar[i]>o)
                ans|=(1<<i);
        }
        cout<<ans<<endl;
    }
}
