#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        map<ll,ll>mp;
        ll a;
        vector<ll>v;
        for(ll i=0;i<n;i++)cin>>a,v.push_back(a),mp[a]=1;
        ll mn=v[0],mx=v[n-1];
        ll f=1;
        for(ll i=mn;i<=mx;i++)
        {
            if(mp[i])
                continue;
            f--;

        }
        if(f>=-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
}


