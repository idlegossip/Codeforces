#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define P pair<int,int>
#define fi first
#define se second
#define MP make_pair
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            map<ll,ll>mp;
             map<ll,ll>mp1;
             vector<ll>v;
             vector<ll>v1;
             ll res=0;
             ll a,b,k,c;
             cin>>a>>b>>k;
             for(ll i=0;i<k;i++)
             {
                   cin>>c;
                   mp[c]++;
                   v.pb(c);
             }
             for(ll i=0;i<k;i++)
             {
                   cin>>c;
                   v1.pb(c);
                   mp1[c]++;
             }

             for(ll i=0;i<k;i++)
             {
                   a=mp[v[i]];
                    b=mp1[v1[i]];
                       c=k;
                    res+=c-a-b;
                    res++;



             }
             cout<<res/2<<endl;

      }
}
