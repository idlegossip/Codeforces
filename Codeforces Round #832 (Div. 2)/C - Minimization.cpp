

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,w;
    cin>>n>>w;
    vector<ll>v;
    ll a;
    ll mn = n + 1;
    ll ind = 0;
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a);
    }
    ll ans = 1;
    for(int i = w; i < n; i+=(w-1)){
        ans++ ;
    }
    cout<<ans<<'\n';
}
