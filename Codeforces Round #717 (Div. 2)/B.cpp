#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        ll a;
        vector<ll>v;
        cin>>n;
        ll f=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        a=0;
        for(ll i=0; i<n-1; i++)
        {
            a^=v[i];
            ll b=0,f1=0;
            for(ll j=i+1; j<n; j++)
            {
                b^=v[j];
                if(b==a)
                    f1=1;
            }
            if(a==b||(b==0&&f1==1))
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

