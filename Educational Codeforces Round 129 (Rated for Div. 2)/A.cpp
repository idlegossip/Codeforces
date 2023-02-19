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
        ll mx1=0,mx2=0;
        cin>>n;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            mx1=max(mx1,a);

        }
        cin>>m;
        for(ll i=0; i<m; i++)
        {
            cin>>a;
            mx2=max(mx2,a);

        }
        if(mx1>mx2)
        {
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else if(mx2>mx1)
        {
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
    }

}
