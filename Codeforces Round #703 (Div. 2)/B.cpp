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
        set<pair<ll,ll> >st;
       vector<pair<ll,ll> >vp;

        ll mn=LONG_LONG_MAX;
        ll a,b;
        for(ll i=1; i<=n; i++)
        {
            cin>>a>>b;
            ll x=a;
            ll y=b;
            vp.push_back({a,b});
            st.insert({a,b});
            while(a)
            {
                  a/=2;
                  st.insert({a,y});
            }
            a=b;
            while(a)
            {
                  a=a/2;
                  st.insert({x,a});
            }
        }
        set<pair<ll,ll> >::iterator it;
        ll sum=0;
        ll ind=0;
        pair<ll,ll>p;
        for( it=st.begin(); it!=st.end(); it++)
        {
              p=*it;
            ll x=p.first;
            ll y=p.second;
            sum=0;
            for(ll j=0; j<n; j++)
            {
                a=vp[j].first;
                b=vp[j].second;
                sum+=(abs(x-a)+abs(y-b));

            }
            if(sum<mn)
            {
                  mn=sum;
                  ind=1;
            }
            else if(sum==mn)
            {
                  ind++;
            }
        }
        cout<<ind<<endl;


    }
}
