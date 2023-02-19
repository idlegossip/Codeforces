#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        multiset<ll>mt;
        ll a;
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            mx+=(a/k);
            if(a%k==0)
                continue;
            mt.insert(a%k);
        }
        while(mt.size()>1)
        {
            auto it = --mt.end();
            ll y = *it;
            mt.erase(it);
            y = k - y;
            auto x = mt.lower_bound(y);
            if(x== mt.end())
                break;
            mx++;
            mt.erase(x);

        }
        cout<<mx<<endl;
    }
}




