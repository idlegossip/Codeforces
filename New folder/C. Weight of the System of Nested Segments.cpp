
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<pair<ll,ll> >vp;
        ll l,r;
        ll sum=0;
        vector<ll>ans;
        cin>>n>>m;
        map<ll,ll>mp;
        for(ll i=0;i<m;i++)
        {
            cin>>l>>r;
            mp[l]=i;
            vp.push_back({r,l});
        }
        sort(vp.begin(),vp.end());
        for(ll i=0;i<(2*n);i++)
        {
            auto a=vp[i];
            sum+=a.first;
            ans.push_back(a.second);
        }
         sort(ans.begin(),ans.end());
        cout<<sum<<endl;
        for(ll i=0;i<n;i++)
        {
           cout<<mp[ans[i]]+1<<" "<<mp[ans[2*n-i-1]]+1<<endl;
        }



    }
}

