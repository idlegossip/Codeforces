

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll sum=1;
        ll a,b=0,c,d;
        ll f=0;
        cin>>n;
        a=sqrt(n);
        b=(a-1)+(n-a)/a;
        if((n-a)%a)
            b++;
        cout<<b<<endl;

    }
    return 0;
}
