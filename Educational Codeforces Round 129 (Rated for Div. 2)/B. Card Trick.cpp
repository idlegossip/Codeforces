#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll mx1=0,mx2=0;
        cin>>n;
        ll a;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
           v.push_back(a);

        }
        cin>>m;
        ll sum=0;
        for(ll i=0; i<m; i++)
        {
            cin>>a;
           sum+=a;

        }
        cout<<v[sum%n]<<endl;
    }

}

