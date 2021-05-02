#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll a;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll f=1;
    if(v[n-2]+v[n-3]<=v[n-1])
        f=0;
    if(f)
    {
        cout<<"YES"<<endl;
        swap(v[n-2],v[n-1]);
        for(ll i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
}
