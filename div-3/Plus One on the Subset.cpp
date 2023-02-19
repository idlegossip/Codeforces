#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll ans=0;
        ll n;
        cin>>n;
        vector<ll>v;
        ll mx=-1,mn=1e15;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            mx=max(mx,a);
            mn=min(a,mn);
        }

        cout<<mx-mn<<endl;
    }
}
