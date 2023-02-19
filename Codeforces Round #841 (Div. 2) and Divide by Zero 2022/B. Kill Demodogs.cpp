#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
const ll mod = 1e9+7;
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
        ll a;
        vector<ll>v;
        if(n % 2)
        {
            ll sm = (n * (n+1))/2LL;
            ll mid = n/2;
            ll mid1 = (n+1)/2;
            ll sm1 = (mid1 * (mid1+1))/2LL;
            sm1 = sm -sm1;

            ll ans = (mid1 % mod * sm % mod) % mod ;
            ans += (n % mod * sm1 % mod) % mod;
            ans %= mod;
            ans += ((mid * ( mid + 1))/2LL) % mod;
            ans %= mod;
            cout<<(2022LL * ans) % mod<<'\n';



        }
        else{
            ll sm = (n * (n+1))/2LL;
            ll mid = n/2;
            ll mid1 = (n+1)/2;
            ll sm1 = (mid1 * (mid1+1))/2LL;
            sm1 = sm -sm1;

            ll ans = (mid1 % mod * sm % mod) % mod ;
            ans += (n % mod * sm1 % mod) % mod;
            ans %= mod;
            ans += ((mid * ( mid + 1))/2LL) % mod;
            ans %= mod;
            cout<<(2022LL * (ans + 1LL)) % mod<<'\n';

        }


    }
}

