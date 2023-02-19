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
        cin>>n;
        string s;
        ll a;
        ll ans=(1LL<<32)-1;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(i!=a)
                ans&=a;
        }
        cout<<ans<<endl;
    }
}

