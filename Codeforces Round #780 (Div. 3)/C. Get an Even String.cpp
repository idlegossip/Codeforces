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
        string str;
        ll a;
        cin>>str;
        n=str.size();
        map<ll,ll>mp;
        ll l=0,r=n-1;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(ll i=0;i<n-1;i+=2)
        {
            l=i;
            if(str[i]!=str[i+1])
            {
                l=i;
                break;
            }

        }
        for(ll i=n-1;i>0;i-=2)
        {
            r=i;
            if(i-1>=0&&str[i]!=str[i-1])
            {
                break;
            }

        }
        if(l<r)
        {
            ll mx=0;
            for(ll i=l;i<=r;i++)
            {
                mp[str[i]]++;
                mx=max(mp[str[i]],mx);
            }
            //cout<<l<<" "<<r<<endl;

            cout<<(r-l+1)-(2*(mx/2))<<endl;
        }
        else
            cout<<0<<endl;


    }
}
