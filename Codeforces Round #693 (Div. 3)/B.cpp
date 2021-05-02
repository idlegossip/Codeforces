#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            string str;
            ll n;
            vector<ll>v;

            ll res=0;
            cin>>n;
            ll a;
            ll cnt=0;
            ll on=0,tw=0;
            for(ll i=0;i<n;i++)
            {
                  cin>>a;
                  if(a==1)
                        on++;
                  else
                        tw++;

            }
             tw=tw%2;
             if(tw)
                  on-=2;
             if(on<0)
                  on=1;
             if(on%2==1)
                  cout<<"NO"<<endl;
            else
                  cout<<"YES"<<endl;
      }

}

