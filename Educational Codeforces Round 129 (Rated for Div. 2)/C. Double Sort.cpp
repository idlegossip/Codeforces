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
        ll mx1=0,mx2=0;
        cin>>n;
        ll a;
        vector<ll>v,v1;
        vector<pair<ll,ll> >ans;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
           v.push_back(a);

        }
        for(ll i=0; i<n; i++)
        {
            cin>>a;
           v1.push_back(a);

        }

        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(v[i]>v[j]||v1[i]>v1[j])
                {
                    swap(v[i],v[j]);
                    swap(v1[i],v1[j]);
                    ans.push_back({i,j});
                }

            }
        }
        ll f=0;
        for(ll i=1;i<n;i++)
        {
          if(v[i]<v[i-1]||v1[i]<v1[i-1])
                f=1;
        }
        if(f)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans.size()<<endl;
            for(ll i=0;i<ans.size();i++)
                cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
        }

    }

}

