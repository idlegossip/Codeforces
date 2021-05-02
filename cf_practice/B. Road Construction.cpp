#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    ll a,b;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>b;
        mp[a]=1;
        mp[b]=1;
    }
    for(ll j=1; j<=n; j++)
    {
        if(!mp[j])
        {
            a=j;
            break;
        }
    }
    cout<<n-1<<endl;
    for(ll i=1; i<=n; i++)
    {
        if(a==i)
            continue;
        cout<<a<<" "<<i<<endl;
    }
    return 0;
}
