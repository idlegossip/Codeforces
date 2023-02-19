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
        cin>>n>>k;
        if(k==1)
        {
            cout<<"YES"<<endl;
             for(ll i=1;i<=n;i++)
            {
                cout<<i;
                    cout<<endl;
            }
            continue;

        }

        ll x=n*k;
        ll e=(x+1)/2;
        if(e%k==0)
        {
            cout<<"YES"<<endl;
            ll f=0;
            for(ll i=1;i<=x;i+=2)
            {
                f++;
                cout<<i<<" ";
                if(f%k==0)
                    cout<<endl;
            }
            f=0;
             for(ll i=2;i<=x;i+=2)
            {
                f++;
                cout<<i<<" ";
                if(f%k==0)
                    cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}


