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
        ll a;
        cin>>n;
        ll x=0;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            if(a==1)
                continue;
            x^=a;
        }
        ll f=0;

         for(ll i=0;i<n;i++)
        {
            a=v[i];
            while(a>1)
                f^=1,a--;
        }
        if(f)
            cout<<"errorgorn"<<endl;
        else
            cout<<"maomao90"<<endl;
    }
}
