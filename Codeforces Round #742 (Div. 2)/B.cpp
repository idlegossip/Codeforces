#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    map<ll,ll>mp;
    ll mex=0;
    for(ll i=1; i<=500000; i++)
    {
        mex^=i;
        mp[i]=mex;
    }
    while(t--)
    {
        ll n;
        ll a,b;
        cin>>a>>b;
        n=mp[a-1];
       // cout<<" n  "<<a<<" "<<(n^b)<<endl;
        if(n!=b&&a==(n^b))
        {
            cout<<a+2<<endl;
            continue;
        }
        if(n==b)
        {
            cout<<a<<endl;
        }
        else
            cout<<a+1<<endl;
    }
}
