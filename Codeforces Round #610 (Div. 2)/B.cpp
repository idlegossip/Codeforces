#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

      ll n;
      ll t;
      cin>>t;
      while(t--)
      {
            vector<ll>v;
            ll n;
            ll a;
            ll p,k;
            cin>>n>>p>>k;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  v.push_back(a);
            }
            sort(v.begin(),v.end());
            ll res=0;
            a=p;
            for(ll i=0;i<n;i+=k)
            {
                  if(i+1<n&&v[i+1]<=p)
                  {
                    p-=v[i+1]    ;
                    res+=2;
                  }
            }
            p=a;
            ll f=0;
            if(v[0]<=p)
            {
                  f++;
                  p-=v[0];
            }
             for(ll i=1;i<n;i+=k)
            {
                  if(i+1<n&&v[i+1]<=p)
                  {
                    p-=v[i+1]    ;
                    f+=2;
                  }
            }
            cout<<max(f,res)<<endl;



      }


}

