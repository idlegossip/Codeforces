#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<ll,ll>,ll>mp;
ll n;
ll inf=1e18;
ll goal=1;
ll recur(ll x,ll val)
{
    vector<ll>v;
    ll len=0;
    ll d=x;
    while(d)
    {
        ll a=d%10;
        d/=10;
        if(a>1)
            v.push_back(a);
        len++;
    }
    if(len==n)
        return 0;
    if(goal<x||len>n||v.size()==0)
        return inf;

    sort(v.rbegin(),v.rend());
    if(mp[ {val,x}])
        return mp[ {val,x}];
    ll n1=v.size();
    ll in=inf;
    ll use[11];
    for(ll i=0;i<10;i++)
        use[i]=0;
    for(ll i=0; i<n1; i++)
    {
        if(use[v[i]]==0)
         in=min(in,1+recur(x*v[i],v[i]));
         use[v[i]]=1;
    }
    mp[{val,x}]=in;
    return mp[{val,x}];


}
int main()
{
    ll m;
    cin>>n>>m;
    for(ll i=1;i<n;i++)
        goal*=10;

    vector<ll>v;
    ll len=0;
    ll d=m;
    while(d)
    {
        ll a=d%10;
        d/=10;
        if(a>1)
            v.push_back(a);
        len++;
    }
    if(len>n||v.size()==0)
        cout<<-1<<endl;
    else if(n==len)
        cout<<0<<endl;
    else
        cout<<recur(m,0)<<endl;

}
