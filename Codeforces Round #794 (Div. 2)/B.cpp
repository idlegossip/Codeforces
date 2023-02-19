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
        o_set<ll>ost;

        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=0;
        ll ans=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(ost.size()==0)
            ost.insert(v[i]);
            else
            {
                ll x  = ost.order_of_key(v[i]);
                if(x)
                {
                  ans++;
                  ost.clear()  ;
                }
                else
                   ost.insert(v[i]);

            }
        }

            cout<<ans<<endl;


    }
}

