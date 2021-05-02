#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;

        ll n;
        ll a;
        ll p,k;
        cin>>n>>p>>k;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll res=0;
        ll ans=0;
        ll j=0;
        ll sum=0;
        a=p;
        while(j<k)
        {
            p=a;
            if(j-1>=0)
                sum+=v[j-1];
            if(sum<=p)
            {
                res=j;
                p-=sum;
            }
            for(ll i=j; i<n; i+=k)
            {

                if(i+k-1<n&&v[i+k-1]<=p)
                {
                    p-=v[i+k-1];
                    res+=k;
                }
            }
            j++;
            ans=max(ans,res);
            res=0;
        }
        cout<<ans<<endl;

    }
}


