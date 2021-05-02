#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    map<ll,ll>mp;
    ll a,n,m;
    ll b;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
    }
    cin>>m;
    vector<ll>v;
    vector<ll>v1;
    for(ll i=0; i<m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(ll i=0; i<m; i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    ll mx=0,mx1=0,res=0;
    for(ll i=0; i<m; i++)
    {
        ll sum=mp[v[i]];
        if(sum>mx)
        {
            mx=sum;
            res=i;
        }
        else if(sum==mx&&mp[v1[res]]<mp[v1[i]])
        {
            mx=sum;
            res=i;
        }
    }
    cout<<res+1<<endl;
    return 0;
}
