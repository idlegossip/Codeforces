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
        ll sm = 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            sm += a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll mx = 0;
         a = 0;
        for(int i = 0; i < n; i++){
                a += v[i];
                mx = max(mx,(llabs(a)-llabs(sm - a)));
        }
        cout<<mx<<'\n';

    }
}

