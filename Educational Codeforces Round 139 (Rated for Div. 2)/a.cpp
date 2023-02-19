#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll ans = 0;
        ll tm = 1;
        while((tm * 10LL) <= n){
            tm *= 10LL;
            ans += 9;
        }
        ans += (n / tm);
        cout<<ans<<'\n';
    }
}
