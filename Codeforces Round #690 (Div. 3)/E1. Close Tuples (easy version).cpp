#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll res=0;
        vector<ll>v;
        ll n;
        cin>>n;
        ll a;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<n-2; i++)
        {
            if(v[i+2]-v[i]>2)
                continue;
            ll l=i+2,r=n-1;
            ll ind=i+2;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                if(v[mid]-v[i]<=2)
                {
                    ind=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
            ll cnt=ind-i;
            ll mul=1;
            for(ll i=cnt; i>cnt-2; i--)
                mul*=i;
            cnt=mul/2;
            res+=cnt;
        }
        cout<<res<<endl;

    }
}
