#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll x = (1<<n);
        vector<ll>v;
        for(ll i=1; i<=x; i++) v.push_back(i);
        ll ans=0,j=x;
        ll f=0,f1=0,z;
        while(1)
        {
            x=j;
            ll i=0;

//            cout<<x<<" x \n ";
            if(x==2)
            {
                ll a=v[0];
                ll b=v[1];
                printf("? %lld %lld\n",a,b);
                fflush(stdout);
                scanf("%lld",&z);
                if(z==1) ans=a ;
                else if(z==2) ans=b;
                break;
            }
            j=0;
            while(i<x)
            {
                ll a=v[i];
                ll b=v[i+1];
                ll c=v[i+2];
                ll d=v[i+3];
                printf("? %lld %lld\n",a,c);
                fflush(stdout);
                scanf("%lld",&z);
                if(z==1) c=d;
                else if(z==2) a=b;
                else
                {
                    a=b;
                    c=d;
                }
                printf("? %lld %lld\n",a,c);
                fflush(stdout);
                scanf("%lld",&z);
                if(z==1)
                {
//                     cout<<a<<" z \n";
                    v[j++]=a;
                }
                else if(z==2)
                {
//                    cout<<c<<" z \n";
                    v[j++]=c;
                }
                i+=4;

            }
            if(j==1)
                {
                    ans = v[0];
                    break;

                }
        }
        printf("! %lld\n",ans);
        fflush(stdout);
    }
    return 0;
}
