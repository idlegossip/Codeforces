#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=998244353;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        vector<ll>v;
        ll a;
        for(ll i=0; i<=r; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll f=0;
        for(ll i=r; i>=0; i--)
        {
            set<ll>st;
            for(ll k=0; k<=r; k++)
            {
                a=(v[k]^v[i]);
                st.insert(a);

            }
            if(st.size()==(r+1))
            {
                f=v[i];
                break;
            }
            st.clear();
        }
        cout<<f<<endl;

    }
}


