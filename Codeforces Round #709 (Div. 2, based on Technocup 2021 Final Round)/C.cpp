#include<bits/stdc++.h>
using namespace std;
#define ll long long
  vector<ll>v[1000010];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
         for(ll i=1; i<=m; i++)
        v[i].clear()  ;

        map<ll,ll>mp;
        ll a,b,k;
        ll ind,mx=0;
        for(ll i=1; i<=m; i++)
        {
            cin>>k;
            for(ll j=0; j<k; j++)
            {
                cin>>a;
                if(k==1)
                {
                    mp[a]++;
                    mx=max(mp[a],mx);
                }
                v[i].push_back(a);
            }
        }
        if(mx>(m+1)/2)
            cout<<"NO"<<endl;
        else
        {
            ll ran=(m+1)/2;
            map<ll,ll>mp1;
            vector<ll>res;

            for(ll i=1; i<=m; i++)
            {
                k=v[i].size();
                for(ll j=0; j<k; j++)
                {
                    a=v[i][j];
                    if(k==1)
                    {
                        res.push_back(a);
                        break;
                    }
                    if(mp[a]+mp1[a]<ran)
                    {
                        res.push_back(a);
                        mp1[a]++;
                        break;

                    }
                }
            }
            cout<<"YES"<<endl;
            for(ll i=0; i<res.size(); i++)
                cout<<res[i]<<" ";
            cout<<endl;
        }
    }
}
