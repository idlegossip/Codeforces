#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>v;
        int a;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        ll ans = 0;
        ll x = (2 * v[0])-1;

        for(int i = 1; i < n; i++){
                ans += ((v[i] / x) - 1);
                if(v[i] % x)
                    ans++;
        }
        cout<<ans<<'\n';
    }
}

