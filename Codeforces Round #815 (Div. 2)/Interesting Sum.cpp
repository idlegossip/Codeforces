#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll  t;
    cin>>t;
    while(t--)
    {
        ll n;

        cin>>n;
        vector<ll>v;



        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cout<<(v[n-1]+v[n-2]-v[0]-v[1])<<'\n';
    }
}

