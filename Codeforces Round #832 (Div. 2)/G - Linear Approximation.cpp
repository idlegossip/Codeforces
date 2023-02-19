
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,w;
    cin>>n;
    vector<ll>v;
    ll a;
    ll sum  = 0;
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a - i - 1);
    }
    sort(v.begin(),v.end());
    ll ans = (v[(n/2)]);
    for(int i = 0; i < n; i++){
          sum += llabs(v[i] - ans);
    }
    cout<<sum<<'\n';
}

