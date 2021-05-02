#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    vector<ll>v;
    ll a;
    map<ll,ll>mp;
    cin>>n;

    vector<ll>v1;
    vector<ll>v2;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    for(ll i=0; i<v1.size(); i++)
    {
        if(i%2)
            cout<<v1[i]<<" ";
    }
    for(ll i=v1.size()-1; i>=0; i--)
    {
        if(i%2==0)
            cout<<v1[i]<<" ";
    }
    cout<<endl;
    return 0;
}
