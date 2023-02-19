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
        vector<ll>v;
        ll a;
        ll x;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=0;
        ll cnt= 0 ,sum = 0;

        for(ll i = 0; i<n-1; i++)
        {
            if(f and v[i]==0)
            {
                cnt++;
            }
            if(v[i])
                f=1;
                sum+=v[i];

        }
        cout<<sum+cnt<<"\n";

    }
}

