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
        vector<ll>v;
        ll a,b;
        map<ll,ll>mp;
        ll mx=0;
        b=-1;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(b!=a)
                v.push_back(a),mp[a]++;
            b=a;
        }
        ll mn=LONG_LONG_MAX;
        ll cnt=0;
        n=v.size();
         mp[v[0]]--;
         mp[v[n-1]]--;
        for(ll i=0; i<n; i++)
        {
            mn=min(mn,mp[v[i]]);
        }
     //   cout<<endl;

        cout<<mn+1<<endl;
    }
    return 0;
}

