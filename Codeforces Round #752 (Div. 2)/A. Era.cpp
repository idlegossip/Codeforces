#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>st;
        ll mx=-1;
        ll n,a;
        cin>>n;
        ll ans=0;
        ll last=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>a;
            if(last+1>=a)
            {
                if(last+1==a)
                last=a;
                else
                    last++;
                continue;
            }

            ans+=(a-last-1);
            last=a;
        }
        cout<<ans<<endl;
    }
}
