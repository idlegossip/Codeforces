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
        cin>>n;
        vector<ll>v;
        ll a;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
        }
        ll f=1;
        for(ll i=0;i<n;i++)
        {
            a=v[i];
            if(a<=n&&mp[a]>1)
            {
                while(a>0&&mp[a])
                {
                  a/=2;
                }
                mp[a]=1;
            }
            else if(a>n)
            {
                while(a>0)
                {
                  a/=2;
                  if(a<=n&&mp[a]==0)
                  {
                      mp[a]=1;
                      break;
                  }
                }
            }

        }

        for(ll i=1;i<=n;i++)
            if(!mp[i])
            f=0;
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}


