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
        for(int i = 0; i < n;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]){
            cout<<(n/2)<<'\n';
        }
        else{
            ll mx = (n/2);
             for(ll i = 1; i < n; i++){
                if(v[i] != v[i-1]){
                    ll l = i;
                    ll r = n - l;
                    mx = max(mx,(l* r));
                }
             }
             cout<<mx<<'\n';
        }

    }
}

