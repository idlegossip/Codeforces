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
            ll w,h;
            cin>>w>>h>>n;
            ll cnt=1;
            while(w%2==0)
            {
                  w/=2;
                  cnt*=2;
            }
             while(h%2==0)
            {
                  h/=2;
                  cnt*=2;
            }
            if(cnt>=n)
            {
                  cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;



      }

}
