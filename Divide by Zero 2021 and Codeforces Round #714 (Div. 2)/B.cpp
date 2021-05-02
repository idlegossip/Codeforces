#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n;
        set<ll>st;
        map<ll,ll>mp;
        ll b;
        for(ll i=0;i<n;i++)
        {
            cin>>b;
            mp[b]++;
            st.insert(b);
        }
        auto a=st.begin();
        if(mp[*a]==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll f=0;
         ll x=*a;
        for(auto i: st)
        {
           x&=i;
        }
         if(x!=*a)
        {
            cout<<0<<endl;
            continue;
        }
         b=mp[*a];
        ll mul1=1,mul2=1,mul3=1;
        for(ll i=b;i>(b-2);i--)
        {
            mul1=(mul1*i)%mod;
        }
        for(ll i=1;i<=n-2;i++)
        {
            mul2=(mul2*i)%mod;
        }
        cout<<(mul1*mul2)%mod<<endl;



    }
}
