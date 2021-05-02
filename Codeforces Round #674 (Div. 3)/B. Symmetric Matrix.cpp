
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
        ll a,b,c,d;
        ll f=0,f1=0;
        cin>>n>>m;
        for(ll i=1; i<=n; i++)
        {
            cin>>a>>b>>c>>d;
            if(b==c)
                f=1;
        }
        if(!f||m%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
