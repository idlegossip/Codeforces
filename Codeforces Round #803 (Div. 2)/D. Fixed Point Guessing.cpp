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
        ll l =1,r=n;
        ll mid;
        ll ans=0;

        while(l<=r)
        {

            mid=(l+r)/2;
            cout<<"? "<<l<<" "<<mid<<"\n";
             fflush(stdout);
            n = (mid-l+1);
            ll a;
            ll cnt=0;

            for(ll i=0;i<n;i++)
            {
                cin>>a;
                if(a>=l and a<=mid) cnt++;
            }
//            fflush(stdout);

            if(cnt%2)
            {
                //cout<<"x"<<endl;
               r=mid;
            }
            else
            {
                l = mid+1;
            }
            ans = mid;
            if(l==mid)break;

        }
        cout<<"! "<<ans<<"\n";
        fflush(stdout);
    }

}
