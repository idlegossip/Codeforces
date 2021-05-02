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
        ll a,n,m;
        cin>>n;
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            ll b=sqrt(a);
            if(b*b!=a)
                f=1;
        }
        if(f)
            cout<<"YES"<<endl;
        else

            cout<<"NO"<<endl;
    }
}
