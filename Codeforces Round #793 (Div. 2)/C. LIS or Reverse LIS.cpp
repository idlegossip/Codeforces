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
        cin>>n;
        string s;
        vector<ll>dup,dis;
        ll a;
        ll ans=(1LL<<32)-1;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(mp[a]==2) continue;

             if(mp[a]==0)
                dis.push_back(a);
           else if(mp[a]==1)
                dup.push_back(a);
                mp[a]++;
        }
        ll x =dis.size();
        ll y = dup.size();
        ans = x+y;
        cout<<(ans+1)/2<<endl;
    }
}


