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
        cin>>n>>m;
        vector<ll>v;
        ll a;
        ll mx=-1e9-7;
        ll x,y;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a;
                if(a>mx)
                {
                    x=max(i+1,(n-i));
                    y=max(j+1,(m-j));
                    mx=a;
                }

            }
        }
        cout<<x*y<<endl;
    }
}
