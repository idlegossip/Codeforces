#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a;
        map<ll,ll>mp;
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            mp[a%m]++;
        }
        ll res=0;
        for(ll i=0; i<m; i++)
        {
            if(i==0&&mp[i])
            {
                res++;
                continue;
            }
            if(i==m/2&&m%2==0&&mp[i])
            {
                res++;
                continue;
            }

            if(mp[i])
            {
                a=max(mp[i],mp[m-i]);

                ll b=min(mp[i],mp[m-i]);
                if(a==b)
                    res++;
                else
                    res+=(a-b);
                mp[m-i]=0;
            }

        }
        cout<<res<<endl;

    }
}
