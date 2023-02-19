#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 5e3+7;
ll mod;
ll fact[N + 1];
ll invers[N + 1];
ll bigMod(ll n,ll p)
{
    ll ans = 1%mod ; n %= mod; if(n<0) n+=mod;
    while(p)
    {
        if(p&1) ans = ans * n % mod;
        n = n * n % mod;
        p = p>>1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n>>mod;
    ll a = bigMod(2,(n/2));
    if( n %2==0){
         a *= a;
    }
    else{
        a *=  bigMod(2,(n+1)/2);
    }
    a %= mod;
    cout<<(2LL * a) % mod<<'\n';

}

