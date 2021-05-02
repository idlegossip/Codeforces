#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        multiset<ll>ms;
        ll a;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            ms.insert(a);
        }
        ll res=0;
        while(ms.size()>0)
        {
            auto it=ms.end();
            it--;
            ll  b =*it;
            ms.erase(it);
            while(b<m&&ms.size()>0)
            {
                ll r=m-b;
                it=ms.upper_bound(r);
                if(it==ms.begin())
                    break;
                it--;
                if(b+*it>m)
                    break;
                b+=*it;
                ms.erase(it);
            }
            res++;
        }
        cout<<res<<endl;
    }
}
