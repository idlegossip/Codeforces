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
        cin>>n;
       ll sum=0;
       vector<ll>v;
       ll a=n;
       cout<<2<<endl;
       for(ll i=n-1;i>=1;i--)
       {
           cout<<i<<" "<<a<<endl;
           a=(a+i+1)/2;
       }

    }
    return 0;
}


