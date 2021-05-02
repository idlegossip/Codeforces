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
        ll th=0,fi=0,k,se=0;
        cin>>n>>k;
       ll sum=0;
       vector<ll>v;
       ll a;
       for(ll i=0;i<n;i++)
       {
             cin>>a;
             v.push_back(a);
       }
       sort(v.begin(),v.end(),greater<ll>());
       sum=v[0];
       for(ll i=1;i<=k;i++)
       {
             sum+=(v[i]);

       }
       cout<<sum<<endl;


    }
}

