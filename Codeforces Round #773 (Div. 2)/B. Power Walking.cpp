#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        vector<ll>v;
        set<ll>st;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            st.insert(a);
        }
        a=st.size();
        for(ll i=1;i<=n;i++)
        {
            if(a>=i)
                cout<<a<<" ";
            else
                cout<<i<<" ";
        }
        cout<<endl;

    }
}

