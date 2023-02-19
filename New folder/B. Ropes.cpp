#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll n,k;
vector<ll>v;

ll foo(ll val)
{
    if(val<=0)
        return 1;
    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        cnt+=(v[i]/val);

    }
    if(cnt>=k)
        return 1;
    else
        return 0;

}
ll foo(double val)
{

    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        cnt+=(v[i]/val);

    }
    if(cnt>=k)
        return 1;
    else
        return 0;

}

int main()
{
    cin>>n>>k;
    ll a;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll l=0,r=1e18;
    double ans=0.0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(foo(mid))
        {
            l=mid+1;
            ans=mid;
        }
        else
            r=mid-1;

    }




    double l1=ans+0.000000000,r1=ans+1,eps=0.00000001;


    for(ll i=0; i<10000; i++)
    {
        double mid=l1+((r1-l1)/2.000);
        if(foo(mid))
        {
            l1=mid;
            ans=mid;
        }
        else
            r1=mid;

    }
    cout<<setprecision(15)<<fixed<<ans<<endl;
}
