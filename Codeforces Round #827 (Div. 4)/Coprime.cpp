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

        int a;
        vector<int>v;
        set<int>st;
        map<int,int>mp;
        for(int i = 0;i < n; i++){
            cin>>a;
            mp[a] = max(i+1, mp[a]);
            st.insert(a);
        }
        for(auto x : st){
            v.push_back(x);
        }
        n = v.size();
        if(n == 1 and v[0]==1){
            cout<<(mp[v[0]] + mp[v[0]])<<'\n';
            continue;
        }
        else if(n==1){
            cout<<-1<<'\n';
            continue;
        }
        int f = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a = __gcd(v[i],v[j]);
                if(a == 1){
                    ans = max(ans,(mp[v[i]] + mp[v[j]]));
                    f = 1;
                }
            }
        }
        if(f){
            cout<<ans<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }

    }
}

