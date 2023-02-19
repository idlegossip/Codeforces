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
        cin>>n;
        vector<ll>v,v1,v2;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        ll mx=v1[0];
        cout<<v1[0]-v[0]<<" ";

        for(ll i=1; i<n; i++)
        {
            mx  = max(mx,v[i]);
            if(mx>v1[i])
                cout<<0<<" ";
            else
            cout<<v1[i] - mx<<" ";
             mx  = max(mx,v1[i]);


        }
        cout<<endl;
    }
}


