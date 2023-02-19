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
        ll a,b;
        cin>>a>>b;
        ll c=sqrt(a*a+b*b);
        if(a==0&&b==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(c*c==(a*a+b*b))
        {
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;

    }
}

