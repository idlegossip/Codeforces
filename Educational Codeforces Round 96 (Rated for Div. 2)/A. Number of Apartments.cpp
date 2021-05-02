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
        ll th=0,fi=0,se=0;
        cin>>n;
        if(n<=2)
        {
            cout<<-1<<endl;
            continue;
        }
        ll f=1;
        for(ll i=0; i<=n/3; i++)
        {
            ll a=3*i;
            if(a==n)
            {
                f=0;
                cout<<i<<" 0 0"<<endl;
                break;
            }
            for(ll j=0; j<=(n-a)/5; j++)
            {
                ll b=5*j;
                if(a+b==n)
                {
                    f=0  ;
                      cout<<i<<" "<<j<<" 0"<<endl;
                    break;
                }
                for(ll k=0; k<=(n-a-b)/7; k++)
                {
                    ll c=7*k;
                    if(a+b+c==n)
                    {
                        f=0       ;
                          cout<<i<<" "<<j<<" "<<k<<endl;
                        break;
                    }
                    if(!f)
                        break;

                }
                if(!f)
                    break;
            }
            if(!f)
                  break;
        }
        if(f)
            cout<<"-1"<<endl;

    }
}
