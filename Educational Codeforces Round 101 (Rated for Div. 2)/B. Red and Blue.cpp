#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        ll a;
          ll sum=0,sum1=0,mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
            mx=max(mx,sum);
        }
        cin>>m;
        ll mx1=0;
        for(ll i=0; i<m; i++)
        {
            cin>>a;
            sum1+=a;
             mx1=max(mx1,sum1);

        }
        cout<<mx+mx1<<endl;

    }
}
