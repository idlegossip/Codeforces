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
        vector<ll>v;
        ll a,ind;
        map<int,int>mp;
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a] = i;
        }
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i==0 and v[i]== 2)
                continue;
            if(i==1 and v[i]==1)
                continue;
            if(i==0)
            {
                ind = mp[2];
                mp[v[i]] = ind;
                mp[2] = i;
                v[ind] = v[i];
                ans++;
                continue;
            }
            if(i==1)
            {
                ind = mp[1];
                mp[v[i]] = ind;
                mp[1]=i;
                v[ind] = v[i];
                ans++;
                continue;
            }
            if(v[i]==i+1)
                continue;
            ind = mp[i+1];
            mp[v[i]] = ind;
            mp[i]=i;
            v[ind] = v[i];
            v[i] = i+1;
            ans++;
        }
        cout<<ans<<'\n';
    }
}

