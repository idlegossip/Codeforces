

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,k;
        ll a,b,c;
        cin>>n>>k;
        ll sum=0;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        if(sum<=k)
        {
            cout<<0<<endl;
        }
        else
        {
            ll res=0;
            sort(v.begin(),v.end());
            v.push_back(0);
            ll res1=5e18;
            ll sum1=0;

            for(ll i=0; i<n; i++)
            {
                sum-=v[n-i];
                sum1=sum+(i*v[0]);
                res=i;
                if(sum1>k)
                {
                    ll d=sum1-k;
                    res+=(d+i)/(i+1);
                }

                res1=min(res1,res);
            }
            cout<<res1<<endl;
        }
    }
}
