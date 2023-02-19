#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
ll bigmod(ll b,ll p)
{
    ll ans = 1;
    while(p)
    {
        if(p&1)
        {
            ans = ans * b % mod;
        }
        p>>=1;
        b *= b;
        b %= mod;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a;
    vector<ll>v;
    for(int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll ans = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            ll l = 0, r = i - 1;
            ll lf = 0;
            //cout<<"here\n";
            while(l <= r)
            {
                ll mid = (l+r)>>1LL;
                if((2*v[i]-v[j])>v[mid])
                {
                    lf = mid+1;
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
            }
            ll dif = (2*v[j] - v[i]);
            l = j+1, r =  n-1;
            ll rt = n;
            while(l <= r)
            {
                ll mid = (l+r)>>1LL;
                if(dif <= v[mid])
                {
                    rt = mid;
                    r = mid-1;
                }
                else
                {
                    l = mid+1;
                }
            }
            //cout<<rt<<' ';
            rt = n - rt;
           // cout<<rt<<'\n';
            ans += bigmod(2LL,lf+rt);
            ans %= mod;
        }
    }
    cout<<ans<<'\n';
}
