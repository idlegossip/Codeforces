#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+7;
int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        ll cnt=0;
        ll a;
        cin>>n;
        vector<ll>v;
       map<ll,ll>us;
        set<ll>st;

        for(ll i=1;i<=n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

        ll mn =LONG_MAX;
        ll ans=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(mn>=v[i])
            {
              mn=v[i];
            }
            else
            {
                mn=0;
                us[v[i]]=1;
            }

        }
        ll f=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(us[v[i]])
                f=1;
            if(f)
            {
                st.insert(v[i]);
            }
        }
        ll x=st.size();

        cout<<x<<endl;
    }
}


