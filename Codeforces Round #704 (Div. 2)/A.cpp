#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll res=LONG_LONG_MAX;
        ll x=p/a;
        x*=a;
        if(x<p)
        {
            x+=a;
            res=x-p;
        }
        else
            res=0;
        x=p/b;
        x*=b;
        if(x<p)
        {
            x+=b;
            res=min(res,x-p);
        }
        else
            res=0;
        x=p/c;
        x*=c;
        if(x<p)
        {
            x+=c;
            res=min(res,x-p);
        }
        else
            res=0;
            cout<<res<<endl;

    }
    return 0;
}

