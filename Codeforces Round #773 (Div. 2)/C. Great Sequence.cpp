#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a,x;
        map<ll,ll>mp;
        vector<ll>v;
        cin>>n>>x;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;

        }
        ll ans=0;
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if(mp[v[i]]==0)
                continue;
            a=v[i]*x;
            mp[v[i]]--;
            if(mp[a])
            {
                mp[a]--;
            }
            else
                ans++;
        }
        cout<<ans<<endl;
    }
}

