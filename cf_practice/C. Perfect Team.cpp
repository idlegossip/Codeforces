#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll c,m,x;
        cin>>c>>m>>x;
        ll mn=0;
        if(x)
        {
          mn=min(c,min(m,x));
        }
        //cout<<mn<<endl;
        c-=mn;
        m-=mn;
        x-=mn;
        ll l=0,r=min(c,m);
        ll mx=c+m;
        ll res=0;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(mid==(mx-2*mid))
            {
                res=mid;
                break;
            }
            else if(mid<(mx-2*mid))
            {
                res=mid;
                l=mid+1;
            }
            else
                r=mid-1;

        }
        cout<<res+mn<<endl;

    }
}
