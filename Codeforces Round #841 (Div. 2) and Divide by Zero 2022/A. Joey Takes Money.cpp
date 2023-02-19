
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
        ll sm= 0;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            sm++;
            if(!i){
                ans = a;
            }
            else{
                ans *= a;
            }
        }
        cout<<(2022LL * (sm + ans -1))<<'\n';

    }
}
