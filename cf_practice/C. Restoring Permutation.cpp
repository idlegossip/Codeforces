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
        vector<ll>v(2*n+10);
        ll mx=0;
        ll mn=INT_MAX;
        vector<ll>v1;
        ll a,b;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
            mx=max(a,mx);
            mn=min(mn,a);
            mp[a]=1;
        }
        ll f=0;
            vector<ll>v2;
            for(ll i=1; i<=2*n; i++)
            {
                if(!mp[i])
                    v2.push_back(i);
            }
            mp.clear();
            for(ll i=1; i<=n; i++)
            {
                f=1;
                v[2*i-1]=v1[i-1];
                for(ll j=0; j<n; j++)
                {
                    if(mp[v2[j]]==0&&v2[j]>v1[i-1])
                    {
                          f=0;
                        v[2*i]=v2[j];
                        mp[v2[j]]=1;
                        break;
                    }
                }
                if(f)
                  break;

            }
            if(f)
            {
                  cout<<-1<<endl;
                  continue;
            }
            for(ll i=1; i<=2*n; i++)
                cout<<v[i]<<" ";
            cout<<endl;
    }
    return 0;
}

