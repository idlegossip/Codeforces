
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k;
        ll p,f,ns,nw,ws,ww;
        cin>>p>>f>>ns>>nw>>ws>>ww;
        if(ws>ww)
        {
            swap(ns,nw);
            swap(ws,ww);
        }
        ll ans=0;
        ll p1=p,f1=f,ns1=ns,nw1=nw,ws1=ws,ww1=ww,res=0;
        for(i=0; i<=max(ns1,nw1); i++)
        {
            p=p1,f=f1,ns=ns1,nw=nw1,ws=ws1,ww=ww1,res=0;
            ll pd=i*ws;
            if(pd<=p&&i<=ns)
            {
                ns-=i;
                res+=i;
                p-=pd;
            }
            pd=p/ww;
            if(pd<=nw)
            {
                res+=pd;
                nw=nw-pd;
            }
            else
            {
                res+=nw;
                nw=0;
            }
            ll fd=f/ws;
            if(fd>=ns)
            {
                res+=ns;
                f-=(ns*ws);
                ns=0;
                fd=f/ww;
                if(fd>=nw)
                {
                    res+=nw;
                }
                else
                {
                    res+=fd;
                }
            }
            else
                res+=fd;
            ans=max(ans,res);
            res=0;
        }
        cout<<ans<<endl;

    }
    return 0;

}
