#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    vector<ll>v;
    cin>>n;
    ll a;
    map<ll,ll>mp;
    ll mx=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
        mx=max(mp[a],mx);
        v.push_back(a);
    }
    if(mx>2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    vector<ll>v1;
    vector<ll>v2;
    mp.clear();
    for(ll i=0; i<n; i++)
    {
        if(mp[v[i]])
        {
            v1.push_back(v[i]);
            mp[v[i]]++;
        }
        else
        {
            v2.push_back(v[i]);
            mp[v[i]]++;
        }

    }
    n=v1.size();
    cout<<"YES"<<endl;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<v1.size()<<endl;
    for(ll i=0; i<n; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
     n=v2.size();
    for(ll i=n-1; i>=0; i--)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;

}
