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
        map<ll,ll>mp;
        ll res=0;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            a=abs(a);
            if(a==0&&mp[a]==0)
            {
                res++;
                mp[a]=1;
            }
            else if(mp[a]<=1)
                res++;
              mp[a]++;

        }
        cout<<res<<endl;
    }
}
