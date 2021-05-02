#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string a,b;
        ll n,k;
        cin>>n>>k;
        cin>>a>>b;

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        ll i=0;
        ll res=0;
        for(i=0; i<n; i++)
        {
            if(mp[b[i]]>0)
                mp[b[i]]--;
            else if(i+k<=n&&b[i]==b[i+k-1])
            {
                ll f=0;
                for(ll j=b[i]-1; j>=97; j--)
                {
                    if(mp[j]>=k)
                    {
                        f=1;
                        mp[j]-=k;
                        i=i+k-1;
                        break;
                    }
                }
                if(f==0)
                {
                    res=1;
                    break;
                }
            }
            else
            {
                res=1;
                break;
            }
        }
        if(res)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
