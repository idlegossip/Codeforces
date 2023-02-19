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
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll op=0;
        x=1;
        ll mn=n+1,mx=-1;
        for(ll i=1; i<n; i++)
        {
            if(v[i]==v[i-1])
            {
                mx=max(mx,i);
                mn=min(mn,i);

            }
        }
        if(mn==n+1||mn==mx)
            cout<<0<<endl;
        else
        {
            mx--;
            if(mn==mx)
                cout<<1<<endl;
            else
            cout<<(mx-mn+1)-1<<endl;
        }

    }
}

