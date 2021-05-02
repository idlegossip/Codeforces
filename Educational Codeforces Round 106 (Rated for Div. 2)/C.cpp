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
        ll od=0,ev=0,mne=LONG_LONG_MAX,mno=LONG_LONG_MAX;
        cin>>n;
        ll a;
        vector<ll>v(n+10);
        ll res=LONG_LONG_MAX;
        for(ll i=1;i<=n;i++)cin>>v[i];
        for(ll i=1;i<=n;i++)
        {
            if(i%2)
            {
                od+=v[i];
                mno=min(v[i],mno);
            }
            else
            {
                ev+=v[i];
                mne=min(v[i],mne);
            }
            if(i>1)
            {
                res=min(res,((ev+od)+((n-(i+1)/2)*mno)+(n-i/2)*mne));
            }
        }
        cout<<res<<endl;
    }
}
