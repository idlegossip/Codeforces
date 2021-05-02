#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll mx=1,res=n;
        for(ll i=2; i*i<=n; i++)
        {
            ll cnt=0;
            ll m=n;
            while(m%i==0)
            {
                m/=i;
                cnt++;
            }
            if(mx<cnt)
            {
                mx=cnt;
                res=i;
            }
        }
        cout<<mx<<endl;
        for(ll i=1; i<mx; i++)
        {
            cout<<res<<" ";
            n/=res;
        }
        if(n!=1)
            cout<<n<<" ";
        cout<<endl;

    }
    return 0;
}
