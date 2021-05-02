

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll a;
        ll mn=LONG_LONG_MAX;
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            mx=max(a,mx);
            mn=min(a,mn);
            v.push_back(a);
        }
        if(mn==mx)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            cout<<"YES"<<endl;
            map<ll,ll>mp;
            for(ll i=0; i<n; i++)
            {
                if(mp[i])
                    continue;
                for(ll j=0; j<n; j++)
                {
                    if(i==j||v[j]==v[i])
                        continue;
                    else
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                        mp[j]=1;
                        break;
                    }
                }
            }

        }

    }
    return 0;
}
