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
        vector<ll>v;
        cin>>n;
        vector<ll>p(n+1,0),p1(n+1,0);
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            p[i+1]=p[i]+v[i];
        }
         sort(v.rbegin(),v.rend());
         for(ll i=0;i<n;i++)
        {
            p1[i+1]=p1[i]+v[i];
        }
        ll i=1;
        while(i<=(n+1)/2)
        {
           if(p[i]<p1[i-1])
           {
               f=1;
           }
           i++;
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}

