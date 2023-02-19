#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n;
        cin>>n;
        ll d=0;
        ll m=10;
        ll x=n;
        while(n)
        {
            d++;
            ll a=n%10;
            n/=10;
            m=min(m,a);
        }
        if(d<=2)
            cout<<x%10<<endl;
        else
            cout<<m<<endl;
    }
}
