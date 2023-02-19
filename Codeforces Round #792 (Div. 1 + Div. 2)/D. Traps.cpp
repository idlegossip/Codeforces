#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        ll x,y,z;
        cin>>n>>m;
        vector<ll>vp;
        vector<ll>v;
        ll total=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            total+=a;
            vp.push_back(a-(n-(i+1)));
        }
        sort(vp.rbegin(),vp.rend());
        ll ans=total;
        for(ll i=0;i<m;i++)
        {
            ans-=(vp[i]);
        }
        cout<<ans-(m*(m-1))/2<<endl;

    }
}



