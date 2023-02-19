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
        ll a;
        ll f=-1;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }
        for(ll i=0;i<n;i++)
        {
            if(v[i]!=i+1)
            {
                f=i+1;
                break;
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i]==f)
            {
                f--;
                ll k=i;
               while(f<k)
               {
                   swap(v[k--],v[f++]);
               }
                break;
            }

        }
         for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
         cout<<endl;

    }
}



