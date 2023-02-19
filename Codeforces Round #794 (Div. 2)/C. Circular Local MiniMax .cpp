#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        ll s=0;
        vector<ll>v;
        multiset<ll>st;
        map<ll,ll>mp;

        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll f=1;
        ll ind=0;
        ll ans[n+1];
        ll l=0;
        for(ll i=0; i<n; i+=2)
        {
            // cout<<v[l]<<" ";
            ans[i]= v[l++];
        }
        // cout<<endl;


        l=0;
        ll r=n/2;
        for(ll i=1; i<n; i+=2)
        {
            ans[i]= v[r++];
        }
        for(ll i=1; i<n; i++)
        {
            if(ans[i-1]==ans[i])
                f=0;
        }

        if(f)
        {
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++)cout<<ans[i]<<" ";
            cout<<endl;

        }
        else
            cout<<"NO"<<endl;



    }
}


