#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        vector<ll>v(n+10);
        ll mx=-1,mi=0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            mi+=v[i];
        }
        ll res=n-1;
        for(ll i=1; i*i<=mi; i++)
        {
            if(mi%i)
                continue;
            ll a=mi/i;
            ll b=i;
            ll cnt=0;
            ll sum=0;
            ll f=1;
          ll   ind=0;
            for(ll j=0; j<n; j++)
            {
                sum+=v[j];
                if(sum==a)
                {
                    sum=0;
                    cnt+=(j-ind);
                    ind=j+1;
                }
                if(sum>a)
                {
                    f=0;
                    break;
                }
            }
            if(f)
                res=min(res,cnt);
            f=1;
            cnt=0;
            sum=0;
            ind=0;
            for(ll j=0; j<n; j++)
            {
                sum+=v[j];
                if(sum==b)
                {
                    sum=0;
                    cnt+=(j-ind);
                    ind=j+1;
                }
                if(sum>b)
                {
                    f=0;
                    break;
                }
            }
            if(f)
                res=min(res,cnt);
        }
        cout<<res<<endl;

    }
    return 0;
}

