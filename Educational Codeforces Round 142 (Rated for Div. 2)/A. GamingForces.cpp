
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
        map<int,int>mp;
        for(int i = 0; i < n; i++){
            cin>>a;
            mp[a]++;
            v.push_back(a);
        }
        ll ans = n - mp[1];
        ans += (mp[1]+1)/2;
        cout<<ans<<'\n';
    }
}
