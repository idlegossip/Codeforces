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
        ll ev=-1,od=0;
        ll a,b;
        vector<pair<ll,ll> >v;
        map<ll,ll>mp;

        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back({a,i+1});
            mp[a]++;
        }
        ll f=0;
        for(auto [x,y] : mp)
        {
            if(y<2)
                f=1;
        }
        if(f)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        vector<ll>ans(n+1);
        vector<ll>vv;
        ll ind=0;
        for(ll i=0;i<n;i++ )
        {
            a=v[i].first;
            b=v[i].second;
            mp[a]--;
           vv.push_back(b);
            if(mp[a]==0)
            {
                ll n1 = vv.size();
                for(ll j=0;j<n1-1;j++)
                {
                    ans[vv[j]]=vv[j+1];
                }
                 ans[vv[n1-1]]=vv[0];
                 vv.clear();
            }
        }
        for(ll i=1;i<=n;i++ )
            cout<<ans[i]<<" ";
        cout<<endl;


    }

}

