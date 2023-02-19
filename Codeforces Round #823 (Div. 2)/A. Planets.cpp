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
        set<int>st;
        map<int,int>mp;
        int c,a;
        cin>>n>>c;
        vector<ll>v;
        ll ans = 0;

        for(int i = 0; i < n; i++){
            cin>>a;
            mp[a]++;
            st.insert(a);
        }
        for(auto x : st){

            if(mp[x]  == 1){
                ans++;
            }
            else{
                a = min(c,mp[x]);
                ans += a;
            }
        }
        cout<<ans<<'\n';
    }
}


