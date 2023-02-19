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
        vector<ll>v;
        ll a;
        for(ll i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
                cout<<v[j]<<" \n"[j==n-1];
                if(i!=n-1)
                    swap(v[i],v[i+1]);
        }
    }
}

