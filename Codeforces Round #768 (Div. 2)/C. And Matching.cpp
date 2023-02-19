#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        ll a;
        vector<pair<ll,ll> >v;
        ll n;
        ll k;
        cin>>n>>k;
        if(n==4&&n-1==k)
        {
            cout<<-1<<endl;
            continue;
        }
        if(k<=1)
        {
            if(k==0)
            {
                for(ll i=0; i<n/2; i++)
                {
                    v.push_back({i,n-i-1}) ;
                }

            }
            else
            {
                v.push_back({0,n-2}) ;
                v.push_back({1,n-1}) ;
                for(ll i=2; i<n/2; i++)
                {
                    v.push_back({i,n-i-1}) ;
                }
            }

        }
        else if(k==n-1)
        {
            v.push_back({n-1,n-2}) ;
            v.push_back({1,n-3}) ;
            v.push_back({0,2}) ;
            mp[0]=1;
            mp[1]=1;
            mp[2]=1;
            mp[n-1]=1;
            mp[n-2]=1;
            mp[n-3]=1;
            for(ll i=0; i<n/2; i++)
            {
                if(mp[i])
                    continue;
                v.push_back({i,n-i-1}) ;
            }
        }
        else
        {
            v.push_back({0,n-k-1}) ;
            v.push_back({n-1,k}) ;
            mp[0]=1;
            mp[k]=1;
            mp[n-k-1]=1;
            mp[n-1]=1;
            for(ll i=0; i<n/2; i++)
            {
               if(mp[i])
                    continue;
                v.push_back({i,n-i-1}) ;
            }

        }
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

    }
}
