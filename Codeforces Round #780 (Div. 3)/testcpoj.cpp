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
        cin>>n;
        vector<ll>v;
        ll a,b;
        set<ll>st;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            st.insert(a);
            mp[a]++;
        }
        ll mn=0;
        for(ll x : st)
        {
            mn=llabs(mn-mp[x]);
        }
        cout<<mn<<endl;


    }

}
