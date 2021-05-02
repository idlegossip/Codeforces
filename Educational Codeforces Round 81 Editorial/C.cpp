#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v[30];
        string s,t;
        cin>>s>>t;
        ll ls=s.size() ;
        ll lt=t.size();
        for(ll i=0; i<=29; i++)
        {
            v[i].clear();
        }
        for(ll i=0; i<ls; i++)
        {
              ll x=s[i]-'a';
            v[x].push_back(i);
        }
        ll f=0;
        ll res=1;
        ll last=-1;
        for(ll i=0; i<lt; i++)
        {

            ll a=t[i]-'a';
            ll l,r=v[a].size();

            r--;

            if(r<0)
            {
                f=1;
                break;
            }
            if(last>v[a][r])
            {
                res++;
                last=-1;
            }
              //   cout<<a<<"   as   "<<v[a][r]<<endl;
            ll val=last;
            l=0;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                if(v[a][mid]<val)
                    l=mid+1;
                else
                    r=mid-1;
            }
            last=v[a][r+1]+1;
         //  cout<<r<<"    x   "<<endl;
        }
        if(f)
            cout<<-1<<endl;
        else
            cout<<res<<endl;

    }
}
