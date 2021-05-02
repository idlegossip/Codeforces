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
        ll a;
        ll sum=0;
        ll n;
        cin>>n;
        ll mn=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        ll s=0;
        a=v[0];
        cout<<a<<" ";
        for(ll i=1; i<n; i++)
        {
            ll b=(v[i]/a);
            if(b)
            {
                cout<<b*a<<" ";
                a=a*b;
            }
            else
            {
                cout<<1<<" ";
                a=1;
            }
        }

        cout<<endl;
    }
}
