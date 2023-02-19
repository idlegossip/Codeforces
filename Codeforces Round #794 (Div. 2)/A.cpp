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
        ll a;
        ll s=0;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
            v.push_back(a);
        }
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            ll x= s-v[i];

            if(x%(n-1))
                continue;
            else if(x/(n-1)==v[i])
                f=1;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
