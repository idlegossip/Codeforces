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


        ll a;
        vector<ll>v;
        ll g = 0;
        ll mx = 0;
        for(int i = 0; i < n;i++){
            cin>>a;
           mx = max(a,mx);
           g = __gcd(a,g);
        }
        cout<<(mx)/g<<'\n';
    }
}

