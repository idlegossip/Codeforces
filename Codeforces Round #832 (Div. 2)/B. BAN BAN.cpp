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
        vector<pair<ll,ll> >ans;
        ll l = 2,r = 3 * n;
        while(l < r){
            ans.push_back({l,r});
            l+= 3;
            r -= 3;
        }
        n = ans.size();
        cout<<n<<'\n';
        for(auto [x,y] : ans){
            cout<<x<<' '<<y<<'\n';
        }

    }
}

