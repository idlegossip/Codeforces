#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,b;
        cin>>n>>b>>x>>y;
        ll ans=0;
       ll a=0;
        for(ll i=0;i<n;i++)
        {
           if(a+x>b)
           {
               a-=y;
           }
           else
            a+=x;
           ans+=a;
        }
        cout<<ans<<endl;
    }
}


