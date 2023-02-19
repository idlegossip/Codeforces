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
        ll a;
        vector<ll>v;
        ll mx = 0,mn = 1e10;
        map<ll,ll>mp;
        ll n;
        cin>>n;

        for(int i = 0; i < n; i++){
            cin>>a;
            mx= max(a,mx);
            mn = min(a,mn);
            mp[a]++;
        }
        if(mn != mx)
        cout<<(mp[mx] * mp[mn] * 2LL)<<'\n';
        else{
            cout<<((n-1) * n*1LL)<<'\n';
        }
    }
}
