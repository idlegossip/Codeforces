
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
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a);
    }
    ll ans = 0;
    for(int i = 1; i < n; i++){
        if(v[i-1] >= v[i]){
                ll d = (v[i-1] - v[i])/w;
                d++;
            ans += d;
            v[i] += (d * w);
        }
    }
    cout<<ans<<'\n';
}
