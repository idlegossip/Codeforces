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
        vector<ll>v;
        ll a;
        cin>>n;
        map<ll,ll>mp,mp1;
        for(ll i=0;i<n;i++)
        {
            cin>>a;

            mp1[a]++;
            if(a<=n&&mp[a]==0)
            {
                mp[a]=1;
                mp1[a]--;
                continue;
            }
             v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll f=0,ans=0;

        ll cnt=1;
        for(ll i=1;i<=v.size();i++)
        {
            while(mp[cnt])
            {
                cnt++;
            }

            if(((v[i-1]+1)/2)-1<cnt)
            {
                f=1;
                break;


            }
            cnt++;
            ans++;
        }
        if(f)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }



}
