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
        ll a;
        cin>>n;
        vector<ll>v,v1;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            v1.push_back(a);
        }
        ll l=1;
        ll r=n-2;
        ll ans=0;
        while(l<n-1)
        {
            if(v[l]>v[l+1]&&v[l]>v[l-1])
            {
                if(l+1!=n-1)
                {
                     v[l+1]=max(v[l],v[l+2]);
                }
                else
                   v[l+1]=v[l];

                ans++;
            }
            l++;

        }

             cout<<ans<<endl;
         for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";

         cout<<endl;
    }
}

