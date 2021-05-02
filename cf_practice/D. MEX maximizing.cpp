#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    map<ll,ll>mp;
    ll mex=0;
    ll x;
    cin>>n>>x;
    set<pair<ll,ll> >sp;
    ll ar[x+10];

    memset(ar,0,sizeof(ar));
    for(ll i=0;i<x;i++)
        sp.insert(make_pair(ar[i],i));
    while(n--)
    {
        cin>>m;
        ll a=m%x;
        sp.erase(make_pair(ar[a],a));
        ar[a]++;
          sp.insert(make_pair(ar[a],a));
        mex=sp.begin()->first*x+sp.begin()->second;
        cout<<mex<<endl;
    }
}
