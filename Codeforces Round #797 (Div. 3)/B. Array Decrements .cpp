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
        vector<ll>v,v1,v2;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=1;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
            if(a>v[i])
                f=0;
        }
        ll mx=0;

        for(ll i=0; i<n; i++)
        {
            if(v1[i]!=0)
                v2.push_back({v[i]-v1[i]});
            else
                mx=max(mx,v[i]);
        }
        ll x=v2.size();
        sort(v2.begin(),v2.end());
        if(v2.size()&&mx>v2[x-1])
            f=0;

        if(v2.size()>1)
        {
            if(v2[0]!=v2[x-1])
                f=0;
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

