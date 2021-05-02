
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
        ll a,b,f=0,ans=0;
        cin>>n>>a>>m>>b;
        f=abs(n-b);
        ll f1=abs(a-m);
        if(f1<=f)
        {
            cout<<n+a<<endl;

        }
        else
            cout<<m+b<<endl;
    }
    return 0;
}

