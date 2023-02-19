#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=998244353;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        if(n%2)
            cout<<0<<endl;
        else
        {
            ll ans1=1;
            ll ans2=1;
            for(ll i=1;i<=(n/2);i++)
            {
                ans1=((ans1%mod)*(i%mod))%mod;
                ans2=((ans2%mod)*(i%mod))%mod;
            }
             ans1=((ans1%mod)*(ans2%mod))%mod;
             cout<<ans1<<endl;
        }

    }
}

