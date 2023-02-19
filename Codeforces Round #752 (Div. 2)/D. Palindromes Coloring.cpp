#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        string str;
        ll cnt=0;
        ll n,k;
        cin>>n>>k;
        cin>>str;
        for(ll i=0; i<n; i++)
        {
            mp[str[i]-'a']++;
        }

        ll p=0;
        for(ll i=0; i<=26; i++)
        {
            p+=(mp[i]/2);
        }
        ll ans=0LL;
        ll mid;
        ll l=0LL,r=1e13;
        while(l<=r)
        {
             ll mid=(l+r)/2LL;
            ll total=(mid/2LL)*k;
            ll sn=(mid%2)*k;
            ll baki=p-total;
            if(baki>=0LL&&(n-(2LL*total))>=sn)
            {
                l=mid+1LL;
                ans=mid;
            }
            else
                r=mid-1LL;

        }
        cout<<l-1<<endl;

    }
}
