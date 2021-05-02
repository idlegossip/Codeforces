#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll n;
        cin>>n;
        vector<ll>v(n+10);
         map<ll,ll>mp1;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            mp1[v[i]]=1;
        }
        ll f=0;
        for(ll i=1; i<1050; i++)
        {
            map<ll,ll>mp;
            f=0;
            for(ll j=0; j<n; j++)
            {
                a=v[j]^i;

                //cout<<a<<" ";
                if(mp[a]||mp1[a]!=1)
                {
                    f=1;
                    break;
                }
                mp[a]=1;

            }
            a=i;
            if(f==0)
                break;

        }
        if(!f)
            cout<<a<<endl;
        else
            cout<<-1<<endl;

    }
}
