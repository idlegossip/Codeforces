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
        vector<ll>v[n*m+10];
        ll a=0;
        //cout<<v.size()<<endl;
        vector<pair<ll,pair<ll,ll> > >vp,vp1;
        map<pair<ll,ll>,ll >mp;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                cin>>a;
                v[i].push_back(a);
                vp.push_back({a,{i,j-1}});
            }
            sort(v[i].begin(),v[i].end());
        }
        sort(vp.begin(),vp.end());
        for(ll i=1; i<=m; i++)
        {
            ll x=vp[i-1].second.first;
            ll y=vp[i-1].second.second;
            if(vp[i-1].first==v[x][i-1])
                continue;
            ll b=-1;
            for(ll j=0; j<m; j++)
            {
                if(v[x][j]==vp[i-1].first)
                {
                    b=j;
                    break;
                }
            }
            swap(v[x][i-1],v[x][b]);
        }
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                cout<<v[i][j-1]<<" ";
            }
            cout<<endl;
        }
    }
}

