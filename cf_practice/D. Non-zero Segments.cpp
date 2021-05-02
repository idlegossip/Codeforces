#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    vector<ll>v;
    map<ll,ll>mp;
    ll l;
    cin>>l;
    ll ans=0;
    ll cnt=0,a;
    mp[0]=1;
    for(ll i=0; i<l; i++)
    {
        cin>>a;
        cnt+=a;
        if(mp[cnt])
        {
            ans++;
            mp.clear();
            mp[0]=1;
            cnt=a;
        }
         mp[cnt]=1;

    }
    cout<<ans<<endl;
    return 0;
}

