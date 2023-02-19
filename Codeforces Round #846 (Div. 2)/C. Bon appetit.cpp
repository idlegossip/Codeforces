#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ind = 0;
        vector<ll>v1;
        ll a;
        ll ls = 0;
        map<ll,ll>mp;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            mp[a]++;
        }
        priority_queue<ll>pq;
        for(int i = 0; i <= n; i++)
        {
            if(mp[i])
                pq.push(mp[i]);
        }
        for(int i = 0; i < m; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        sort(v1.rbegin(),v1.rend());
        ll ans = 0;
        for(int i = 0; i < m; i++)
        {
            ll st = pq.top();
           // cout<<a<<'h';
            ll mn = min(v1[i],st);
            ans += mn;
            pq.pop();
            st-= mn;
            pq.push(st);
        }
        cout<<ans<<'\n';
    }
}



