#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        ll cnt=0;
        ll a;
        cin>>n;
        vector<ll>v;

        for(ll i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        for(ll i=n;i>=2;i-=2)
        {
           swap(v[i-1],v[i-2]);
        }
        for(ll i=1;i<=n;i++)
        {
           cout<<v[i-1]<<" ";
        }
        cout<<endl;

    }
}

