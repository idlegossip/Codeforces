#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n,k;
        cin>>n>>k;
        ll a,b;
        ll res=0;
        ll nxt=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll sum=0;
        for(ll i=1; i<n; i++)
        {
            sum+=v[i-1];
            a=v[i]*100LL;
            b=sum*k;
            if(a<=b)
                continue;
            a=(a-b);
            nxt=(a/k);
            if(a%k)
                  nxt++;
            res+=nxt;
            sum+=nxt;
        }
        cout<<res<<endl;
    }
}

