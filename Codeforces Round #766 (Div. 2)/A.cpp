#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,r,c;
        map<ll,ll>mpr;
        map<ll,ll>mpc;
        cin>>n>>m>>r>>c;
        ll f=0,f1=0;
        ll x=0;
        char ch;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>ch;
                if(ch=='B')
                {
                    f1=1;
                    if(r-1==i||c-1==j)
                        f=1;
                    if(r-1==i&&c-1==j)
                        x=1;
                }
            }
        }

        if(x)
            cout<<0<<endl;
        else if(f)
            cout<<1<<endl;
        else if(f1)
            cout<<2<<endl;
        else
            cout<<-1<<endl;

    }
}

