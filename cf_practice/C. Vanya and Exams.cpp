#include<bits/stdc++.h>
using namespace std;
#define ll long  long
int main()
{
    ll n,r,avg;
    cin>>n>>r>>avg;
    vector<pair<ll,ll> >vp;
    ll a,b,sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        sum+=a;
        vp.push_back({b,a});
    }
    if(sum>=avg*n)
    {
        cout<<0<<endl;
        return 0;
    }
    ll des=n*avg;
    sort(vp.begin(),vp.end());
    ll res=0;
    for(ll i=0;i<n;i++)
    {
        if(vp[i].second>=r)
            continue;
        a=vp[i].second;
        b=vp[i].first;
        ll x=sum+(r-a);
        ll mn=min(des,x);
        if(mn==x)
        {
            res+=(b*(r-a));
            sum=x;
        }
        else
        {
            r=abs(des-sum);
            res+=r*b;
            sum+=r;
            break;
        }

    }

    if(sum>=avg*n)
     cout<<res<<endl;
   else
    cout<<-1<<endl;

}
