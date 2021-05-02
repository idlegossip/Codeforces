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
            ll a,b,c;
            ll cnt=0;
            ll res=INT_MAX;
            ll f=0;
            cin>>n;

            vector<ll>v[n+10];
            set<ll>st;
            for(ll i=1;i<=n;i++)
            {
                  cin>>a;
                  st.insert(a);
                  v[a].push_back(i);
            }
            set<ll>:: iterator it;
            for( it=st.begin();it!=st.end();it++)
            {
                  a=*it;
                  if(v[a].size()>1)
                  {
                        f=1;
                        for(ll j=1;j<v[a].size();j++)
                        {
                              b=v[a][j]-v[a][j-1];
                              res=min(res,b);

                        }
                  }

            }
            if(f)
                  cout<<res+1<<endl;
            else
                  cout<<-1<<endl;
      }
      return 0;
}
