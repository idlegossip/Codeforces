#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,a1,a3;
        cin>>a>>a1>>a3;
        a+=a3;
        ll d;
        if(a>2*a1)
        {
            d=a-2*a1;
            ll x=d/2;


             cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }
}
