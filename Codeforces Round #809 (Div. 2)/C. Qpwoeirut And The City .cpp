#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+7;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        vector<ll>pr(n+1,0);
        vector<ll>suf(n+1,0);
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll ans = 0;
        if(n%2)
        {
            for(ll i=1; i<n-1; i+=2)
            {
                ll mx = max({v[i],v[i-1],v[i+1]});
                if(mx == v[i] and v[i+1]!= mx and v[i-1] != mx)
                    continue;
                ans +=(mx-v[i]+1);
            }

        }
        else
        {
            // n is EVEN
            ans = LONG_MAX;
            for(ll i=1; i<n-1; i++)// prefix count odd index  1,3,5,7,..,(n-5-1),(n-3-1)
            {
                pr[i] =pr[i-1];
                if(i%2==0) continue;

                ll mx = max({v[i],v[i-1],v[i+1]});
                if(mx == v[i] and v[i+1]!= mx and v[i-1] != mx) continue;
                pr[i] = pr[i-1]+(mx-v[i]+1);
            }
            pr[n-1] = pr[n-2];
            for(ll i=n-2; i>=1; i--)// sufix count even index n-2,n-4,n-6,.....,4,2;
            {
                suf[i] =suf[i+1];
                if(i%2==1) continue;
                ll mx = max({v[i],v[i-1],v[i+1]});
                if(mx == v[i] and v[i+1]!= mx and v[i-1] != mx) continue;
                suf[i] = suf[i+1]+(mx-v[i]+1);
            }
            suf[0] = suf[1];
           // cout<<suf[0]<<" s p  "<<pr[n-1]<<endl;
          ans =  min(suf[0],pr[n-1]);
             for(ll i=0; i<n-1; i++)
            {
                if(i%2) continue;
                //i  even
                // suf even
               // pr odd
                ans =min(ans,(suf[i+1]+pr[i]));
            }

        }
        cout<<ans<<endl;
    }
}
