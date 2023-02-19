#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;

        vector<ll>v,v1;
        string str;
        ll a;


        ll b;
        cin>>n;



        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        v1=v;
        ll mx=0;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            a = v1[i];
            if(!a) continue;
            ll r=n-1;
            ll f=0;
            for(ll j=r;j>i;j--)
            {
                if(f==0 and v1[j]==0)
                {
                    r=j;
                    continue;
                }
                v1[j]^=a;
                f=1;
            }
            ll l =i+1;
            r++;
            ans+=((r-l+1)/2);
            if((r-l+1)%2)
                ans++;
        }
        mx=ans;
        ans=0;
        for(ll i=n-1;i>=0;i--)
        {
            a = v[i];
            if(!a) continue;
            ll l=0;
            ll f=0;
            for(ll j=0;j<i;j++)
            {
                if(f==0 and v[j]==0)
                {
                    l=j;
                    continue;
                }
                v[j]^=a;
                f=1;
            }
            ll r =i+1;
            l++;
            ans+=((r-l+1)/2);
            if((r-l+1)%2)
                ans++;
        }
        mx = min(ans,mx);
        cout<<mx<<endl;




    }
}


