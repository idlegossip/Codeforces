#include<bits/stdc++.h>
using namespace std;
using ll  = long long;
const ll mod = 1e9+7;
ll power(ll n,ll k)
{
    ll ans = 1;
    if(n <= 0)
        ans = 0;
    n %= mod;
    while(k)
    {
        if((k & 1))
        {
            ans = (n * ans) % mod;
        }
        k>>=1;
        n = n * n % mod;
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,a,b,x;
    cin>>a>>b>>n>>x;
    if( a == 1){
        cout<<(x % mod+ (b%mod )* (n%mod) % mod ) % mod<<'\n';
        return 0;
    }
    ll y = power(a,n);
    ll z = (y - 1) * b % mod;
    a = a - 1;
    ll inv = power(a, mod - 2);
    z = z * inv % mod;
    y = y * x % mod;
    cout<<(y+z)% mod<<'\n';

}
