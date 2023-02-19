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
        vector<ll>v;
        ll cnt = 0;
        ll a;
        for(int i = 0; i < n ; i++){
            cin>>a;
            v.push_back(a);
        }
         for(int i = 1; i < n ; i++){
            if(v[i]%2==v[i-1]%2)
                cnt++;
        }
        cout<<cnt<<'\n';
    }
}
