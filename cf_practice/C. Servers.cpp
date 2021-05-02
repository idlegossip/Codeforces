#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ar
{
    ll t,k,d;
};
int main()
{

    ll n,q;
    cin>>n>>q;
    map<ll,ll>mp;
    map<ll,ll>ed;
    ar ar1[q+10];
    for(ll i=1; i<=q; i++)
    {
        cin>>ar1[i].t>>ar1[i].k>>ar1[i].d;
    }
    ll cnt=0;
    vector<ll>v;
    ll time=0,m;
    for(ll i=1; i<=q; i++)
    {
        ll res=0;
        for(ll j=1; j<=n; j++)
        {
            if(ed[j]<=ar1[i].t&&ed[j]>0)
                cnt--,ed[j]=0;
        }
        if(cnt+ar1[i].k<=n)
        {
            cnt+=ar1[i].k;
            for(ll j=1; j<=n; j++)
            {
                if(ed[j]<=ar1[i].t)
                {
                    ed[j]+=ar1[i].t+ar1[i].d;
                    res+=j;
                    ar1[i].k--;
                }
                if(!ar1[i].k)
                    break;
            }
            v.push_back(res);
        }
        else
            v.push_back(-1);
    }
    for(ll i=0; i<q; i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;


}

