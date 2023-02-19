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
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            v.push_back(i+1);

        }
        for(ll i=n-1;i>=0;i--)
        {
            if(i-1>=0)
            swap(v[i],v[i-1]);
        }
        for(ll i=0;i<n;i++)
        {
           cout<<v[i]<<" \n"[i==n-1];
        }
    }

}
