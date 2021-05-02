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
    ll sum=(n*(n+1))/2;
    ll c=0;
    ll a=1;
    while(a<=n)
    {
        sum-=a;
        c+=a;
        a*=2;
    }
    cout<<sum-c<<endl;
    }
}
