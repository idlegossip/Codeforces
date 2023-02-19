

#include<bits/stdc++.h>
using namespace std;
#define ll long long
    ll res[200010];
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,r,k;
        ll a,b,c;
        string str;
        vector<ll>v;

        vector<pair<ll,ll> >vg,vs;

        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        cin>>str;
         for(ll i=0;i<n;i++)
        {
           if(str[i]=='1')
               vg.push_back({v[i],i});
           else
             vs.push_back({v[i],i});
        }
        sort(vg.begin(),vg.end());
        sort(vs.begin(),vs.end());
        ll g=n,l=1;
        ll siz=vg.size();
        for(ll i=siz-1;i>=0;i--)
        {
            ll ind=vg[i].second;
            res[ind]=g--;
        }
       siz=vs.size();
        for(ll i=0;i<siz;i++)
        {
            ll ind=vs[i].second;
            res[ind]=l++;
        }
        for(ll i=0;i<n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;



    }
}
