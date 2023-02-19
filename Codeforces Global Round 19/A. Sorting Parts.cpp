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
        vector<ll>v,v1;
        cin>>n;
        ll a;
        ll f=0;
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(i==0)
            {
                c=a;
                continue;
            }
            if(c>a)
            {
                f=1;
            }
            c=a;

        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
