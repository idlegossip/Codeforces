#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        vector<ll>v;
        ll x,y;
        cin>>x>>y;
        if(x==1 and y==1)
        {
            cout<<0<<'\n';
            continue;
        }
//        if(x==1)
//        {
//           cout<<4+2*(y-1)<<'\n';
//            continue;
//        }
//        else if(y==1)
//        {
//            cout<<4+2*(x-1)<<'\n';
//            continue;
//        }
        ll x1=x/2,y1=y/2;

        if(x%2==0 and y%2==0)
        {
             ll ans = min(4*x1+(y-1)-1,4*y1+(x-1)-1);
             cout<<ans<<'\n';
        }
        else if(x%2==0)
        {
           ll ans = min(4*x1+(y-1)-1,4*y1+(x-1)+1);
             cout<<ans<<'\n';

        }
        else if(y%2==0)
        {
             ll ans = min(4*x1+(y-1)+1,4*y1+(x-1)-1);
             cout<<ans<<'\n';
        }
        else
        {
            ll ans = min(4*x1+(y-1)+1,4*y1+(x-1)+1);
             cout<<ans<<'\n';
        }



//        cin>>n;


//        for(ll i=1;i<=n;i++)
//        {
//            cin>>a;
//            v.push_back(a);
//        }

    }
}
