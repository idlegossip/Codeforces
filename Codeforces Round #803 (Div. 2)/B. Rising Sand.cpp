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
        ll a,k;
        cin>>n>>k;
        vector<ll>v,p(n+2,0);

        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll ans=0;
        ll f=-1;
        for(ll i=1; i<n-1; i++)
        {
            a= v[i]-(v[i+1]+v[i-1]);
            if(k==1)
                ans++,i++;
            else if(a>0)
                ans++,i++;
        }
        cout<<ans<<endl;

    }
}
