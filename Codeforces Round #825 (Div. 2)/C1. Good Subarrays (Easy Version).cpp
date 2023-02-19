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
        int n;
        cin>>n;
        vector<int>v,v1;
        int a;
        for(int i = 0; i < n; i++){
           cin>>a;
           v.push_back(a);
        }
        ll ans = 0;
        ll l = 0, r = 0;
        while(l < n){
            while(r < n and (r - l + 1) <= v[r]){
                r++;
            }
            ans += ( r-l);
            l++;
        }
        cout<<ans<<'\n';
    }
}

