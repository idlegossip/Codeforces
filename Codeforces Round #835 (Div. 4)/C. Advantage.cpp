#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n ;
        cin>>n;
        vector<pair<ll,ll > >v;
        vector<ll>v1(n+1);
        ll a;
        for(int i = 0 ; i < n; i++){
            cin>>a;
            v.push_back({a,i});
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i < n; i++){
            int in = v[i].second;
            ll val = v[i].first;
            if(i != n-1){
                v1[in] = val - v[n-1].first;
            }
            else{
                v1[in] = val - v[n-2].first;
            }
        }
        for(int i =0; i <  n; i++){
            cout<<v1[i]<<' ';
        }
        cout<<'\n';
    }
}

