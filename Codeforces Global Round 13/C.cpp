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
        ll res=0;
        cin>>n;
        ll ar[n+10];
        ll mx=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        ll z=0;
        for(ll i=1; i<=n; i++)
        {
            ll a=ar[i];
            if(a==1)
                continue;
            if(i==n)
            {
                res+=(a-1);
                continue;
            }
            ll x=a+i;
            if(x>n)
            {
                res+=(x-n)   ;
                x-=(x-n);
            }
            x=x-i;
            ll z=0;
            while(x>1)
            {
                a=x+i;
                if(ar[a]==1)
                {
                       x--;
                res++;
                      z++;
                      continue;
                }
                while(a<=n)
                {
                  ll y=a+ar[a];
                    ar[a]=ar[a]-z-1;
                    ar[a]=max(1LL,ar[a]);
                    a=y;
                }
                x--;
                res++;
            }

        }
        cout<<res<<endl;


    }
}
