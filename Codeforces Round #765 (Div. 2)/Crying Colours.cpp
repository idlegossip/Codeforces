#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll b1,b2,b3;
        ll r1,r2,r3;
        ll g1,g2,g3;
        ll n;
        cin>>n;
        cin>>r1>>g1>>b1;
        cin>>r2>>g2>>b2;
        cin>>r3>>g3>>b3;
        ll ans=0;
        if(g1>0)
        {
            if(r2)
            {
                ll x=min(r2,g1);
                ans+=x;
                r1+=x;
                g2+=x;
                r2=r2-x;
                g1=g1-x;
                //cout<<" g1 -> r2 "<<x<<endl;
            }
            if(g1)
            {
                ll x=min(r3,g1);

                r1+=x;
                g3+=x;
                g1-=x;
                r3-=x;
                ans+=x;
            }
            // cout<<" g1 "<<ans<<endl;
        }
        if(b1>0)
        {
            if(r2)
            {
                ll x=min(r2,b1);
                ans+=x;
                r1+=x;
                b2+=x;
                r2-=x;
                b1-=x;
            }
            if(b1)
            {
                ll x=min(r3,b1);
                r1+=x;
                b3+=x;
                b1-=x;
                r3-=x;
                ans+=x;
            }
        }
        if(b2>0)
        {
            ans+=b2;
        }
        cout<<ans<<endl;

    }
}
