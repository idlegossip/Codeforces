#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    ll mn=min(n,m);
    ll mx=max(n,m);

    ll res=0;
    ll cnt=0;
    for(ll i=1; i<=n; i++ )
    {
        if(mn<=0||mx<2)
            break;
        res++;
        mn--;
        mx-=2;
        ll a=mn;
        ll b=mx;
        mn=min(a,b);
        mx=max(a,b);
    }
    cout<<res<<endl;
    return 0;

}
