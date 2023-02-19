#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,k;
        vector<ll>v;
        cin>>n>>l>>r>>k;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll rs=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]>=l&&v[i]<=r&&v[i]<=k)
            {
                k-=v[i];
                rs++;
            }
        }
        cout<<rs<<endl;

    }
}
