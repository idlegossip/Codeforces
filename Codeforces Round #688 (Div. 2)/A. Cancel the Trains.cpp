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
        cin>>n>>m;
        vector<ll>v(n+10);
        vector<ll>v1(m+10);
        ll cnt=0,res=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        for(ll i=1; i<=m; i++)
        {
            cin>>v1[i];
        }
        map<ll,ll>mp;
        map<ll,ll>mp1;
        for(ll i=1; i<=n; i++)
        {
            cnt=0;
            for(ll j=1; j<=m; j++)
            {
                if(v[i]+j==v1[j]+j)
                {
                    cnt++;
                }
            }
            if(cnt)
            {
                mp[i]=1;
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
