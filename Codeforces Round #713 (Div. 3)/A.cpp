#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        map<ll,ll>mp;
        ll ind=0;
        ll n;
        vector<ll>v;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
        }
       for(ll i=0;i<n;i++)
        {
            if(mp[v[i]]==1)
            ind=i;
        }
        cout<<ind+1<<endl;
    }
}
