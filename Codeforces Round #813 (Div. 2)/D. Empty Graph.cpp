#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9;

ll bs(vector<ll>v,ll mid,ll k)
{
    if(mid>N) return 0;

    ll n = v.size();
   // cout<<mid<<endl;
    for(ll i=0; i<n; i++)
    {
        if(2*v[i]<mid)
        {
            k--;
            v[i] = N;
        }
        //cout<<v[i]<<" \n"[i==n-1];
    }
    if(k<0) return false;
    if(k==0)
    {
        ll mx = 0;
        ll mn;
        ll f=1;
        for(ll i=0; i<n-1; i++)
        {
           mn = min(v[i],v[i+1]);
           mx = max(mn,mx);
        }
        //cout<<mx<<" "<<endl;;
        if(mx<mid)
            f=0;
        return f;
    }
    else if(k==1)
    {
        ll mn;
        ll f=0;
        for(ll i=0; i<n; i++)
        {
            mn = v[i];
            if(mn>=mid) f=1;
        }
        return f;
    }
    else
        return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        ll cnt=0;
        ll a;
        cin>>n>>k;
        vector<ll>v;
        for(ll i=0; i<n ; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll ans=0;
        ll l=0,r=2*N+10;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;
            ll f =  bs(v,mid,k);
            if(f)
            {
                l = mid+1;
                ans = mid;
                //cout<<l<<" l r "<<r<<endl;
            }
            else
                r = mid-1;
        }
        cout<<ans<<endl;
    }
}


