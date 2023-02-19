#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ind = 0;
        vector<ll>v,pre(n+1,0);
        ll a;
        ll ls = 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
            pre[i] = a;
            if(i)
                pre[i] += pre[i-1];
        }
        ls = pre[n-1];
        ll ans = 1;
        for(int i = 0; i < n-1; i++){
            ll rm = pre[n-1] - pre[i];
            ll g = __gcd(rm,pre[i]);
            ans = max(g,ans);
        }
        cout<<ans<<'\n';
    }
}


