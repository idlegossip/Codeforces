#include<bits/stdc++.h>
using namespace std;
#define ll long long
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

        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        ll ans = (n * (n-1));
        ans %= mod;
        for(int i = 1; i <= n; i++){
            ans *= i;
            ans %= mod;
        }
        cout<<ans<<'\n';

    }
}

