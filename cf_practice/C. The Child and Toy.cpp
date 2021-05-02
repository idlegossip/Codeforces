#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n+10);
    ll a,b,sum=0;
    for(ll i=0;i<n;i++)
        cin>>v[i];
    for(ll i=0;i<m;i++)
    {
        cin>>a>>b;
        a--;
        b--;
        sum+=min(v[a],v[b]);

    }
    cout<<sum<<endl;
}
