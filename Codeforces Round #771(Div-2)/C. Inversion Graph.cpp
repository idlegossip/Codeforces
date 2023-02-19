#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a;
        cin>>n;
        vector<ll>v;

        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll ans=0;
         ll mx=0,mn=1;
        for(ll i=0; i<n; i++)
        {

            mx=max(mx,v[i]);
            mp[v[i]]=1;
            while(mp[mn])
            {
                mn++;

            }
           // cout<<mn<<" "<<mx<<" "<<v[i]<<endl;

            if(mn==mx+1)
                ans++;

        }
        cout<<ans<<endl;
//        for(ll i=0; i<=n; i++)
//        {
//            vis[i]=0;
//            adj[i].clear();
//        }



    }
}



