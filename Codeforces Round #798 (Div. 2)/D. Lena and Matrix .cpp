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
        string str[n];
        vector<pair<ll,ll> >v;
        for(ll i=0; i<n; i++)
            cin>>str[i];
        pair<ll,ll>ul = {-1,-1},ur= {-1,-1},dl= {-1,-1},dr= {-1,-1},c;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(str[i][j]=='B')
                {
                    if(ul.first==-1||(i+j)<(ul.second+ul.first))ul= {i,j};
                    if(ur.first==-1||(i-j)<(ur.first-ur.second))ur= {i,j};
                    if(dl.first==-1||(i-j)>(dl.first-dl.second))dl= {i,j};
                    if(dr.first==-1||(i+j)>(dr.second+dr.first))dr= {i,j};
                }
            }
        }
        v.push_back(ul);
        v.push_back(ur);
        v.push_back(dl);
        v.push_back(dr);
        ll a,b;
        ll ans=INT_MAX;

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                ll mx=-1;
                for(ll k=0; k<4; k++)
                {
                    mx=max(mx,(llabs(i-v[k].first)+llabs(j-v[k].second)));
                   // cout<<i<<" "<<j<<" "<<v[k].first<<" "<<v[k].second<<endl;
                }
                if(mx<ans)
                {
                    c= {i,j};
                    ans=mx;
                }

            }
        }
        cout<<c.first+1<<" "<<c.second+1<<endl;
    }
}


