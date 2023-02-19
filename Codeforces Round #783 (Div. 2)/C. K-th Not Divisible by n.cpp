#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        ll l=1,r=1e14;
        ll ans=0;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll k=mid-(mid/n);
            //cout<<k<<" "<<mid<<endl;
            if(k>=c)
            {
                r=mid-1;
                  ans=mid;
            }
            else
            {
                 l=mid+1;

            }

        }
        cout<<ans<<endl;



    }

}
