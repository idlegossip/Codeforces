#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a;
        ll n;
        ll ans;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        if(v[0])
            ans=1;
        else
            ans=0;
        ll f=0;
        for(ll i=1;i<n;i++)
        {
            if(v[i]==0&v[i]==v[i-1])
            {
                f=1;
                break;
            }
            if(v[i]==1&v[i]==v[i-1])
            {
               ans+=5;
            }
            else if(v[i])
                ans++;
        }
        if(f)
            cout<<-1<<endl;
        else
            cout<<ans+1<<endl;
    }
}
