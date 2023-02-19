#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll n;
bool mac(ll val)
{
    vector<ll>vv=v;

    for(ll i=n-1; i>=2; i--)
    {
     //cout<<val<<" val " <<i<<endl;
        if(vv[i]<val)
            return false;
        ll d=(min(v[i],vv[i]-val))/3LL;
        //cout<<d<<endl;
        vv[i-1]+=d;
        vv[i-2]+=(2*d);

    }
   return (vv[0]>=val&&vv[1]>=val);

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        v.clear();
        ll a;
        cin>>n;
         ll l=0,r=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            r=max(r,a);
        }

        ll mid=0;
        while(l<r)
        {
          mid=l+(r-l+1)/2LL;
            if(mac(mid))
                l=mid;
            else
                r=mid-1;
        }
       cout<<l<<endl;

    }

}
