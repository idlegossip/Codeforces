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

        ll a,res=0;
        cin>>n;
        map<ll,ll>mp;
        set<ll>st;
        ll m=n;

        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            st.insert(a);
            mp[a]++;

        }
        set<ll>::iterator it;
        priority_queue<pair<ll,ll> >pq;
        for(it=st.begin(); it!=st.end(); it++)
        {
            a=*it;
            pq.push(make_pair(mp[a],a));

        }
        pair<ll,ll>p;
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
            n=p.first;
            while(n--)
            {
                if(!pq.empty())
                {
                    p=pq.top();
                    pq.pop();
                    ll x=p.first-1;
                    ll a=p.second;
                    res+=2;
                    if(x)
                    {
                       pq.push(make_pair(x,a));
                    }
                }

            }
        }
        cout<<m-res<<endl;
    }
}
