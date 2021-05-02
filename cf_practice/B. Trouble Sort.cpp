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
        vector<ll>v,v1;
        cin>>n;
        ll a;
        ll f1=0,f0=0,f=1;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a)
                f1=1;
            else
                f0=1;
        }
        if(f1==0||f0==0)
        {
            for(ll i=1; i<n; i++)
            {
                if(v[i-1]>v[i])
                    f=0;
            }
        }
        if(f==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

}
