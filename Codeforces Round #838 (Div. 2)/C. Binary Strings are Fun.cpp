
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod =  998244353;
ll bigmod(ll n,ll p){
    ll ans = 1;
    while(p){
        if(p & 1){
            ans = ans * n % mod;
        }
        n =  n * n % mod;
        p >>= 1;
    }
    return ans;
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
        cin>>n;
        string s;
        cin>>s;
        ll cnt = 1;
        ll ans  = 1;
        for(int i = 1; i < n; i++){
                if(s[i-1] != s[i]){
                    cnt = 1;
                }
                else{
                    cnt++;
                }
                ans += bigmod(2LL, cnt-1);
                ans %= mod;

        }
        cout<<ans<<'\n';

    }
}

