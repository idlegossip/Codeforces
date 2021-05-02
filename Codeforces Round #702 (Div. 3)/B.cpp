#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a;
        ll n;
        cin>>n;
        ll c=0,c1=0,c2=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            if(a%3==0)
                c++;
            else if(a%3==1)
                c1++;
            else
                c2++;
        }
        a=n/3;
        c=a-c;
        c1=a-c1;
        c2=a-c2;
        ll res=0;
        if(c>0)
        {
            if(c2<0)
            {
                ll a=min(c,llabs(c2));
                res+=a;
                c2+=a;
                c-=a;

            }
            if(c>0&&c1<0)
            {
                a=min(c,llabs(c1));
                res+=(a*2);
                c1+=a;
                c-=a;
            }

        }
        if(c1>0)
        {
            if(c<0)
            {
                ll a=min(c1,llabs(c));
                res+=a;
                c+=a;
                c1-=a;

            }
            if(c1>0&&c2<0)
            {
                a=min(c1,llabs(c2));
                res+=(a*2);
                c1+=a;
                c2-=a;
            }

        }
        if(c2>0)
        {
            if(c1<0)
            {
                ll a=min(c2,llabs(c1));
                res+=a;
                c1+=a;
                c2-=a;

            }
            if(c2>0&&c<0)
            {
                a=min(c2,llabs(c));
                res+=(2*a);
                c+=a;
                c2-=a;
            }

        }

        cout<<res<<endl;
    }

}

