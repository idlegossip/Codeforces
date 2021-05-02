#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll>v;
    for(ll i=1;i<=10;i++)
    {
        for(ll j=1;j<=(1<<i);j++)
        {
            ll x=0;
            for(ll k=0;k<i;k++)
            {
                if(j&(1<<k))
                    x=x*10+7;
                else
                    x=x*10+4;
            }
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    ll l,r;
    cin>>l>>r;
    auto a=lower_bound(v.begin(),v.end(),l);
    ll b=*a;
    ll c=0;
    ll ans=0;
    ll ind=0;
    while(l<=r)
    {

        while(v[ind]<=b)
        ind++;
        ll m=min(r,v[ind-1]);
        ans+=(m-l+1)*v[ind-1];
        b=v[ind];
        l=v[ind-1]+1;
    }
    cout<<ans<<endl;
}

