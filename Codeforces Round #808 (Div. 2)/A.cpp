#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        vector<ll>v;
        for(ll i=0 ; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=1;
        for(ll i = 1; i<n; i++)
        {
            a = (v[i]%v[0]);
            if(a!=0)
                f=0;

        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
