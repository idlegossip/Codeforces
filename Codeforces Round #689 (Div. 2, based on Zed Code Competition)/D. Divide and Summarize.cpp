#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
void recur(vector<ll>v,ll mn,ll mx)
{

    ll n=v.size();
    ll mid=(mn+mx)/2;
    vector<ll>v1,v2;
    ll mn1=LONG_LONG_MAX;

    ll mn2=LONG_LONG_MAX;
    ll mx1=LONG_LONG_MIN;
    ll mx2=LONG_LONG_MIN;
    ll sum=0,sum1=0,f=0,f1=0;
    for(ll i=0; i<n; i++)
    {
        if(v[i]<=mid)
        {
            ll a=v[i];
            sum+=a;
            f=1;

            v1.push_back(a);
            mn1=min(a,mn1);
            mx1=max(a,mx1);
        }
        else
        {
            ll a=v[i];
            sum1+=a;
            f1=1;
            v2.push_back(a);
            mn2=min(a,mn2);
            mx2=max(a,mx2);
        }
    }
    if(f)
        mp[sum]=1;
    if(f1)
        mp[sum1]=1;
    if(n>1)
    {
        if(f&&mn1!=mx1)
            recur(v1,mn1,mx1);
        if(f1&&mn2!=mx2)
            recur(v2,mn2,mx2);
    }
    return;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        ll a;
        vector<ll>v;
        ll n,q,sum=0;
        cin>>n>>q;
        ll mn=LONG_LONG_MAX;
        ll mx=LONG_LONG_MIN;
        for(ll i=0; i <n; i++)
        {
            cin>>a;
            v.push_back(a);
            mn=min(a,mn);
            mx=max(a,mx);
            sum+=a;
        }
        mp[sum]=1;
        recur(v,mn,mx);
        for(ll i=0; i <q; i++)
        {
            cin>>a;
            if(mp[a])
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }

    }
}
